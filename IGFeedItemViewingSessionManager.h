

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

