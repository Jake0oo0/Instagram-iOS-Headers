/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:02 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	char _forceBlockingRenew;

}

@property (assign,nonatomic) char forceBlockingRenew;                             //@synthesize forceBlockingRenew=_forceBlockingRenew - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType; 
@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
+(void)initialize;
+(void)setSharedInstance:(id)arg1 ;
-(char)forceBlockingRenew;
-(void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(char)arg2 handler:(/*^block*/id)arg3 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(char)arg3 appID:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)accessTokenString;
-(void)setForceBlockingRenew:(char)arg1 ;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(ACAccountStore *)accountStore;
-(id)init;
-(ACAccountType *)accountType;
@end

