/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKLoginError : NSObject
+(id)errorFromReturnURLParameters:(id)arg1 ;
+(id)errorFromServerError:(id)arg1 ;
+(id)errorForSystemPasswordChange:(id)arg1 ;
+(id)errorForSystemAccountStoreError:(id)arg1 ;
+(id)errorForFailedLoginWithCode:(int)arg1 innerError:(id)arg2 ;
+(id)errorWithSystemAccountStoreDeniedError:(id)arg1 isCancellation:(char*)arg2 ;
+(id)errorForFailedLoginWithCode:(int)arg1 ;
+(id)errorDomain;
-(id)init;
@end

