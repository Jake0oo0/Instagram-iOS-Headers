
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor, NSDate;

@interface FXBlurView : UIView {

	char _blurEnabled;
	char _dynamic;
	char _iterationsSet;
	char _blurRadiusSet;
	char _dynamicSet;
	char _blurEnabledSet;
	char _needsDrawViewHierarchy;
	UIView* _underlyingView;
	unsigned _iterations;
	UIColor* _tintColor;
	NSDate* _lastUpdate;
	double _updateInterval;

}

@property (assign,nonatomic) char iterationsSet;                                 //@synthesize iterationsSet=_iterationsSet - In the implementation block
@property (assign,nonatomic) char blurRadiusSet;                                 //@synthesize blurRadiusSet=_blurRadiusSet - In the implementation block
@property (assign,nonatomic) char dynamicSet;                                    //@synthesize dynamicSet=_dynamicSet - In the implementation block
@property (assign,nonatomic) char blurEnabledSet;                                //@synthesize blurEnabledSet=_blurEnabledSet - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) char needsDrawViewHierarchy;                        //@synthesize needsDrawViewHierarchy=_needsDrawViewHierarchy - In the implementation block
@property (assign,getter=isBlurEnabled,nonatomic) char blurEnabled;              //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,getter=isDynamic,nonatomic) char dynamic;                      //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) unsigned iterations;                                //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) float blurRadius; 
@property (nonatomic,retain) UIColor * tintColor;                                //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * underlyingView;                     //@synthesize underlyingView=_underlyingView - In the implementation block
+(void)setBlurEnabled:(char)arg1 ;
+(void)setUpdatesEnabled;
+(void)setUpdatesDisabled;
+(Class)layerClass;
-(void)setUnderlyingView:(UIView *)arg1 ;
-(void)clearImage;
-(void)updateAsynchronously:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBlurEnabled:(char)arg1 ;
-(id)blurLayer;
-(char)viewOrSubviewNeedsDrawViewHierarchy:(id)arg1 ;
-(UIView *)underlyingView;
-(char)isBlurEnabled;
-(id)underlyingLayer;
-(id)blurPresentationLayer;
-(id)prepareUnderlyingViewForSnapshot;
-(char)needsDrawViewHierarchy;
-(void)restoreSuperviewAfterSnapshot:(id)arg1 ;
-(id)hideEmptyLayers:(id)arg1 ;
-(id)snapshotOfUnderlyingView;
-(id)blurredSnapshot:(id)arg1 radius:(float)arg2 ;
-(void)setLayerContents:(id)arg1 ;
-(char)iterationsSet;
-(void)setIterationsSet:(char)arg1 ;
-(char)blurRadiusSet;
-(void)setBlurRadiusSet:(char)arg1 ;
-(char)dynamicSet;
-(void)setDynamicSet:(char)arg1 ;
-(char)blurEnabledSet;
-(void)setBlurEnabledSet:(char)arg1 ;
-(void)setNeedsDrawViewHierarchy:(char)arg1 ;
-(char)shouldUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBlurRadius:(float)arg1 ;
-(float)blurRadius;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(unsigned)iterations;
-(void)setIterations:(unsigned)arg1 ;
-(void)setDynamic:(char)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)schedule;
-(char)isDynamic;
-(void)setUp;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(NSDate *)lastUpdate;
@end

