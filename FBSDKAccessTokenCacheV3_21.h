/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:06 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

