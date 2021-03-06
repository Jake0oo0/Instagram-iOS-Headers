
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface IGTimeRulerView : UIView {

	float _pixelsPerSecond;
	float _totalTime;
	int _style;
	UIColor* _tickColor;
	int _tickFrequency;
	int _tickLabelfrequency;

}

@property (assign,nonatomic) int tickFrequency;                   //@synthesize tickFrequency=_tickFrequency - In the implementation block
@property (assign,nonatomic) int tickLabelfrequency;              //@synthesize tickLabelfrequency=_tickLabelfrequency - In the implementation block
@property (assign,nonatomic) float pixelsPerSecond;               //@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (assign,nonatomic) float totalTime;                     //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) int style;                           //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * tickColor;                 //@synthesize tickColor=_tickColor - In the implementation block
-(float)pixelsPerSecond;
-(UIColor *)tickColor;
-(void)updateTickValues;
-(void)sizeToFitTickFrequency:(float)arg1 ;
-(void)sizeToFitNextMinorTick;
-(int)tickFrequency;
-(void)setTickFrequency:(int)arg1 ;
-(int)tickLabelfrequency;
-(void)setTickLabelfrequency:(int)arg1 ;
-(void)setTickColor:(UIColor *)arg1 ;
-(void)setPixelsPerSecond:(float)arg1 ;
-(void)sizeToFitNextMajorTick;
-(id)durationStringForNumber:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(float)totalTime;
-(void)setTotalTime:(float)arg1 ;
@end

