
#import <Instagram/IGServiceHelperProtocol.h>
#import <Instagram/IGServiceHelperLoginProtocol.h>

@class OAConsumer, OAToken, NSString, IGUser, IGNonCurrentUserDefaults;

@interface IGXAuthServiceHelper : NSObject <IGServiceHelperProtocol, IGServiceHelperLoginProtocol> {

	char _loginPending;
	OAConsumer* _consumer;
	OAToken* _accessToken;
	NSString* _tokenString;
	IGUser* _currentUser;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) OAConsumer * consumer;                                       //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) char loginPending;                                           //@synthesize loginPending=_loginPending - In the implementation block
@property (nonatomic,retain) OAToken * accessToken;                                       //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * tokenString;                                        //@synthesize tokenString=_tokenString - In the implementation block
@property (nonatomic,retain) IGUser * currentUser;                                        //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(id)loginFooterMessage;
-(char)loginPending;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2 ;
-(id)loginViewController;
-(char)needsToReauthorize;
-(char)hasAdvancedOptions;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)currentUsername;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)isAvailableInCurrentLocale;
-(int)usernameType;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(id)viewControllerForAdvancedOptions;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)prefUsernameKey;
-(void)requestTokenTicket:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)requestTokenTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setAccessTokenFromTokenString:(id)arg1 ;
-(void)setLoginPending:(char)arg1 ;
-(void)saveLoginInfo;
-(void)setCurrentUser:(IGUser *)arg1 ;
-(void)setConsumer:(OAConsumer *)arg1 ;
-(OAConsumer *)consumer;
-(id)URLString;
-(IGUser *)currentUser;
-(OAToken *)accessToken;
-(void)logout;
-(void)setAccessToken:(OAToken *)arg1 ;
-(id)consumerKey;
-(id)consumerSecret;
-(char)isConfigured;
-(NSString *)tokenString;
-(void)setTokenString:(NSString *)arg1 ;
@end

