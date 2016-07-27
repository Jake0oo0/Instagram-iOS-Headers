
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGTimerProxyObjectType.h>

@protocol IGEventViewerPhotoPlaybackControllerDelegate;
@class NSTimer, IGTimerProxy, IGEventViewerPlaybackItem, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerPhotoPlaybackController : NSObject <IGFeedPhotoViewDelegate, IGTimerProxyObjectType> {

	id<IGEventViewerPhotoPlaybackControllerDelegate> _delegate;
	NSTimer* _timer;
	IGTimerProxy* _timerProxy;
	IGEventViewerPlaybackItem* _playbackItem;
	IGEventViewerAnalyticsLogger* _logger;
	double _timerProgress;

}

@property (nonatomic,retain) NSTimer * timer;                                                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) IGTimerProxy * timerProxy;                                                     //@synthesize timerProxy=_timerProxy - In the implementation block
@property (assign,nonatomic) double timerProgress;                                                          //@synthesize timerProgress=_timerProgress - In the implementation block
@property (nonatomic,retain) IGEventViewerPlaybackItem * playbackItem;                                      //@synthesize playbackItem=_playbackItem - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerPhotoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,readonly) float currentDuration; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFireTimer:(id)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(void)stopCurrentlyPlayingPhoto;
-(void)playPhotoForItem:(id)arg1 ;
-(void)pauseCurrentlyPlayingPhoto;
-(IGEventViewerPlaybackItem *)playbackItem;
-(char)isCurrentlyPlayingPhoto;
-(double)timerProgress;
-(void)setTimerProgress:(double)arg1 ;
-(void)setPlaybackItem:(IGEventViewerPlaybackItem *)arg1 ;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)setTimerProxy:(IGTimerProxy *)arg1 ;
-(IGTimerProxy *)timerProxy;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)stopTimer;
-(float)currentProgress;
-(void)setDelegate:(id<IGEventViewerPhotoPlaybackControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGEventViewerPhotoPlaybackControllerDelegate>)delegate;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(float)currentDuration;
@end

