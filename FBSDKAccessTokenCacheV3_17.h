/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:01 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBSDKAccessTokenCaching.h>

@class FBSDKKeychainStoreViaBundleID, NSString;

@interface FBSDKAccessTokenCacheV3_17 : NSObject <FBSDKAccessTokenCaching> {

	FBSDKKeychainStoreViaBundleID* _keychainStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1 ;
-(id)init;
-(void)clearCache;
@end

