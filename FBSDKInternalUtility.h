/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@interface FBSDKInternalUtility : NSObject
+(id)JSONStringForObject:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3 ;
+(id)objectForJSONString:(id)arg1 error:(id*)arg2 ;
+(id)dictionaryFromFBURL:(id)arg1 ;
+(id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id*)arg5 ;
+(id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id*)arg5 ;
+(void)validateURLSchemes;
+(char)isFacebookBundleIdentifier:(id)arg1 ;
+(char)isSafariBundleIdentifier:(id)arg1 ;
+(void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
+(unsigned long)currentTimeInMilliseconds;
+(char)isOSRunTimeVersionAtLeast:(SCD_Struct_FB63)arg1 ;
+(id)bundleForStrings;
+(char)shouldManuallyAdjustOrientation;
+(int)_compareOperatingSystemVersion:(SCD_Struct_FB63)arg1 toVersion:(SCD_Struct_FB63)arg2 ;
+(id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(/*^block*/id)arg2 stop:(char*)arg3 ;
+(char)isUIKitLinkTimeVersionAtLeast:(int)arg1 ;
+(id)convertRequestValue:(id)arg1 ;
+(char)isUIKitRunTimeVersionAtLeast:(int)arg1 ;
+(void)checkRegisteredCanOpenURLScheme:(id)arg1 ;
+(void)array:(id)arg1 addObject:(id)arg2 ;
+(void)validateAppID;
+(char)isRegisteredURLScheme:(id)arg1 ;
+(char)isRegisteredCanOpenURLScheme:(id)arg1 ;
+(char)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
+(char)isBrowserURL:(id)arg1 ;
+(id)queryStringWithDictionary:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(void)registerTransientObject:(id)arg1 ;
+(void)unregisterTransientObject:(id)arg1 ;
+(id)viewControllerforView:(id)arg1 ;
+(char)isFacebookAppInstalled;
+(char)isMessengerAppInstalled;
+(id)topMostViewController;
+(void)deleteFacebookCookies;
+(char)object:(id)arg1 isEqualToObject:(id)arg2 ;
+(SCD_Struct_FB63)operatingSystemVersion;
+(id)appURLScheme;
-(id)init;
@end

