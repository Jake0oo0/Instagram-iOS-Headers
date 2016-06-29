
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedVideoCell.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGFeedItemVideoViewDoubleTapDelegate.h>

@protocol IGFeedVideoCellInteractionDelegate, IGFeedVideoCellPlayerDelegate;
@class IGPost, IGFeedItemVideoView, NSString;

@interface IGFeedItemVideoCell : IGFeedItemMediaCell <IGFeedVideoCell, IGFeedItemVideoViewDelegate, IGFeedItemVideoViewDoubleTapDelegate> {

	IGPost* _post;
	float _percentVisible;
	id<IGFeedVideoCellInteractionDelegate> _interactionDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	IGFeedItemVideoView* _videoView;

}

@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                                              //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                        //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float percentVisible;                                                         //@synthesize percentVisible=_percentVisible - In the implementation block
-(void)setPost:(id)arg1 ;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(id)accessibleElements;
-(id)post;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(void)handleDidBeginPlaying;
-(void)handleDidPause;
-(void)handleDidEndPlaying;
-(void)handleDidRequestPlayback;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)didDoubleTapFeedItemVideoView:(id)arg1 ;
-(IGFeedItemVideoView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setInteractionDelegate:(id<IGFeedVideoCellInteractionDelegate>)arg1 ;
-(id<IGFeedVideoCellInteractionDelegate>)interactionDelegate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(char)isSponsored;
@end

