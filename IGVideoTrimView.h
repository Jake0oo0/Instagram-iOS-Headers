
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGVideoTrimViewDelegate;
@class UIScrollView, IGFilmStripView, IGVideoTrimViewControl, UIView, UIImageView, IGTimeRulerView, CALayer, UILabel, NSString;

@interface IGVideoTrimView : UIView <UIGestureRecognizerDelegate> {

	char _showsConfirmationControl;
	char _playheadHidden;
	id<IGVideoTrimViewDelegate> _delegate;
	float _timeScale;
	float _assetDuration;
	float _minimumTrimLength;
	float _maximumTrimLength;
	float _playbackOffset;
	UIScrollView* _scrollView;
	IGFilmStripView* _filmstripView;
	IGVideoTrimViewControl* _confirmationControl;
	unsigned _panningTrimHandle;
	UIView* _leftDistortionView;
	UIImageView* _trimHandlesView;
	UIView* _rightDistortionView;
	IGTimeRulerView* _rulerView;
	CALayer* _shadowLayer;
	UIImageView* _playheadImageView;
	UILabel* _playheadLabel;
	float _previousPanningOffset;
	IGRange _trimmedRange;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * leftDistortionView;                                 //@synthesize leftDistortionView=_leftDistortionView - In the implementation block
@property (nonatomic,retain) UIImageView * trimHandlesView;                               //@synthesize trimHandlesView=_trimHandlesView - In the implementation block
@property (nonatomic,retain) UIView * rightDistortionView;                                //@synthesize rightDistortionView=_rightDistortionView - In the implementation block
@property (nonatomic,retain) IGFilmStripView * filmstripView;                             //@synthesize filmstripView=_filmstripView - In the implementation block
@property (nonatomic,retain) IGTimeRulerView * rulerView;                                 //@synthesize rulerView=_rulerView - In the implementation block
@property (nonatomic,retain) CALayer * shadowLayer;                                       //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) UIImageView * playheadImageView;                             //@synthesize playheadImageView=_playheadImageView - In the implementation block
@property (nonatomic,retain) UILabel * playheadLabel;                                     //@synthesize playheadLabel=_playheadLabel - In the implementation block
@property (assign,nonatomic) float previousPanningOffset;                                 //@synthesize previousPanningOffset=_previousPanningOffset - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoTrimViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float timeScale;                                             //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) float assetDuration;                                         //@synthesize assetDuration=_assetDuration - In the implementation block
@property (assign,nonatomic) char showsConfirmationControl;                               //@synthesize showsConfirmationControl=_showsConfirmationControl - In the implementation block
@property (assign,nonatomic) IGRange trimmedRange;                                        //@synthesize trimmedRange=_trimmedRange - In the implementation block
@property (assign,nonatomic) float minimumTrimLength;                                     //@synthesize minimumTrimLength=_minimumTrimLength - In the implementation block
@property (assign,nonatomic) float maximumTrimLength;                                     //@synthesize maximumTrimLength=_maximumTrimLength - In the implementation block
@property (assign,nonatomic) float playbackOffset;                                        //@synthesize playbackOffset=_playbackOffset - In the implementation block
@property (assign,nonatomic) char playheadHidden;                                         //@synthesize playheadHidden=_playheadHidden - In the implementation block
@property (nonatomic,readonly) IGVideoTrimViewControl * confirmationControl;              //@synthesize confirmationControl=_confirmationControl - In the implementation block
@property (nonatomic,readonly) unsigned panningTrimHandle;                                //@synthesize panningTrimHandle=_panningTrimHandle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeScale:(float)arg1 ;
-(unsigned)panningTrimHandle;
-(CALayer *)shadowLayer;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(void)userDidPanTrimHandles:(id)arg1 ;
-(CGRect)rectForTrimRange:(IGRange)arg1 ;
-(void)updatePlayheadLabel;
-(id)durationStringForNumber:(id)arg1 ;
-(void)setPlayheadHidden:(char)arg1 animated:(char)arg2 ;
-(CGRect)touchRectForTrimHandle:(unsigned)arg1 ;
-(unsigned)trimHandleAtPoint:(CGPoint)arg1 ;
-(char)pointInsideTrimHandles:(CGPoint)arg1 ;
-(void)scrollToTrimHandles;
-(void)setTrimmedRange:(IGRange)arg1 ;
-(void)setShowsConfirmationControl:(char)arg1 ;
-(void)setPlaybackOffset:(float)arg1 ;
-(void)setPlayheadHidden:(char)arg1 ;
-(char)showsConfirmationControl;
-(IGRange)trimmedRange;
-(float)playbackOffset;
-(char)playheadHidden;
-(IGVideoTrimViewControl *)confirmationControl;
-(UIView *)leftDistortionView;
-(void)setLeftDistortionView:(UIView *)arg1 ;
-(UIImageView *)trimHandlesView;
-(void)setTrimHandlesView:(UIImageView *)arg1 ;
-(UIView *)rightDistortionView;
-(void)setRightDistortionView:(UIView *)arg1 ;
-(IGTimeRulerView *)rulerView;
-(void)setRulerView:(IGTimeRulerView *)arg1 ;
-(UIImageView *)playheadImageView;
-(void)setPlayheadImageView:(UIImageView *)arg1 ;
-(UILabel *)playheadLabel;
-(void)setPlayheadLabel:(UILabel *)arg1 ;
-(float)previousPanningOffset;
-(void)setPreviousPanningOffset:(float)arg1 ;
-(float)timeScale;
-(IGFilmStripView *)filmstripView;
-(void)setFilmstripView:(IGFilmStripView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGVideoTrimViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGVideoTrimViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(float)maximumTrimLength;
-(void)setMaximumTrimLength:(float)arg1 ;
-(float)minimumTrimLength;
-(void)setMinimumTrimLength:(float)arg1 ;
-(void)setAssetDuration:(float)arg1 ;
-(float)assetDuration;
@end

