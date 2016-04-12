/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSource.h>

@class IGUser;

@interface IGUserFeedNetworkSource : IGFeedNetworkSource {

	char _isAppColdStartEventSource;
	char _hasLoggedOnce;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;                               //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char isAppColdStartEventSource;              //@synthesize isAppColdStartEventSource=_isAppColdStartEventSource - In the implementation block
@property (assign,nonatomic) char hasLoggedOnce;                          //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
-(char)hasLoggedOnce;
-(void)setHasLoggedOnce:(char)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)handleAuthorizationError:(id)arg1 ;
-(void)onNewItemAvailable:(id)arg1 ;
-(char)isAppColdStartEventSource;
-(void)setIsAppColdStartEventSource:(char)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
@end

