/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTPerformanceLogger : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(void)sendTimespans;
-(void)dealloc;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

