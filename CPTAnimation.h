

@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSMutableArray, NSObject;

@interface CPTAnimation : NSObject {

	float timeOffset;
	int defaultAnimationCurve;
	NSMutableArray* animationOperations;
	NSMutableArray* runningAnimationOperations;
	NSObject*<OS_dispatch_source> timer;
	NSObject*<OS_dispatch_queue> animationQueue;

}

@property (assign,nonatomic) float timeOffset; 
@property (nonatomic,retain) NSMutableArray * animationOperations; 
@property (nonatomic,retain) NSMutableArray * runningAnimationOperations; 
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> animationQueue; 
@property (assign,nonatomic) int defaultAnimationCurve; 
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(SEL)setterFromProperty:(id)arg1 ;
+(id)animate:(id)arg1 property:(id)arg2 period:(id)arg3 animationCurve:(int)arg4 delegate:(id)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 from:(float)arg3 to:(float)arg4 duration:(float)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPoint:(CGPoint)arg3 toPoint:(CGPoint)arg4 duration:(float)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(id)animate:(id)arg1 property:(id)arg2 fromSize:(CGSize)arg3 toSize:(CGSize)arg4 duration:(float)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(id)animate:(id)arg1 property:(id)arg2 fromRect:(CGRect)arg3 toRect:(CGRect)arg4 duration:(float)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(SCD_Struct_CP137)arg3 toDecimal:(SCD_Struct_CP137)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(SCD_Struct_CP137)arg3 toDecimal:(SCD_Struct_CP137)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(id)animate:(id)arg1 property:(id)arg2 fromDecimal:(SCD_Struct_CP137)arg3 toDecimal:(SCD_Struct_CP137)arg4 duration:(float)arg5 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5 withDelay:(float)arg6 animationCurve:(int)arg7 delegate:(id)arg8 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5 animationCurve:(int)arg6 delegate:(id)arg7 ;
+(id)animate:(id)arg1 property:(id)arg2 fromPlotRange:(id)arg3 toPlotRange:(id)arg4 duration:(float)arg5 ;
+(id)sharedInstance;
-(id)addAnimationOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)animationQueue;
-(NSMutableArray *)animationOperations;
-(NSMutableArray *)runningAnimationOperations;
-(/*function pointer*/void*)timingFunctionForAnimationCurve:(int)arg1 ;
-(void)updateOnMainThreadWithParameters:(id)arg1 ;
-(int)defaultAnimationCurve;
-(void)removeAnimationOperation:(id)arg1 ;
-(void)removeAllAnimationOperations;
-(id)operationWithIdentifier:(id)arg1 ;
-(void)setDefaultAnimationCurve:(int)arg1 ;
-(void)setAnimationOperations:(NSMutableArray *)arg1 ;
-(void)setRunningAnimationOperations:(NSMutableArray *)arg1 ;
-(void)setAnimationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(float)timeOffset;
-(void)setTimeOffset:(float)arg1 ;
-(void)update;
-(void)startTimer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)cancelTimer;
@end

