
#import <Instagram/IGFlickrAuthViewControllerDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGFlickrHelper : NSObject <IGFlickrAuthViewControllerDelegate, IGServiceHelperProtocol> {

	NSString* _tokenKey;
	NSString* _tokenSecret;
	NSString* _username;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(id)sharingInfo;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(void)flickrAuthController:(id)arg1 didLoginWithTokenKey:(id)arg2 tokenSecret:(id)arg3 username:(id)arg4 ;
-(void)flickrAuthControllerLoginFailed:(id)arg1 ;
-(void)loadTokens;
-(char)hasTokens;
-(id)oldFlickrToken;
-(void)setTokenKey:(id)arg1 tokenSecret:(id)arg2 username:(id)arg3 save:(char)arg4 ;
-(id)currentUsername;
-(void)reauthorizeIfNeeded;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(void)logout;
-(char)isConfigured;
@end

