/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGFacebookAuthHelperDelegate;
@interface IGFacebookAuthHelper : NSObject {

	char _isSubmittingRequest;
	id<IGFacebookAuthHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGFacebookAuthHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isSubmittingRequest;                                      //@synthesize isSubmittingRequest=_isSubmittingRequest - In the implementation block
+(void)requestAccessTokenWithReadPermissions:(id)arg1 fromViewController:(id)arg2 accessTokenCallback:(/*^block*/id)arg3 ;
+(void)fetchCurrentFBUsernameWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setIsSubmittingRequest:(char)arg1 ;
-(char)isSubmittingRequest;
-(void)handleLoginError:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)handleLoginResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleLoggedInUserForResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleFBLoginDistilleryErrorWithCode:(int)arg1 response:(id)arg2 facebookAccessToken:(id)arg3 loginType:(int)arg4 ;
-(void)handleFBErrorEmailAlreadyTakenForResponse:(id)arg1 ;
-(void)handleFBErrorEmailTakenAutoLoginForResponse:(id)arg1 facebookAccessToken:(id)arg2 loginType:(int)arg3 ;
-(void)handleFBErrorLockedAccountForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)handleFBErrorNoFBForResponse:(id)arg1 facebookAccessToken:(id)arg2 ;
-(void)submitFBSignupRequestWithFacebookAccessToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleLoginWithResponse:(id)arg1 facebookAccessToken:(id)arg2 error:(id)arg3 loginType:(int)arg4 ;
-(void)setDelegate:(id<IGFacebookAuthHelperDelegate>)arg1 ;
-(id<IGFacebookAuthHelperDelegate>)delegate;
@end

