/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBSDKAccessTokenCaching.h>

@class NSString;

@interface FBSDKAccessTokenCache : NSObject <FBSDKAccessTokenCaching>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deprecatedCacheClasses;
+(void)resetV3CacheChecks;
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1 ;
-(void)clearCache;
@end

