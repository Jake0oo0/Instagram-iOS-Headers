/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFoursquareAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGFoursquareHelper : NSObject <IGFoursquareAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;
	NSString* _username;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(id)authURLString;
-(void)foursquareAuthControllerLoginFailed:(id)arg1 ;
-(id)callbackURLString;
-(void)foursquareAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 username:(id)arg3 ;
-(char)needsToReauthorize;
-(char)hasAdvancedOptions;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)currentUsername;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)isAvailableInCurrentLocale;
-(char)hasEverBeenConfigured;
-(id)viewControllerForAdvancedOptions;
-(void)setAccessToken:(id)arg1 username:(id)arg2 save:(char)arg3 ;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

