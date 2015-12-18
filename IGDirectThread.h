
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSOrderedSet, NSArray, IGDate, IGUser, IGPhoto, NSDictionary;

@interface IGDirectThread : NSObject <NSCopying, NSCoding> {

	char _isNamed;
	char _isPending;
	char _isMuted;
	char _isCanonical;
	char _isLocal;
	char _isPendingDeletion;
	NSString* _threadId;
	NSOrderedSet* _publishedContent;
	NSArray* _users;
	NSString* _nextMinId;
	NSString* _nextMaxId;
	NSString* _name;
	IGDate* _lastActivityDate;
	IGUser* _inviter;
	IGPhoto* _lastMediaItem;
	NSDictionary* _lastSeenAtForUserIds;
	NSDictionary* _lastSeenAtForItemIds;
	NSArray* _leftUsers;

}

@property (nonatomic,copy) NSString * threadId;                                //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) NSArray * allContent; 
@property (nonatomic,retain) NSOrderedSet * publishedContent;                  //@synthesize publishedContent=_publishedContent - In the implementation block
@property (nonatomic,retain) NSArray * users;                                  //@synthesize users=_users - In the implementation block
@property (nonatomic,copy) NSString * nextMinId;                               //@synthesize nextMinId=_nextMinId - In the implementation block
@property (nonatomic,copy) NSString * nextMaxId;                               //@synthesize nextMaxId=_nextMaxId - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) IGDate * lastSeenAt; 
@property (nonatomic,retain) IGDate * lastActivityDate;                        //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (assign,nonatomic) char isNamed;                                     //@synthesize isNamed=_isNamed - In the implementation block
@property (assign,nonatomic) char isPending;                                   //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic) char isMuted;                                     //@synthesize isMuted=_isMuted - In the implementation block
@property (assign,nonatomic) char isCanonical;                                 //@synthesize isCanonical=_isCanonical - In the implementation block
@property (nonatomic,retain) IGUser * inviter;                                 //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,retain) IGPhoto * lastMediaItem;                          //@synthesize lastMediaItem=_lastMediaItem - In the implementation block
@property (assign,nonatomic) char isLocal;                                     //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,copy,readonly) NSString * uploadIndexKey; 
@property (assign,nonatomic) char isPendingDeletion;                           //@synthesize isPendingDeletion=_isPendingDeletion - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSeenAtForUserIds;              //@synthesize lastSeenAtForUserIds=_lastSeenAtForUserIds - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSeenAtForItemIds;              //@synthesize lastSeenAtForItemIds=_lastSeenAtForItemIds - In the implementation block
@property (nonatomic,retain) NSArray * leftUsers;                              //@synthesize leftUsers=_leftUsers - In the implementation block
+(id)usernameStringForUsernames:(id)arg1 maxUsers:(int)arg2 ;
+(id)usernameStringForUsers:(id)arg1 ;
+(id)shortUsernameStringForUsers:(id)arg1 ;
+(id)usernameStringForUsers:(id)arg1 maxUsers:(int)arg2 ;
+(id)usersFromDictionary:(id)arg1 addSelf:(char)arg2 ;
+(id)contentArrayFromDictionary:(id)arg1 ;
+(id)lastMediaItemFromDictionary:(id)arg1 ;
+(void)lastSeenAtsFromDictionary:(id)arg1 userIdsToDates:(id*)arg2 itemIdsToDates:(id*)arg3 ;
+(id)mergeDataFromThread:(id)arg1 intoThread:(id)arg2 ;
+(id)contentFromDictionary:(id)arg1 ;
+(id)updatedThread:(id)arg1 withDictionary:(id)arg2 ;
+(id)threadIdFromDictionary:(id)arg1 ;
+(id)threadFromDictionary:(id)arg1 ;
-(id)lastSeenAtForUserWithId:(id)arg1 ;
-(id)orderedArrayOfUsersHideCurrentUser:(char)arg1 ;
-(IGPhoto *)lastMediaItem;
-(NSArray *)allContent;
-(IGDate *)lastSeenAt;
-(char)isPendingDeletion;
-(void)setIsPendingDeletion:(char)arg1 ;
-(NSString *)nextMaxId;
-(void)setNextMaxId:(NSString *)arg1 ;
-(NSString *)uploadIndexKey;
-(NSString *)nextMinId;
-(void)setNextMinId:(NSString *)arg1 ;
-(NSDictionary *)lastSeenAtForUserIds;
-(void)setLastSeenAtForUserIds:(NSDictionary *)arg1 ;
-(NSDictionary *)lastSeenAtForItemIds;
-(void)setLastSeenAtForItemIds:(NSDictionary *)arg1 ;
-(NSOrderedSet *)publishedContent;
-(void)setPublishedContent:(NSOrderedSet *)arg1 ;
-(char)isNamed;
-(void)setIsNamed:(char)arg1 ;
-(void)setIsPending:(char)arg1 ;
-(char)isCanonical;
-(void)setIsCanonical:(char)arg1 ;
-(void)setInviter:(IGUser *)arg1 ;
-(void)setLastMediaItem:(IGPhoto *)arg1 ;
-(NSArray *)leftUsers;
-(void)setLeftUsers:(NSArray *)arg1 ;
-(id)allContentsWithUploads:(id)arg1 ;
-(id)initLocalThreadWithUsers:(id)arg1 lastActivityDate:(id)arg2 ;
-(id)copyByTrimmingContentToCount:(unsigned)arg1 ;
-(id)copyForcingLastSeenToDate:(id)arg1 ;
-(id)seenAtForItemsWithId:(id)arg1 ;
-(char)allowsNameChanges;
-(id)copyByAddingContentFromArray:(id)arg1 ;
-(id)copyByRemovingContentWithId:(id)arg1 ;
-(id)copyBySettingLastSeenForUserWithId:(id)arg1 toTimestamp:(id)arg2 withSeenItemId:(id)arg3 ;
-(id)copyBySettingMuteStatusTo:(char)arg1 ;
-(id)copyByRenamingTo:(id)arg1 ;
-(IGDate *)lastActivityDate;
-(void)setLastActivityDate:(IGDate *)arg1 ;
-(void)setIsLocal:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isPending;
-(IGUser *)inviter;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
-(char)isLocal;
@end

