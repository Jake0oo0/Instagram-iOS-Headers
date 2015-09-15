/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:49 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSessionUtility : NSObject
+(id)userIDFromSignedRequest:(id)arg1 ;
+(char)isOpenSessionResponseURL:(id)arg1 ;
+(char)areRequiredPermissions:(id)arg1 aSubsetOfPermissions:(id)arg2 ;
+(int)loginBehaviorForLoginType:(int)arg1 ;
+(void)validateRequestForPermissions:(id)arg1 defaultAudience:(int)arg2 allowSystemAccount:(char)arg3 isRead:(char)arg4 ;
+(id)clientStateFromQueryParams:(id)arg1 ;
+(id)queryParamsFromLoginURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3 ;
+(id)sessionStateDescription:(int)arg1 ;
+(id)audienceNameWithAudience:(int)arg1 ;
+(void)addWebLoginStartTimeToParams:(id)arg1 ;
+(id)expirationDateFromResponseParams:(id)arg1 ;
+(void)extractPermissionsFromResponse:(id)arg1 allPermissions:(id)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4 ;
+(char)logIfFoundUnexpectedPermissions:(id)arg1 isRead:(char)arg2 ;
@end

