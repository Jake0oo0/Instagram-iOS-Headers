/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:58 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTInvalidating.h>

@protocol RCTBridgeModule, OS_dispatch_queue;
@class NSDictionary, NSString, RCTBridge, NSLock, NSArray, NSObject;

@interface RCTModuleData : NSObject <RCTInvalidating> {

	NSDictionary* _constantsToExport;
	NSString* _queueName;
	RCTBridge* _bridge;
	NSLock* _instanceLock;
	char _setupComplete;
	char _requiresMainThreadSetup;
	char _hasConstantsToExport;
	char _implementsBatchDidComplete;
	char _implementsPartialBatchDidFlush;
	NSArray* _methods;
	id<RCTBridgeModule> _instance;
	NSObject*<OS_dispatch_queue> _methodQueue;
	Class _moduleClass;

}

@property (nonatomic,readonly) Class moduleClass;                                     //@synthesize moduleClass=_moduleClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * methods;                                //@synthesize methods=_methods - In the implementation block
@property (nonatomic,readonly) char hasInstance; 
@property (nonatomic,readonly) char requiresMainThreadSetup;                          //@synthesize requiresMainThreadSetup=_requiresMainThreadSetup - In the implementation block
@property (nonatomic,readonly) char hasConstantsToExport;                             //@synthesize hasConstantsToExport=_hasConstantsToExport - In the implementation block
@property (nonatomic,readonly) id<RCTBridgeModule> instance;                          //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue;              //@synthesize methodQueue=_methodQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * config; 
@property (nonatomic,readonly) char implementsBatchDidComplete;                       //@synthesize implementsBatchDidComplete=_implementsBatchDidComplete - In the implementation block
@property (nonatomic,readonly) char implementsPartialBatchDidFlush;                   //@synthesize implementsPartialBatchDidFlush=_implementsPartialBatchDidFlush - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(char)hasInstance;
-(id)initWithModuleInstance:(id)arg1 bridge:(id)arg2 ;
-(id)initWithModuleClass:(Class)arg1 bridge:(id)arg2 ;
-(char)requiresMainThreadSetup;
-(void)gatherConstants;
-(char)hasConstantsToExport;
-(char)implementsPartialBatchDidFlush;
-(char)implementsBatchDidComplete;
-(void)setBridgeForInstance;
-(void)setUpMethodQueue;
-(void)finishSetupForInstance;
-(void)setUpInstanceAndBridge;
-(Class)moduleClass;
-(NSArray *)methods;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(void)setUp;
-(NSArray *)config;
-(id<RCTBridgeModule>)instance;
@end

