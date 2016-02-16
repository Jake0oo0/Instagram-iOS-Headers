/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/NJKWebViewProgressDelegate.h>

@protocol IGModernWebViewControllerDelegate;
@class NSURL, UIWebView, NJKWebViewProgress, UIProgressView, NSTimer, UIBarButtonItem, IGModernWebViewToolbar, IGViewControllerTitleDetailTitleView, UILabel, NSString, IGTableViewInsetInfoView;

@interface IGModernWebViewController : IGViewController <UIWebViewDelegate, NJKWebViewProgressDelegate> {

	char _didAppear;
	char _isInitialPageLoaded;
	id<IGModernWebViewControllerDelegate> _delegate;
	NSURL* _URL;
	UIWebView* _webView;
	NJKWebViewProgress* _webViewProgress;
	UIProgressView* _progressView;
	NSTimer* _hideProgressViewTimer;
	UIBarButtonItem* _shareBarButtonItem;
	IGModernWebViewToolbar* _toolBar;
	IGViewControllerTitleDetailTitleView* _titleView;
	UILabel* _titleLabel;
	NSString* _currentTitle;
	IGTableViewInsetInfoView* _infoView;
	double _webViewInitialPageLoadStartTime;

}

@property (assign,nonatomic,__weak) id<IGModernWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NJKWebViewProgress * webViewProgress;                               //@synthesize webViewProgress=_webViewProgress - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                      //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * hideProgressViewTimer;                                    //@synthesize hideProgressViewTimer=_hideProgressViewTimer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButtonItem;                               //@synthesize shareBarButtonItem=_shareBarButtonItem - In the implementation block
@property (nonatomic,retain) IGModernWebViewToolbar * toolBar;                                   //@synthesize toolBar=_toolBar - In the implementation block
@property (nonatomic,retain) IGViewControllerTitleDetailTitleView * titleView;                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char didAppear;                                                     //@synthesize didAppear=_didAppear - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;                                              //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic) double webViewInitialPageLoadStartTime;                             //@synthesize webViewInitialPageLoadStartTime=_webViewInitialPageLoadStartTime - In the implementation block
@property (assign,nonatomic) char isInitialPageLoaded;                                           //@synthesize isInitialPageLoaded=_isInitialPageLoaded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersTabBarHidden;
-(void)setNavigationBarTitle:(id)arg1 forURL:(id)arg2 ;
-(void)handleInfoViewTap:(id)arg1 ;
-(void)setWebViewInitialPageLoadStartTime:(double)arg1 ;
-(void)setDidAppear:(char)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(void)shareTapped;
-(id)currentPageURLStringForLogging;
-(IGModernWebViewToolbar *)toolBar;
-(void)setToolBar:(IGModernWebViewToolbar *)arg1 ;
-(void)onBackButtonTapped;
-(void)onForwardButtonTapped;
-(void)startHideProgressViewTimer;
-(char)isInitialPageLoaded;
-(double)webViewInitialPageLoadStartTime;
-(void)setIsInitialPageLoaded:(char)arg1 ;
-(void)startFinalProgressViewAnimation;
-(void)setHideProgressViewTimer:(NSTimer *)arg1 ;
-(NJKWebViewProgress *)webViewProgress;
-(void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2 ;
-(UIBarButtonItem *)shareBarButtonItem;
-(void)setWebViewProgress:(NJKWebViewProgress *)arg1 ;
-(NSTimer *)hideProgressViewTimer;
-(void)setShareBarButtonItem:(UIBarButtonItem *)arg1 ;
-(char)didAppear;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(char)shouldShowToolbar;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGModernWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGModernWebViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IGViewControllerTitleDetailTitleView *)titleView;
-(void)setTitleView:(IGViewControllerTitleDetailTitleView *)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(UIWebView *)webView;
-(NSURL *)URL;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSString *)currentTitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)updateNavigationButtons;
@end

