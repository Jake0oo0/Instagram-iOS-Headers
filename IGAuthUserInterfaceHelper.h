/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGAuthUserInterfaceHelper : NSObject
+(void)initiateUserSwitchLogoutUIAnimated:(char)arg1 entryPoint:(unsigned)arg2 failureBlock:(/*^block*/id)arg3 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 authLogInType:(int)arg3 defaultSelectedTab:(int)arg4 entryPoint:(unsigned)arg5 ;
+(void)showAccountSwitchedAlertBarForUser:(id)arg1 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 authLogInType:(int)arg3 defaultSelectedTab:(int)arg4 ;
+(void)showForceLogoutAlertViewForUser:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
+(void)initiateLoginUIWithUserInfo:(id)arg1 ;
+(void)showHasMaximumNumberOfAccountsAlertViewWithDismissBlock:(/*^block*/id)arg1 ;
+(void)cancelUserSwitchLogoutUI;
@end

