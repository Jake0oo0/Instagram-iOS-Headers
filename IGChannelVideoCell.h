
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>

@class IGChannelOverlayView, CALayer;

@interface IGChannelVideoCell : IGFeedItemVideoCell {

	IGChannelOverlayView* _overlayView;
	CALayer* _touchDownLayer;
	int _style;

}

@property (nonatomic,readonly) IGChannelOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) CALayer * touchDownLayer;                        //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
@property (assign,nonatomic) int style;                                         //@synthesize style=_style - In the implementation block
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(void)configureVideoView;
-(void)configureWithChannel:(id)arg1 playerDelegate:(id)arg2 style:(int)arg3 ;
-(void)setupOverlayViewWithFrame:(CGRect)arg1 ;
-(void)setupTouchDownLayer;
-(void)setUpRoundCorner:(char)arg1 ;
-(CALayer *)touchDownLayer;
-(void)handleDidBeginPlaying;
-(void)handleDidPause;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(IGChannelOverlayView *)overlayView;
@end

