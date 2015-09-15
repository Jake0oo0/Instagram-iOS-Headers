/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:44 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSignInFormViewDelegate.h>

@class UIBarButtonItem, UIScrollView, IGSignInFormView, NSString;

@interface IGSignInViewController : IGViewController <IGSignInFormViewDelegate> {

	char _didAppearOnce;
	UIBarButtonItem* _nextButtonItem;
	UIScrollView* _scrollView;
	IGSignInFormView* _signInFormView;

}

@property (nonatomic,retain) UIBarButtonItem * nextButtonItem;               //@synthesize nextButtonItem=_nextButtonItem - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) IGSignInFormView * signInFormView;              //@synthesize signInFormView=_signInFormView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)signInFormViewDidStartSignIn;
-(void)signInFormViewDidSignIn;
-(void)signInFormViewDidFailSignIn;
-(void)signInFormView:(id)arg1 didFailWithServerError:(id)arg2 ;
-(void)signInFormViewDidReturnFromPasswordField:(id)arg1 ;
-(void)signInFormViewDidDismissForHelpWithUsername:(id)arg1 ;
-(IGSignInFormView *)signInFormView;
-(UIBarButtonItem *)nextButtonItem;
-(void)doSignIn;
-(void)doSignInFromReg:(char)arg1 ;
-(void)setNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSignInFormView:(IGSignInFormView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIScrollView *)scrollView;
-(void)setPassword:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
@end

