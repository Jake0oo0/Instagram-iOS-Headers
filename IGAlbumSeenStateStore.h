
#import <Instagram/IGUserSessionClearableObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface IGAlbumSeenStateStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	NSObject*<OS_dispatch_queue> _archiveQueue;
	NSMutableArray* _seenStateList;

}

@property (nonatomic,copy,readonly) NSString * userSessionPK;                          //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> archiveQueue;              //@synthesize archiveQueue=_archiveQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * seenStateList;                           //@synthesize seenStateList=_seenStateList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)diskCacheFilePathForUser:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)setLastSeenDate:(id)arg1 forAlbumPK:(id)arg2 ;
-(NSString *)userSessionPK;
-(void)setSeenStateList:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(NSMutableArray *)seenStateList;
-(id)initWithUserSessionPK:(id)arg1 ;
-(id)lastSeenDateForAlbumPK:(id)arg1 ;
-(void)archive;
-(void)clearCache;
@end

