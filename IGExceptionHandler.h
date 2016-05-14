/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBBreakpadExceptionHandler.h>

@class NSString;

@interface IGExceptionHandler : FBBreakpadExceptionHandler {

	char _shouldObserveMemoryWarnings;
	NSString* _oomDetectionFile;
	SCD_Struct_IG71* _oomData;
	char _appLaunchedAfterMemoryCrash;

}

@property (nonatomic,readonly) char appLaunchedAfterMemoryCrash;              //@synthesize appLaunchedAfterMemoryCrash=_appLaunchedAfterMemoryCrash - In the implementation block
+(id)sharedExceptionHandler;
-(void)initializeOOMTracking;
-(void)updateUserNotification:(id)arg1 ;
-(void)clearUserNotification:(id)arg1 ;
-(void)networkTransferRateChangedNotification:(id)arg1 ;
-(void)initializeOOMData:(SCD_Struct_IG71*)arg1 ;
-(char)createOOMFile;
-(void)updateExceptionAndOOMDataWithAppState:(int)arg1 ;
-(char)appLaunchedAfterMemoryCrash;
-(void)updateTopViewController:(id)arg1 moduleName:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillTerminate;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
@end

