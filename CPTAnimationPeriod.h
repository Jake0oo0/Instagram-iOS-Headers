

#import <Instagram/Instagram-Structs.h>
@class NSValue;

@interface CPTAnimationPeriod : NSObject {

	NSValue* startValue;
	NSValue* endValue;
	float duration;
	float delay;
	float startOffset;

}

@property (assign,nonatomic) float startOffset; 
@property (nonatomic,copy) NSValue * startValue; 
@property (nonatomic,copy) NSValue * endValue; 
@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) float delay; 
+(id)periodWithStartValue:(id)arg1 endValue:(id)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStart:(float)arg1 end:(float)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStartSize:(CGSize)arg1 endSize:(CGSize)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStartRect:(CGRect)arg1 endRect:(CGRect)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStartDecimal:(SCD_Struct_CP137)arg1 endDecimal:(SCD_Struct_CP137)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
+(id)periodWithStartPlotRange:(id)arg1 endPlotRange:(id)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(char)canStartWithValueFromObject:(id)arg1 propertyGetter:(SEL)arg2 ;
-(void)setStartValueFromObject:(id)arg1 propertyGetter:(SEL)arg2 ;
-(id)tweenedValueForProgress:(float)arg1 ;
-(id)initWithStartValue:(id)arg1 endValue:(id)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStart:(float)arg1 end:(float)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStartSize:(CGSize)arg1 endSize:(CGSize)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStartRect:(CGRect)arg1 endRect:(CGRect)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStartDecimal:(SCD_Struct_CP137)arg1 endDecimal:(SCD_Struct_CP137)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(id)initWithStartPlotRange:(id)arg1 endPlotRange:(id)arg2 duration:(float)arg3 withDelay:(float)arg4 ;
-(NSValue *)endValue;
-(NSValue *)startValue;
-(id)init;
-(id)description;
-(float)duration;
-(float)delay;
-(void)setDuration:(float)arg1 ;
-(void)setDelay:(float)arg1 ;
-(float)startOffset;
-(void)setStartValue:(NSValue *)arg1 ;
-(void)setEndValue:(NSValue *)arg1 ;
-(void)setStartOffset:(float)arg1 ;
@end

