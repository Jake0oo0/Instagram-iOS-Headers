/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:28 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGUser;

@interface IGAuthHelper : NSObject {

	IGUser* _currentUser;

}

@property (nonatomic,retain) IGUser * currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
+(id)sharedAuthHelper;
+(void)migrateOldCurrentUser;
-(IGUser *)currentUser;
-(char)currentUserIsLoggedIn;
-(void)logInWithDictionary:(id)arg1 ;
-(void)logOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unarchiveCurrentUser;
-(void)synchronizeUserWithKeychain:(id)arg1 ;
-(void)updateCurrentUser:(id)arg1 ;
-(void)doLocalLogoutForUser:(id)arg1 ;
-(void)clearCurrentUser;
-(id)profilePictureDataFromImage:(id)arg1 ;
-(void)onProfilePictureChanged:(id)arg1 ;
-(void)onProfilePictureFailed:(id)arg1 ;
-(char)cookiesAreValidForUserID:(id)arg1 ;
-(void)logInWithAuthenticatedUser:(id)arg1 ;
-(void)uploadProfilePicture:(id)arg1 ;
-(void)removeProfilePicture;
-(void)changePrivacySetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)changeProfanityFilterSetting:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)getProfanityFilterSetting:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(id)uniqueID;
-(void)archive;
@end

