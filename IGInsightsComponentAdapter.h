

@protocol IGInsightsComponentAdapter <NSObject>
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
@required
-(id)componentView;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3;
-(char)isComponentValid;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

