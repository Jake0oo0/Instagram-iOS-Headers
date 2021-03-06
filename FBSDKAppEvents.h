

@class NSTimer, FBSDKServerConfiguration, FBSDKAppEventsState, NSString;

@interface FBSDKAppEvents : NSObject {

	char _explicitEventsLoggedYet;
	NSTimer* _flushTimer;
	NSTimer* _attributionIDRecheckTimer;
	FBSDKServerConfiguration* _serverConfiguration;
	FBSDKAppEventsState* _appEventsState;
	char _disableTimer;
	unsigned _flushBehavior;
	NSString* _pushNotificationsDeviceTokenString;

}

@property (assign,nonatomic) unsigned flushBehavior;                                   //@synthesize flushBehavior=_flushBehavior - In the implementation block
@property (assign,nonatomic) char disableTimer;                                        //@synthesize disableTimer=_disableTimer - In the implementation block
@property (nonatomic,copy) NSString * pushNotificationsDeviceTokenString;              //@synthesize pushNotificationsDeviceTokenString=_pushNotificationsDeviceTokenString - In the implementation block
+(void)activateApp;
+(void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(void)logEvent:(id)arg1 parameters:(id)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
+(void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4 ;
+(unsigned)flushBehavior;
+(void)logPushNotificationOpen:(id)arg1 action:(id)arg2 ;
+(void)setFlushBehavior:(unsigned)arg1 ;
+(id)loggingOverrideAppID;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)logPushNotificationOpen:(id)arg1 ;
+(void)setPushNotificationsDeviceToken:(id)arg1 ;
+(void)setLoggingOverrideAppID:(id)arg1 ;
+(id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1 ;
+(void)flush;
+(void)initialize;
+(void)logEvent:(id)arg1 ;
+(id)singleton;
-(void)flushTimerFired:(id)arg1 ;
-(void)appSettingsFetchStateResetTimerFired:(id)arg1 ;
-(void)applicationMovingFromActiveStateOrTerminating;
-(void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(char)arg4 accessToken:(id)arg5 ;
-(unsigned)flushBehavior;
-(void)flushForReason:(unsigned)arg1 ;
-(void)publishInstall;
-(void)fetchServerConfiguration:(/*^block*/id)arg1 ;
-(void)setPushNotificationsDeviceTokenString:(NSString *)arg1 ;
-(void)setFlushBehavior:(unsigned)arg1 ;
-(void)flushOnMainQueue:(id)arg1 forReason:(unsigned)arg2 ;
-(void)checkPersistedEvents;
-(NSString *)pushNotificationsDeviceTokenString;
-(void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3 ;
-(char)disableTimer;
-(void)setDisableTimer:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive;
-(id)appID;
@end

