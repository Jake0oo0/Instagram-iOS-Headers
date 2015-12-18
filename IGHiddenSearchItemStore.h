
#import <Instagram/IGUserSessionClearableObject.h>

@class NSSet, NSString, IGNonCurrentUserDefaults, NSMutableOrderedSet, NSNumber;

@interface IGHiddenSearchItemStore : NSObject <IGUserSessionClearableObject> {

	NSSet* _itemIds;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMutableOrderedSet* _store;
	NSString* _defaultsKey;
	NSString* _expireStoreKey;
	NSString* _expireTimeKey;
	NSMutableOrderedSet* _expireStore;
	NSNumber* _expires;

}

@property (nonatomic,retain) NSSet * itemIds;                                             //@synthesize itemIds=_itemIds - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * store;                                 //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSString * defaultsKey;                                        //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * expireStoreKey;                                     //@synthesize expireStoreKey=_expireStoreKey - In the implementation block
@property (nonatomic,copy) NSString * expireTimeKey;                                      //@synthesize expireTimeKey=_expireTimeKey - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * expireStore;                           //@synthesize expireStore=_expireStore - In the implementation block
@property (nonatomic,retain) NSNumber * expires;                                          //@synthesize expires=_expires - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(void)clearForUserDefaults:(id)arg1 key:(id)arg2 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSMutableOrderedSet *)expireStore;
-(void)setItemIds:(NSSet *)arg1 ;
-(NSString *)defaultsKey;
-(NSString *)expireStoreKey;
-(NSString *)expireTimeKey;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 defaultsKey:(id)arg3 ;
-(void)addItemId:(id)arg1 isExpiring:(char)arg2 ;
-(NSSet *)itemIds;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(void)setExpireStoreKey:(NSString *)arg1 ;
-(void)setExpireTimeKey:(NSString *)arg1 ;
-(void)setExpireStore:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)store;
-(void)setStore:(NSMutableOrderedSet *)arg1 ;
-(void)setExpires:(NSNumber *)arg1 ;
-(NSNumber *)expires;
@end

