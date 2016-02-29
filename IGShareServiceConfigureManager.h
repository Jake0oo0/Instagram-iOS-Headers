/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGMixiAdvancedOptionsDelegate.h>

@protocol IGShareServiceConfigureManagerDelegate;
@class UIViewController, NSString;

@interface IGShareServiceConfigureManager : NSObject <IGActionSheetDelegate, IGMixiAdvancedOptionsDelegate> {

	int _presentationStyle;
	id<IGShareServiceConfigureManagerDelegate> _delegate;

}

@property (assign,nonatomic) int presentationStyle;                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareServiceConfigureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)showAdvancedOptionsForServiceType:(int)arg1 ;
-(void)configureServiceType:(int)arg1 ;
-(void)onFlickrLoginCompleted;
-(void)onTwitterOAuthCompleted;
-(void)onFacebookCurrentUserInfoLoaded;
-(void)onFoursquareLoginCompleted;
-(void)onServiceReauthenticationStarted:(id)arg1 ;
-(void)onServiceReauthenticationFinished:(id)arg1 ;
-(void)onServiceReauthenticationLoginNeeded:(id)arg1 ;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 ;
-(void)onFacebookLoginCompleted;
-(void)onWeiboLoginCompleted;
-(void)onMixiLoginCompleted;
-(void)onTumblrLoginCompleted;
-(void)onVkLoginCompleted;
-(void)onVkLoginCancelledLogin;
-(void)onAmebaLoginCompleted;
-(void)onOdnoklassnikiLoginCompleted;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 animated:(char)arg3 ;
-(void)onServiceLoginCompleted:(int)arg1 animated:(char)arg2 ;
-(void)onServiceLoginCompleted:(int)arg1 ;
-(void)presentMixiPrivacyPicker;
-(void)mixiDidSelectPrivacySetting:(int)arg1 ;
-(void)mixiDidCancelPrivacySetting;
-(void)dismissEmailModal;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<IGShareServiceConfigureManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<IGShareServiceConfigureManagerDelegate>)delegate;
-(int)presentationStyle;
-(UIViewController *)viewController;
@end

