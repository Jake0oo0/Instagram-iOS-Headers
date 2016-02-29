/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface FBSDKTestUsersManager : NSObject {

	NSString* _appID;
	NSString* _appSecret;
	NSMutableDictionary* _accounts;

}
+(id)sharedInstanceForAppID:(id)arg1 appSecret:(id)arg2 ;
-(id)initWithAppID:(id)arg1 appSecret:(id)arg2 ;
-(id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2 ;
-(void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addTestAccountWithPermissions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3 ;
-(void)fetchExistingTestAccountsWithAfterCursor:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)appAccessToken;
-(void)makeFriendsWithFirst:(id)arg1 second:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)removeTestAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end

