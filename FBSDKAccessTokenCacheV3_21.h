/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBSDKAccessTokenCaching.h>

@class FBSDKKeychainStore, NSString;

@interface FBSDKAccessTokenCacheV3_21 : NSObject <FBSDKAccessTokenCaching> {

	FBSDKKeychainStore* _keychainStore;

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

