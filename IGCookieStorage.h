/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:43 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IGCookieStorage : NSObject {

	NSDictionary* _currentCookies;

}

@property (nonatomic,retain) NSDictionary * currentCookies;              //@synthesize currentCookies=_currentCookies - In the implementation block
+(id)sharedInstance;
-(void)storeCookies:(id)arg1 forKey:(id)arg2 shouldKeepExistingUserSessionCookies:(char)arg3 ;
-(id)cookiesForKey:(id)arg1 ;
-(void)purgeAllCookies;
-(void)purgeCookiesForKey:(id)arg1 ;
-(id)cookiePropertiesForKey:(id)arg1 ;
-(id)allCookies;
-(NSDictionary *)currentCookies;
-(id)keyChainStore;
-(void)setCurrentCookies:(NSDictionary *)arg1 ;
-(void)saveCookieProperties:(id)arg1 forKey:(id)arg2 ;
-(void)saveCookieKeyMap:(id)arg1 ;
-(void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2 ;
@end

