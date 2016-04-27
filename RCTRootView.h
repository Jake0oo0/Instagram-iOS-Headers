
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol RCTRootViewDelegate;
@class RCTBridge, NSString, NSDictionary, RCTRootContentView, UIViewController, UIView;

@interface RCTRootView : UIView {

	RCTBridge* _bridge;
	NSString* _moduleName;
	NSDictionary* _launchOptions;
	RCTRootContentView* _contentView;
	NSDictionary* _appProperties;
	int _sizeFlexibility;
	id<RCTRootViewDelegate> _delegate;
	UIViewController* _reactViewController;
	UIView* _loadingView;
	CGSize _intrinsicSize;
	double _loadingViewFadeDelay;
	double _loadingViewFadeDuration;

}

@property (nonatomic,copy,readonly) NSString * moduleName;                               //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,readonly) RCTBridge * bridge;                                       //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,copy) NSDictionary * appProperties;                                 //@synthesize appProperties=_appProperties - In the implementation block
@property (assign,nonatomic) int sizeFlexibility;                                        //@synthesize sizeFlexibility=_sizeFlexibility - In the implementation block
@property (assign,nonatomic) CGSize intrinsicSize;                                       //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (assign,nonatomic,__weak) id<RCTRootViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * reactViewController;              //@synthesize reactViewController=_reactViewController - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                       //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) double loadingViewFadeDelay;                                //@synthesize loadingViewFadeDelay=_loadingViewFadeDelay - In the implementation block
@property (assign,nonatomic) double loadingViewFadeDuration;                             //@synthesize loadingViewFadeDuration=_loadingViewFadeDuration - In the implementation block
-(NSString *)moduleName;
-(id)reactTag;
-(void)bridgeDidReload;
-(void)javaScriptDidLoad:(id)arg1 ;
-(void)hideLoadingView;
-(void)bundleFinishedLoading:(id)arg1 ;
-(id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 ;
-(UIViewController *)reactViewController;
-(void)runApplication:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4 ;
-(void)setSizeFlexibility:(int)arg1 ;
-(void)setAppProperties:(NSDictionary *)arg1 ;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(void)contentViewInvalidated;
-(void)cancelTouches;
-(NSDictionary *)appProperties;
-(int)sizeFlexibility;
-(CGSize)intrinsicSize;
-(void)setReactViewController:(UIViewController *)arg1 ;
-(double)loadingViewFadeDelay;
-(void)setLoadingViewFadeDelay:(double)arg1 ;
-(double)loadingViewFadeDuration;
-(void)setLoadingViewFadeDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCTRootViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<RCTRootViewDelegate>)delegate;
-(UIView *)contentView;
-(char)canBecomeFirstResponder;
-(void)showLoadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(RCTBridge *)bridge;
-(UIView *)loadingView;
@end
