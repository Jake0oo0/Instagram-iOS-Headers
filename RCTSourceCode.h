/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSData, NSURL, NSString;

@interface RCTSourceCode : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;
	NSData* _scriptData;
	NSURL* _scriptURL;

}

@property (nonatomic,copy) NSData * scriptData;                                       //@synthesize scriptData=_scriptData - In the implementation block
@property (nonatomic,copy) NSURL * scriptURL;                                         //@synthesize scriptURL=_scriptURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__300;
+(void)load;
-(id)constantsToExport;
-(void)setScriptText:(id)arg1 ;
-(void)getScriptText:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(NSData *)scriptData;
-(void)setScriptData:(NSData *)arg1 ;
-(RCTBridge *)bridge;
-(NSURL *)scriptURL;
-(void)setScriptURL:(NSURL *)arg1 ;
@end

