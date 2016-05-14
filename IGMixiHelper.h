/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMixiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (assign,nonatomic) int currentPrivacySetting; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(id)shortServiceName;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(char)hasSelectedPrivacySetting;
-(id)authURLString;
-(id)callbackURLString;
-(int)currentPrivacySetting;
-(id)getLabelForPrivacySetting:(int)arg1 ;
-(void)mixiAuthControllerLoginFailed:(id)arg1 ;
-(void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(id)getMixiConstantForPrivacySetting:(int)arg1 ;
-(void)setNeedsReauthorization;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(char)needsToReauthorize;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(char)hasAdvancedOptions;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)isAvailableInCurrentLocale;
-(char)hasEverBeenConfigured;
-(id)viewControllerForAdvancedOptions;
-(id)refreshToken;
-(void)setCurrentPrivacySetting:(int)arg1 ;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

