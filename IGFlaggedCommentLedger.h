/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, IGNonCurrentUserDefaults, NSString;

@interface IGFlaggedCommentLedger : NSObject <IGUserSessionClearableObject> {

	NSMutableDictionary* _flaggedComments;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)migrateUserDefaultsIfNecessary;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)containsComment:(id)arg1 ;
-(void)archive;
-(void)dealloc;
-(void)clear;
-(void)addComment:(id)arg1 ;
@end

