
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/NJKWebViewProgressDelegate.h>
#import <Instagram/FBWebView.h>

@protocol UIScrollViewDelegate, FBWebViewAnalytics;
@class UIWebView, FBUIWebViewDelegateAdaptor, NJKWebViewProgress, NSHashTable, UIView, NSString, NSURL, UIScrollView, NSURLRequest;

@interface FBUIWebView : UIView <NJKWebViewProgressDelegate, FBWebView> {

	CGPoint _lastTouchLocation;
	UIWebView* _webView;
	FBUIWebViewDelegateAdaptor* _delegateAdaptor;
	NJKWebViewProgress* _webViewProgressManager;
	id<UIScrollViewDelegate> _oldScrollViewDelegate;
	id _internalWebView;
	NSHashTable* _liveXMLHttpRequests;
	char _isBannerAtTop;
	char _loading;
	char _canGoBack;
	char _canGoForward;
	char _youtubeNavigationFix;
	UIView* _bannerView;
	int _displayState;
	UIView* _errorView;
	NSString* _title;
	NSURL* _currentLocationURL;
	id<FBWebViewAnalytics> _analytics;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                   //@synthesize analytics=_analytics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayState;                                   //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * currentLocationURL;                  //@synthesize currentLocationURL=_currentLocationURL - In the implementation block
@property (nonatomic,readonly) char canGoBack;                                   //@synthesize canGoBack=_canGoBack - In the implementation block
@property (nonatomic,readonly) char canGoForward;                                //@synthesize canGoForward=_canGoForward - In the implementation block
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView;                                //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                 //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isLoading,nonatomic,readonly) char loading;                    //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) char isBannerAtTop;                                 //@synthesize isBannerAtTop=_isBannerAtTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) char youtubeNavigationFix;                          //@synthesize youtubeNavigationFix=_youtubeNavigationFix - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(int)webViewImplementation;
-(NSURL *)currentLocationURL;
-(void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGestureRecognizersEnabled:(char)arg1 ;
-(void)updateOrientationWithOrientation:(int)arg1 ;
-(int)displayState;
-(void)setDisplayState:(int)arg1 ;
-(char)isBannerAtTop;
-(void)setIsBannerAtTop:(char)arg1 ;
-(char)youtubeNavigationFix;
-(void)setYoutubeNavigationFix:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 analytics:(id)arg2 ;
-(void)_layoutBannerView;
-(id)_webBrowserView;
-(void)_loadingStateChanged:(char)arg1 ;
-(void)_titleAndURLMayHaveChanged;
-(void)_navigationHistoryMayHaveChanged;
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(char)isLoading;
-(char)canGoBack;
-(char)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(char)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(char)hasOnlySecureContent;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)setBannerView:(UIView *)arg1 ;
@end

