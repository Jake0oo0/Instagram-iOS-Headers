/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGRegistrationWaterfall : NSObject
+(id)logEndLoggedOutSessionEvent:(id)arg1 isFBLinkFlow:(char)arg2 ;
+(id)logLogInEvent:(id)arg1 logInToken:(id)arg2 ;
+(id)logRetroRegistrationStepEvent:(id)arg1 forStep:(int)arg2 ;
+(id)stepNameForRetroRegistrationStep:(int)arg1 ;
+(id)flowNameForRetroRegistrationStep:(int)arg1 ;
+(id)logLandingScreenEvent:(id)arg1 ;
+(id)logUsernameEvent:(id)arg1 username:(id)arg2 ;
+(id)logUsernameSuggestionEvent:(id)arg1 username:(id)arg2 index:(unsigned)arg3 ;
+(id)logPhoneRegistrationEvent:(id)arg1 forPhoneNumber:(id)arg2 ;
+(id)logEvent:(id)arg1 ;
@end

