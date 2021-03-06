
#import <Instagram/IGOdnoklassnikiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class IGNonCurrentUserDefaults, NSString;

@interface IGOdnoklassnikiHelper : NSObject <IGOdnoklassnikiAuthDelegate, IGServiceHelperProtocol> {

	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _accessToken;
	NSString* _refreshToken;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(id)shortServiceName;
+(id)serviceName;
+(id)sharedHelper;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(void)okAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(void)okAuthControllerLoginFailed:(id)arg1 ;
-(char)hasEverBeenConfigured;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

