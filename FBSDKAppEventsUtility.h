/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:01 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKAppEventsUtility : NSObject
+(long)unixTimeNow;
+(id)attributionID;
+(id)advertiserID;
+(id)anonymousID;
+(unsigned)advertisingTrackingStatus;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(id)persistenceFilePath:(id)arg1 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(char)arg2 ;
+(char)regexValidateIdentifier:(id)arg1 ;
+(void)logAndNotify:(id)arg1 ;
+(void)ensureOnMainThread;
+(id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(char)arg2 shouldAccessAdvertisingID:(char)arg3 ;
+(void)clearLibraryFiles;
+(id)flushReasonToString:(unsigned)arg1 ;
+(char)validateIdentifier:(id)arg1 ;
+(id)tokenStringToUseFor:(id)arg1 ;
-(id)init;
@end

