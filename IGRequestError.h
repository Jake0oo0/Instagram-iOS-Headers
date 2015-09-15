/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@class NSString, NSURL;

@interface IGRequestError : NSError

@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSURL * helpURL; 
@property (nonatomic,readonly) char isSpam; 
@property (nonatomic,readonly) char isFeedbackRequired; 
@property (nonatomic,readonly) int statusCode; 
@property (nonatomic,readonly) int originalErrorCode; 
+(id)errorWithStatusCode:(int)arg1 message:(id)arg2 helpURL:(id)arg3 isSpam:(char)arg4 feedbackRequired:(char)arg5 originalErrorCode:(int)arg6 extraUserInfo:(id)arg7 ;
+(id)errorWithError:(id)arg1 statusCode:(int)arg2 ;
-(int)originalErrorCode;
-(char)isSpam;
-(char)isFeedbackRequired;
-(id)errorStringForAnalytics;
-(NSString *)message;
-(int)statusCode;
-(NSURL *)helpURL;
@end

