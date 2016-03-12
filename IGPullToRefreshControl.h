
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UILabel, CALayer;

@interface IGPullToRefreshControl : UIControl {

	char _isSpinning;
	char _isRecordingStatistics;
	int _refreshState;
	UIView* _spinnerViewContainer;
	UIView* _spinnerView;
	UILabel* _statusLabel;
	CALayer* _gradientLayer;
	float _previousProgress;
	float _startingProgressWhenLogged;
	float _angleSpeed;
	double _startingProgressTimeStamp;

}

@property (nonatomic,readonly) int refreshState;                            //@synthesize refreshState=_refreshState - In the implementation block
@property (nonatomic,retain) UIView * spinnerViewContainer;                 //@synthesize spinnerViewContainer=_spinnerViewContainer - In the implementation block
@property (nonatomic,retain) UIView * spinnerView;                          //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) char isSpinning;                               //@synthesize isSpinning=_isSpinning - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                       //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) float previousProgress;                        //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) float startingProgressWhenLogged;              //@synthesize startingProgressWhenLogged=_startingProgressWhenLogged - In the implementation block
@property (assign,nonatomic) double startingProgressTimeStamp;              //@synthesize startingProgressTimeStamp=_startingProgressTimeStamp - In the implementation block
@property (assign,nonatomic) float angleSpeed;                              //@synthesize angleSpeed=_angleSpeed - In the implementation block
@property (assign,nonatomic) char isRecordingStatistics;                    //@synthesize isRecordingStatistics=_isRecordingStatistics - In the implementation block
-(void)finishUpdatingWithOffset:(float)arg1 ;
-(void)updateWithOffsetAmount:(float)arg1 allowRefreshingState:(char)arg2 ;
-(void)finishRefreshing;
-(void)setSpinnerViewContainer:(UIView *)arg1 ;
-(UIView *)spinnerViewContainer;
-(void)updateSpinnerWithProgress:(float)arg1 ;
-(id)progressPathWithProgress:(float)arg1 ;
-(void)setupInitialAnimationState;
-(id)circularSpinningAnimation;
-(id)gradientSpinningAnimation;
-(void)setupFinishedAnimationState;
-(id)suggestedCircleSpinAnimationDestinationAngle;
-(double)suggestedCircleSpinAnimationDuration;
-(float)angleSpeed;
-(float)numberOfDiscreteUnits;
-(char)isShowingOnlyFirstSpinnerBar:(float)arg1 ;
-(char)isShowingNineClockSpinnerBars:(float)arg1 ;
-(char)isRecordingStatistics;
-(void)setIsRecordingStatistics:(char)arg1 ;
-(void)setStartingProgressWhenLogged:(float)arg1 ;
-(void)setStartingProgressTimeStamp:(double)arg1 ;
-(char)isShowingAllSpinnerBars:(float)arg1 ;
-(float)startingProgressWhenLogged;
-(double)startingProgressTimeStamp;
-(void)setAngleSpeed:(float)arg1 ;
-(float)discreteProgress:(float)arg1 ;
-(void)setSpinnerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer *)gradientLayer;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setPreviousProgress:(float)arg1 ;
-(float)previousProgress;
-(char)isSpinning;
-(void)setIsSpinning:(char)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(int)refreshState;
-(UIView *)spinnerView;
-(void)finishAnimation;
-(void)setGradientLayer:(CALayer *)arg1 ;
@end

