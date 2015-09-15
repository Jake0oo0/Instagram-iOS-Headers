/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:49 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, FBSession, NSTimer, NSRegularExpression, NSMutableSet, NSMutableDictionary;

@interface FBAppEvents : NSObject {

	char _haveOutstandingPersistedData;
	char _explicitEventsLoggedYet;
	char _appSupportsImplicitLogging;
	char _haveFetchedAppSettings;
	unsigned _flushBehavior;
	NSString* _loggingOverrideAppID;
	FBSession* _lastSessionLoggedTo;
	NSTimer* _flushTimer;
	NSTimer* _attributionIDRecheckTimer;
	int _appSupportsAttributionStatus;
	NSRegularExpression* _eventNameRegex;
	NSMutableSet* _validatedIdentifiers;
	NSMutableDictionary* _appAuthSessions;
	NSMutableDictionary* _anonymousSessions;

}

@property (assign) unsigned flushBehavior;                                        //@synthesize flushBehavior=_flushBehavior - In the implementation block
@property (copy) NSString * loggingOverrideAppID;                                 //@synthesize loggingOverrideAppID=_loggingOverrideAppID - In the implementation block
@property (assign) char haveOutstandingPersistedData;                             //@synthesize haveOutstandingPersistedData=_haveOutstandingPersistedData - In the implementation block
@property (assign) char explicitEventsLoggedYet;                                  //@synthesize explicitEventsLoggedYet=_explicitEventsLoggedYet - In the implementation block
@property (retain) FBSession * lastSessionLoggedTo;                               //@synthesize lastSessionLoggedTo=_lastSessionLoggedTo - In the implementation block
@property (retain) NSTimer * flushTimer;                                          //@synthesize flushTimer=_flushTimer - In the implementation block
@property (retain) NSTimer * attributionIDRecheckTimer;                           //@synthesize attributionIDRecheckTimer=_attributionIDRecheckTimer - In the implementation block
@property (assign) int appSupportsAttributionStatus;                              //@synthesize appSupportsAttributionStatus=_appSupportsAttributionStatus - In the implementation block
@property (assign) char appSupportsImplicitLogging;                               //@synthesize appSupportsImplicitLogging=_appSupportsImplicitLogging - In the implementation block
@property (assign) char haveFetchedAppSettings;                                   //@synthesize haveFetchedAppSettings=_haveFetchedAppSettings - In the implementation block
@property (copy) NSRegularExpression * eventNameRegex;                            //@synthesize eventNameRegex=_eventNameRegex - In the implementation block
@property (retain) NSMutableSet * validatedIdentifiers;                           //@synthesize validatedIdentifiers=_validatedIdentifiers - In the implementation block
@property (retain,readonly) NSMutableDictionary * appAuthSessions;                //@synthesize appAuthSessions=_appAuthSessions - In the implementation block
@property (retain,readonly) NSMutableDictionary * anonymousSessions;              //@synthesize anonymousSessions=_anonymousSessions - In the implementation block
+(void)logEvent:(id)arg1 ;
+(void)activateApp;
+(void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(void)logEvent:(id)arg1 parameters:(id)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
+(void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(unsigned)flushBehavior;
+(void)logAndNotify:(id)arg1 ;
+(void)setFlushBehavior:(unsigned)arg1 ;
+(id)loggingOverrideAppID;
+(void)setLoggingOverrideAppID:(id)arg1 ;
+(long)unixTimeNow;
+(void)ensureOnMainThread;
+(id)flushReasonToString:(int)arg1 ;
+(id)unaffinitizedSessionFromToken:(id)arg1 appID:(id)arg2 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(char)arg2 ;
+(id)retrievePersistedAppEventData;
+(void)clearPersistedAppEventData;
+(void)persistAppEventsData:(id)arg1 ;
+(id)persistenceDocumentFilePath:(id)arg1 ;
+(id)persistenceFilePath:(id)arg1 directory:(unsigned)arg2 ;
+(void)logEvent:(id)arg1 valueToSum:(double)arg2 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3 ;
+(char)limitEventUsage;
+(void)setLimitEventUsage:(char)arg1 ;
+(id)persistenceLibraryFilePath:(id)arg1 ;
+(id)customAudienceThirdPartyIDRequest:(id)arg1 ;
+(void)flush;
+(id)singleton;
-(void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(char)arg4 session:(id)arg5 ;
-(unsigned)flushBehavior;
-(void)instanceFlush:(int)arg1 ;
-(void)setFlushBehavior:(unsigned)arg1 ;
-(NSString *)loggingOverrideAppID;
-(char)explicitEventsLoggedYet;
-(void)setLoggingOverrideAppID:(NSString *)arg1 ;
-(void)setHaveOutstandingPersistedData:(char)arg1 ;
-(void)setAppSupportsAttributionStatus:(int)arg1 ;
-(void)flushTimerFired:(id)arg1 ;
-(void)setFlushTimer:(NSTimer *)arg1 ;
-(void)attributionIDRecheckTimerFired:(id)arg1 ;
-(void)setAttributionIDRecheckTimer:(NSTimer *)arg1 ;
-(void)applicationMovingFromActiveStateOrTerminating;
-(char)regexValidateIdentifier:(id)arg1 ;
-(NSRegularExpression *)eventNameRegex;
-(void)setEventNameRegex:(NSRegularExpression *)arg1 ;
-(void)setValidatedIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)validatedIdentifiers;
-(char)haveFetchedAppSettings;
-(char)appSupportsImplicitLogging;
-(void)setExplicitEventsLoggedYet:(char)arg1 ;
-(char)validateIdentifier:(id)arg1 ;
-(id)sessionToSendRequestTo:(id)arg1 ;
-(FBSession *)lastSessionLoggedTo;
-(void)setLastSessionLoggedTo:(FBSession *)arg1 ;
-(void)flush:(int)arg1 session:(id)arg2 ;
-(char)haveOutstandingPersistedData;
-(char)updateAppEventsStateWithPersistedData:(id)arg1 ;
-(void)flushOnMainQueue:(int)arg1 session:(id)arg2 ;
-(int)appSupportsAttributionStatus;
-(id)appIDToLogEventsWith:(id)arg1 ;
-(void)setAppSupportsImplicitLogging:(char)arg1 ;
-(void)setHaveFetchedAppSettings:(char)arg1 ;
-(void)appendAttributionAndAdvertiserIDs:(id)arg1 session:(id)arg2 accessAdvertisingID:(char)arg3 ;
-(void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 session:(id)arg3 ;
-(NSMutableDictionary *)appAuthSessions;
-(NSMutableDictionary *)anonymousSessions;
-(void)persistEventDataIfNotInFlight;
-(id)instanceCustomAudienceThirdPartyIDRequest:(id)arg1 ;
-(char)doesSessionHaveUserToken:(id)arg1 ;
-(NSTimer *)flushTimer;
-(NSTimer *)attributionIDRecheckTimer;
-(id)init;
-(void)applicationDidBecomeActive;
@end

