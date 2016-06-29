
#import <Instagram/RCTViewManager.h>
#import <Instagram/RCTWebViewDelegate.h>

@class NSConditionLock, NSString;

@interface RCTWebViewManager : RCTViewManager <RCTWebViewDelegate> {

	NSConditionLock* _shouldStartLoadLock;
	char _shouldStartLoad;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__520;
+(id)propConfig_source;
+(id)propConfig_bounces;
+(id)propConfig_scrollEnabled;
+(id)propConfig_decelerationRate;
+(id)propConfig_scalesPageToFit;
+(id)propConfig_injectedJavaScript;
+(id)propConfig_contentInset;
+(id)propConfig_automaticallyAdjustContentInsets;
+(id)propConfig_onLoadingStart;
+(id)propConfig_onLoadingFinish;
+(id)propConfig_onLoadingError;
+(id)propConfig_onShouldStartLoadWithRequest;
+(id)propConfig_allowsInlineMediaPlayback;
+(id)propConfig_mediaPlaybackRequiresUserAction;
+(id)__rct_export__641;
+(id)__rct_export__762;
+(id)__rct_export__883;
+(id)__rct_export__1234;
+(void)load;
-(char)webView:(id)arg1 shouldStartLoadForRequest:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)startLoadWithResult:(char)arg1 lockIdentifier:(int)arg2 ;
-(id)view;
-(void)stopLoading:(id)arg1 ;
-(void)reload:(id)arg1 ;
-(void)goBack:(id)arg1 ;
-(void)goForward:(id)arg1 ;
@end

