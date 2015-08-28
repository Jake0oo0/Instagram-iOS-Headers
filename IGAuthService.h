/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGAuthenticatedUser;

@interface IGAuthService : NSObject {

	IGAuthenticatedUser* _currentUser;

}

@property (nonatomic,retain) IGAuthenticatedUser * currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
+(id)sharedAuthService;
-(IGAuthenticatedUser *)currentUser;
-(id)cookieWithName:(id)arg1 value:(id)arg2 ;
-(id)cookieWithName:(id)arg1 ;
-(void)logInWithDictionary:(id)arg1 ;
-(void)logOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unarchiveCurrentUser;
-(void)logInWithUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)archiveCurrentUser;
-(void)setCurrentUser:(IGAuthenticatedUser *)arg1 ;
-(void)clearCookies;
-(id)uniqueID;
@end

