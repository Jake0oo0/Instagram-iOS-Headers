/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:19 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IGStoreProductSessionManager : NSObject {

	NSMutableDictionary* _storeProductSessions;

}

@property (nonatomic,retain) NSMutableDictionary * storeProductSessions;              //@synthesize storeProductSessions=_storeProductSessions - In the implementation block
-(id)sessionForFeedItem:(id)arg1 ;
-(char)canHaveSessionForFeedItem:(id)arg1 ;
-(void)prepareSessionForFeedItem:(id)arg1 ;
-(void)removeSessionForFeedItem:(id)arg1 ;
-(NSMutableDictionary *)storeProductSessions;
-(void)setStoreProductSessions:(NSMutableDictionary *)arg1 ;
@end

