/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGRegistrationWaterfall : NSObject
+(id)logEvent:(id)arg1 ;
+(id)logLogInEvent:(id)arg1 logInToken:(id)arg2 ;
+(id)logEndLoggedOutSessionEvent:(id)arg1 isFBLinkFlow:(char)arg2 ;
+(id)logStepEvent:(id)arg1 forStep:(int)arg2 ;
+(id)logUsernameEvent:(id)arg1 username:(id)arg2 ;
+(id)logUsernameSuggestionEvent:(id)arg1 username:(id)arg2 index:(unsigned)arg3 ;
+(id)logPhoneRegistrationEvent:(id)arg1 forPhoneNumber:(id)arg2 ;
+(id)logLandingScreenEvent:(id)arg1 ;
+(id)stepNameForStep:(int)arg1 ;
+(id)flowNameForStep:(int)arg1 ;
@end

