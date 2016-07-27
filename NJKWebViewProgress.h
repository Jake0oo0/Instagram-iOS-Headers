
#import <UIKit/UIWebViewDelegate.h>

@protocol NJKWebViewProgressDelegate, UIWebViewDelegate;
@class NSURL, NSString;

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate> {

	unsigned _loadingCount;
	unsigned _maxLoadCount;
	char _interactive;
	id<NJKWebViewProgressDelegate> _progressDelegate;
	id<UIWebViewDelegate> _webViewProxyDelegate;
	float _progress;
	NSURL* _currentURL;

}

@property (nonatomic,retain) NSURL * currentURL;                                           //@synthesize currentURL=_currentURL - In the implementation block
@property (assign,nonatomic) id<NJKWebViewProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (assign,nonatomic) id<UIWebViewDelegate> webViewProxyDelegate;                   //@synthesize webViewProxyDelegate=_webViewProxyDelegate - In the implementation block
@property (nonatomic,readonly) float progress;                                             //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWebViewProxyDelegate:(id<UIWebViewDelegate>)arg1 ;
-(void)completeProgress;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)webViewDidFinishOrFailLoad:(id)arg1 ;
-(void)incrementProgress;
-(NSURL *)currentURL;
-(id<UIWebViewDelegate>)webViewProxyDelegate;
-(void)startProgress;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)reset;
-(void)setProgress:(float)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(float)progress;
-(id<NJKWebViewProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<NJKWebViewProgressDelegate>)arg1 ;
@end

