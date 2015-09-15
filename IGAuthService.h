/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:49 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
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
-(void)logInWithUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unarchiveCurrentUser;
-(void)archiveCurrentUser;
-(void)setCurrentUser:(IGAuthenticatedUser *)arg1 ;
-(void)clearCookies;
-(id)uniqueID;
@end

