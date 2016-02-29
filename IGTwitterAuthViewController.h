/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface IGTwitterAuthViewController : IGViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _callbackPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCallbackURL:(id)arg1 ;
-(void)startAuthorization;
-(id)pathSubstringForCallbackURL:(id)arg1 ;
-(void)userDidNotAuthorize;
-(id)extractTokenAndVerifierFromURL:(id)arg1 ;
-(void)userDidAuthorizeWithTokenKey:(id)arg1 secret:(id)arg2 username:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

