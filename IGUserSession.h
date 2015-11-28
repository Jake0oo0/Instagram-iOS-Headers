

@class NSString, IGNonCurrentUserDefaults, IGAutocompleteHashtagsStore, IGAutocompletePlacesStore, IGAutocompleteUsersStore, IGBlendedSearchRecentItemsOrderStore, IGDirectThreadStore, IGDirectRecipientManager, IGFlaggedCommentLedger, IGServiceManager;

@interface IGUserSession : NSObject {

	NSString* _userPK;
	IGNonCurrentUserDefaults* _nonCurrentUserDefaults;
	IGAutocompleteHashtagsStore* _autocompleteHashtagsStore;
	IGAutocompletePlacesStore* _autocompletePlacesStore;
	IGAutocompleteUsersStore* _autocompleteUsersStore;
	IGBlendedSearchRecentItemsOrderStore* _blendedSearchRecentItemsOrderStore;
	IGDirectThreadStore* _directThreadStore;
	IGDirectRecipientManager* _directRecipientManager;
	IGFlaggedCommentLedger* _flaggedCommentLedger;
	IGServiceManager* _serviceManager;
	unsigned _backgroundTask;

}

@property (nonatomic,retain) NSString * userPK;                                                                      //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * nonCurrentUserDefaults;                                      //@synthesize nonCurrentUserDefaults=_nonCurrentUserDefaults - In the implementation block
@property (nonatomic,retain) IGAutocompleteHashtagsStore * autocompleteHashtagsStore;                                //@synthesize autocompleteHashtagsStore=_autocompleteHashtagsStore - In the implementation block
@property (nonatomic,retain) IGAutocompletePlacesStore * autocompletePlacesStore;                                    //@synthesize autocompletePlacesStore=_autocompletePlacesStore - In the implementation block
@property (nonatomic,retain) IGAutocompleteUsersStore * autocompleteUsersStore;                                      //@synthesize autocompleteUsersStore=_autocompleteUsersStore - In the implementation block
@property (nonatomic,retain) IGBlendedSearchRecentItemsOrderStore * blendedSearchRecentItemsOrderStore;              //@synthesize blendedSearchRecentItemsOrderStore=_blendedSearchRecentItemsOrderStore - In the implementation block
@property (nonatomic,retain) IGDirectThreadStore * directThreadStore;                                                //@synthesize directThreadStore=_directThreadStore - In the implementation block
@property (nonatomic,retain) IGDirectRecipientManager * directRecipientManager;                                      //@synthesize directRecipientManager=_directRecipientManager - In the implementation block
@property (nonatomic,retain) IGFlaggedCommentLedger * flaggedCommentLedger;                                          //@synthesize flaggedCommentLedger=_flaggedCommentLedger - In the implementation block
@property (nonatomic,retain) IGServiceManager * serviceManager;                                                      //@synthesize serviceManager=_serviceManager - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                                                //@synthesize backgroundTask=_backgroundTask - In the implementation block
+(id)storesThatCacheUserData;
+(id)inMemoryStoresThatCacheUserData;
-(IGBlendedSearchRecentItemsOrderStore *)blendedSearchRecentItemsOrderStore;
-(void)setBlendedSearchRecentItemsOrderStore:(IGBlendedSearchRecentItemsOrderStore *)arg1 ;
-(IGAutocompleteHashtagsStore *)autocompleteHashtagsStore;
-(IGAutocompleteUsersStore *)autocompleteUsersStore;
-(IGFlaggedCommentLedger *)flaggedCommentLedger;
-(IGDirectThreadStore *)directThreadStore;
-(IGDirectRecipientManager *)directRecipientManager;
-(IGAutocompletePlacesStore *)autocompletePlacesStore;
-(id)initWithUserPK:(id)arg1 ;
-(void)setUserPK:(NSString *)arg1 ;
-(NSString *)userPK;
-(IGNonCurrentUserDefaults *)nonCurrentUserDefaults;
-(void)archiveInBackground;
-(unsigned)backgroundTask;
-(void)setNonCurrentUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)setAutocompleteHashtagsStore:(IGAutocompleteHashtagsStore *)arg1 ;
-(void)setAutocompletePlacesStore:(IGAutocompletePlacesStore *)arg1 ;
-(void)setAutocompleteUsersStore:(IGAutocompleteUsersStore *)arg1 ;
-(void)setDirectThreadStore:(IGDirectThreadStore *)arg1 ;
-(void)setDirectRecipientManager:(IGDirectRecipientManager *)arg1 ;
-(void)setFlaggedCommentLedger:(IGFlaggedCommentLedger *)arg1 ;
-(void)archive;
-(void)dealloc;
-(void)setServiceManager:(IGServiceManager *)arg1 ;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(IGServiceManager *)serviceManager;
@end

