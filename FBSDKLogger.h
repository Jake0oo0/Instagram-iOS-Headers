/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:02 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface FBSDKLogger : NSObject {

	char _isActive;
	unsigned _loggerSerialNumber;
	NSString* _loggingBehavior;
	NSMutableString* _internalContents;

}

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,readonly) unsigned loggerSerialNumber;                     //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingBehavior;                 //@synthesize loggingBehavior=_loggingBehavior - In the implementation block
@property (nonatomic,readonly) char isActive;                                   //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) NSMutableString * internalContents;              //@synthesize internalContents=_internalContents - In the implementation block
+(void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2 ;
+(void)singleShotLogEntry:(id)arg1 formatString:(id)arg2 ;
+(unsigned)generateSerialNumber;
+(void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3 ;
+(void)registerCurrentTime:(id)arg1 withTag:(id)arg2 ;
+(void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2 ;
-(NSString *)loggingBehavior;
-(unsigned)loggerSerialNumber;
-(NSMutableString *)internalContents;
-(id)initWithLoggingBehavior:(id)arg1 ;
-(void)emitToNSLog;
-(void)appendKey:(id)arg1 value:(id)arg2 ;
-(char)isActive;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
@end

