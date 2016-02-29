/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IGRaindropActivitySession, NSMutableArray, NSString;

@interface IGAnalyticsRaindrop : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IGRaindropActivitySession* _currentActivitySession;
	unsigned long long _currentActivitySessionTimestamp;
	id _subscriptionDidBecomeActiveNotification;
	NSMutableArray* _loggedEventDictionaries;
	NSString* _deviceID;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceHardwareVersion;
	NSString* _filePath;
	int _eventCount;
	long long _beaconCount;
	/*^block*/id _extractUserInfo;
	NSString* _appID;
	NSString* _appVersion;
	int _toViewType;
	int _toViewSubType;
	NSString* _toViewEntityId;

}

@property (nonatomic,copy) id extractUserInfo;                         //@synthesize extractUserInfo=_extractUserInfo - In the implementation block
@property (nonatomic,copy) NSString * appID;                           //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                      //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) int toViewType;                           //@synthesize toViewType=_toViewType - In the implementation block
@property (assign,nonatomic) int toViewSubType;                        //@synthesize toViewSubType=_toViewSubType - In the implementation block
@property (nonatomic,readonly) NSString * toViewEntityId;              //@synthesize toViewEntityId=_toViewEntityId - In the implementation block
+(id)sharedInstance;
-(void)setExtractUserInfo:(id)arg1 ;
-(void)logRaindropEvent:(id)arg1 withNavState:(id)arg2 ;
-(void)raindropSwitchWithToViewType:(int)arg1 toViewSubType:(int)arg2 toViewEntityId:(id)arg3 ;
-(int)toViewType;
-(int)toViewSubType;
-(NSString *)toViewEntityId;
-(void)_updateActivitySession;
-(void)_writeGrobalBeaconToFile;
-(void)_readGlobalBeaconFromFile;
-(id)extractUserInfo;
-(id)_newLogEntryWithNavState:(id)arg1 event:(id)arg2 raindropEventName:(id)arg3 raindropEventData:(id)arg4 ;
-(void)addLoggedEvent:(id)arg1 logEntry:(id)arg2 ;
-(void)_logRaindropBeaconEvent;
-(void)_logRaindropEntry:(id)arg1 withNavState:(id)arg2 ;
-(id)getLoggedEvents;
-(void)setToViewType:(int)arg1 ;
-(void)setToViewSubType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appID;
@end

