/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/DDAbstractLogger.h>
#import <Instagram/DDLogger.h>

@class NSDateFormatter, NSString;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {

	NSDateFormatter* dateFormatter;
	char* app;
	char* pid;
	unsigned long appLen;
	unsigned long pidLen;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
-(id)loggerName;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

