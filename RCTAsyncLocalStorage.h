/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTInvalidating.h>

@class NSMutableDictionary, NSString, RCTBridge;

@interface RCTAsyncLocalStorage : NSObject <RCTBridgeModule, RCTInvalidating> {

	char _haveSetup;
	NSMutableDictionary* _manifest;
	char _clearOnInvalidate;

}

@property (assign,nonatomic) char clearOnInvalidate;                                  //@synthesize clearOnInvalidate=_clearOnInvalidate - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)clearAllData;
+(id)__rct_export__3230;
+(id)__rct_export__3421;
+(id)__rct_export__3622;
+(id)__rct_export__3983;
+(id)__rct_export__4304;
+(id)__rct_export__4385;
+(void)load;
-(void)clearAllData;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)_getValueForKey:(id)arg1 errorOut:(id*)arg2 ;
-(id)_filePathForKey:(id)arg1 ;
-(id)_ensureSetup;
-(id)_writeEntry:(id)arg1 changedManifest:(char*)arg2 ;
-(id)_writeManifest:(id*)arg1 ;
-(id)_appendItemForKey:(id)arg1 toArray:(id)arg2 ;
-(void)multiGet:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)multiSet:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)multiMerge:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)multiRemove:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)getAllKeys:(/*^block*/id)arg1 ;
-(char)clearOnInvalidate;
-(void)setClearOnInvalidate:(char)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(void)clear:(/*^block*/id)arg1 ;
@end

