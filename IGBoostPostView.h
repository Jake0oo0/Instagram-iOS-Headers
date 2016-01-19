/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGBoostPostHeaderViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGBoostPostViewDelegate;
@class UIWebView, IGBoostPostHeaderView, UIActivityIndicatorView, NSString;

@interface IGBoostPostView : UIView <IGBoostPostHeaderViewDelegate, UIWebViewDelegate> {

	id<IGBoostPostViewDelegate> _delegate;
	UIWebView* _webView;
	IGBoostPostHeaderView* _headerBar;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic,__weak) id<IGBoostPostViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) IGBoostPostHeaderView * headerBar;                      //@synthesize headerBar=_headerBar - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                      //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpViewHierarchy;
-(void)didSelectCloseOnBoostPostHeaderView:(id)arg1 ;
-(void)setUpHeaderBar;
-(IGBoostPostHeaderView *)headerBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGBoostPostViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGBoostPostViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

