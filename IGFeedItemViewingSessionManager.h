/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IGFeedItemViewingSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,retain) NSMutableDictionary * sessions;              //@synthesize sessions=_sessions - In the implementation block
-(id)keyForFeedItem:(id)arg1 ;
-(NSMutableDictionary *)sessions;
-(id)sessionForFeedItem:(id)arg1 ;
-(void)updateSessionsWithFeedItems:(id)arg1 ;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
@end

