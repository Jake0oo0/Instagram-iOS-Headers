/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OAProblem : NSObject {

	NSString* problem;

}

@property (readonly) NSString * problem; 
+(id)validProblems;
+(id)problemWithResponseBody:(id)arg1 ;
+(id)SignatureMethodRejected;
+(id)ParameterAbsent;
+(id)VersionRejected;
+(id)ConsumerKeyUnknown;
+(id)TokenRejected;
+(id)SignatureInvalid;
+(id)NonceUsed;
+(id)TimestampRefused;
+(id)TokenExpired;
+(id)TokenNotRenewable;
-(id)initWithProblem:(id)arg1 ;
-(id)initWithResponseBody:(id)arg1 ;
-(char)isEqualToProblem:(id)arg1 ;
-(id)initWithPointer:(id)arg1 ;
-(void)dealloc;
-(char)isEqualToString:(id)arg1 ;
-(id)description;
-(int)code;
-(NSString *)problem;
-(char)isEqualTo:(id)arg1 ;
@end

