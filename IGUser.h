
#import <Instagram/IGStorableObject.h>
#import <Instagram/IGSearchResultsLoggableItem.h>
#import <Instagram/IGSearchResultsLoggableItem.h>

@class NSArray, NSString, CLLocation, NSNumber, NSURL;

@interface IGUser : IGStorableObject <IGSearchResultsLoggableItem, IGSearchResultsLoggableItem> {

	NSArray* _searchTerms;
	char _staff;
	char _blocking;
	char _directShareBlocked;
	char _onDirectBlacklist;
	char _favorited;
	char _incomingRequestPending;
	char _profileActionNeeded;
	char _rejects_staff_privileges;
	char _hasChainingUsers;
	char _unpublished;
	char _geoIPBlocked;
	char _followRestricted;
	char _verified;
	char _needy;
	char _adRater;
	char _canBoostPost;
	NSString* _publicEmail;
	NSString* _publicPhoneNumber;
	NSString* _pageCategory;
	NSString* _publicLocationName;
	CLLocation* _publicLocationCoordinates;
	int _followStatus;
	int _privacyStatus;
	NSString* _biography;
	NSString* _byline;
	NSString* _displayName;
	NSString* _fullName;
	NSString* _geoIPBlockedExtraInfo;
	NSString* _socialContext;
	NSString* _trackingToken;
	NSString* _username;
	NSNumber* _friendScore;
	NSString* _profileContext;
	unsigned _geoMediaCount;
	unsigned _usertagsCount;
	NSNumber* _followerCount;
	NSNumber* _followingCount;
	NSNumber* _mediaCount;
	NSURL* _externalURL;
	NSURL* _profilePicURL;
	NSArray* _HDProfilePicVersions;
	NSArray* _similarUsers;
	NSNumber* _mutualFollowersCount;
	int _lastFollowStatus;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char blocking;                                         //@synthesize blocking=_blocking - In the implementation block
@property (assign) char directShareBlocked;                               //@synthesize directShareBlocked=_directShareBlocked - In the implementation block
@property (assign) char onDirectBlacklist;                                //@synthesize onDirectBlacklist=_onDirectBlacklist - In the implementation block
@property (assign) char favorited;                                        //@synthesize favorited=_favorited - In the implementation block
@property (assign) char incomingRequestPending;                           //@synthesize incomingRequestPending=_incomingRequestPending - In the implementation block
@property (assign) char profileActionNeeded;                              //@synthesize profileActionNeeded=_profileActionNeeded - In the implementation block
@property (assign) char rejects_staff_privileges;                         //@synthesize rejects_staff_privileges=_rejects_staff_privileges - In the implementation block
@property (assign) char hasChainingUsers;                                 //@synthesize hasChainingUsers=_hasChainingUsers - In the implementation block
@property (getter=isUnpublished) char unpublished;                        //@synthesize unpublished=_unpublished - In the implementation block
@property (getter=isGeoIPBlocked) char geoIPBlocked;                      //@synthesize geoIPBlocked=_geoIPBlocked - In the implementation block
@property (getter=isFollowRestricted) char followRestricted;              //@synthesize followRestricted=_followRestricted - In the implementation block
@property (getter=isVerified) char verified;                              //@synthesize verified=_verified - In the implementation block
@property (getter=isNeedy) char needy;                                    //@synthesize needy=_needy - In the implementation block
@property (getter=isAdRater) char adRater;                                //@synthesize adRater=_adRater - In the implementation block
@property (readonly) char hasSimilarUsers; 
@property (readonly) char hasContactOptions; 
@property (readonly) char hasLocation; 
@property (assign) char canBoostPost;                                     //@synthesize canBoostPost=_canBoostPost - In the implementation block
@property (copy) NSString * publicEmail;                                  //@synthesize publicEmail=_publicEmail - In the implementation block
@property (copy) NSString * publicPhoneNumber;                            //@synthesize publicPhoneNumber=_publicPhoneNumber - In the implementation block
@property (copy) NSString * pageCategory;                                 //@synthesize pageCategory=_pageCategory - In the implementation block
@property (copy) NSString * publicLocationName;                           //@synthesize publicLocationName=_publicLocationName - In the implementation block
@property (retain) CLLocation * publicLocationCoordinates;                //@synthesize publicLocationCoordinates=_publicLocationCoordinates - In the implementation block
@property (assign) int followStatus;                                      //@synthesize followStatus=_followStatus - In the implementation block
@property (assign) int privacyStatus;                                     //@synthesize privacyStatus=_privacyStatus - In the implementation block
@property (copy) NSString * biography;                                    //@synthesize biography=_biography - In the implementation block
@property (copy) NSString * byline;                                       //@synthesize byline=_byline - In the implementation block
@property (copy) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * fullName;                                     //@synthesize fullName=_fullName - In the implementation block
@property (copy) NSString * geoIPBlockedExtraInfo;                        //@synthesize geoIPBlockedExtraInfo=_geoIPBlockedExtraInfo - In the implementation block
@property (copy) NSString * socialContext;                                //@synthesize socialContext=_socialContext - In the implementation block
@property (copy) NSString * trackingToken;                                //@synthesize trackingToken=_trackingToken - In the implementation block
@property (copy) NSString * username;                                     //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * searchString; 
@property (copy) NSNumber * friendScore;                                  //@synthesize friendScore=_friendScore - In the implementation block
@property (copy) NSString * profileContext;                               //@synthesize profileContext=_profileContext - In the implementation block
@property (assign) unsigned geoMediaCount;                                //@synthesize geoMediaCount=_geoMediaCount - In the implementation block
@property (assign) unsigned usertagsCount;                                //@synthesize usertagsCount=_usertagsCount - In the implementation block
@property (readonly) NSNumber * followerCount;                            //@synthesize followerCount=_followerCount - In the implementation block
@property (readonly) NSNumber * followingCount;                           //@synthesize followingCount=_followingCount - In the implementation block
@property (retain) NSNumber * mediaCount;                                 //@synthesize mediaCount=_mediaCount - In the implementation block
@property (retain) NSURL * externalURL;                                   //@synthesize externalURL=_externalURL - In the implementation block
@property (retain) NSURL * profilePicURL;                                 //@synthesize profilePicURL=_profilePicURL - In the implementation block
@property (retain) NSArray * HDProfilePicVersions;                        //@synthesize HDProfilePicVersions=_HDProfilePicVersions - In the implementation block
@property (retain) NSArray * similarUsers;                                //@synthesize similarUsers=_similarUsers - In the implementation block
@property (retain) NSNumber * mutualFollowersCount;                       //@synthesize mutualFollowersCount=_mutualFollowersCount - In the implementation block
@property (assign) int lastFollowStatus;                                  //@synthesize lastFollowStatus=_lastFollowStatus - In the implementation block
+(id)unmanagedUserWithUsername:(id)arg1 ;
+(id)centralizedStore;
+(void)fetchFollowStatusInBulk:(id)arg1 ;
+(void)makeManyFriendRequests:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(id)unmanagedUserWithPk:(id)arg1 ;
+(id)stringForfollowStatus:(int)arg1 ;
+(id)cleanedBiography:(id)arg1 ;
+(void)onFriendStatusesReceived:(id)arg1 fromRequest:(id)arg2 ;
+(void)onFriendStatusesFailed:(id)arg1 fromRequest:(id)arg2 ;
-(char)staff;
-(NSNumber *)mediaCount;
-(int)followStatus;
-(id)toDict;
-(NSURL *)profilePicURL;
-(char)canBoostPost;
-(char)favorited;
-(void)toggleFavoritedStatusShowSuccessAlert:(char)arg1 ;
-(int)toggleFollowStatus;
-(char)incomingRequestPending;
-(char)isFollowRestricted;
-(void)changeFriendshipStatusWithAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(int)privacyStatus;
-(char)hasChainingUsers;
-(char)hasSimilarUsers;
-(void)fetchSimilarAccountsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)fetchFollowStatus;
-(char)isUnpublished;
-(void)setMediaCount:(NSNumber *)arg1 ;
-(char)isVerified;
-(NSString *)byline;
-(NSString *)socialContext;
-(void)setByline:(NSString *)arg1 ;
-(void)changeFriendshipStatusWithAction:(int)arg1 ;
-(void)setFollowStatus:(int)arg1 ;
-(NSArray *)similarUsers;
-(void)setSimilarUsers:(NSArray *)arg1 ;
-(void)fetchAdditionalUserDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setProfileActionNeeded:(char)arg1 ;
-(void)setPrivacyStatus:(int)arg1 ;
-(NSNumber *)followerCount;
-(NSNumber *)followingCount;
-(void)setProfilePicURL:(NSURL *)arg1 ;
-(NSString *)trackingToken;
-(void)setTrackingToken:(NSString *)arg1 ;
-(void)setSocialContext:(NSString *)arg1 ;
-(void)setIncomingRequestPending:(char)arg1 ;
-(NSNumber *)mutualFollowersCount;
-(NSNumber *)friendScore;
-(void)onFriendStatusReceived:(id)arg1 fromRequest:(id)arg2 ;
-(void)onFriendStatusFailed:(id)arg1 fromRequest:(id)arg2 ;
-(void)setLastFollowStatus:(int)arg1 ;
-(void)updateCountsForCurrentUserDidStopFollowing;
-(void)updateCountsForCurrentUserDidStartFollowing;
-(void)setOngoingFriendshipRequest:(id)arg1 ;
-(id)ongoingFriendshipRequest;
-(id)actionVerbForAction:(int)arg1 ;
-(void)updateCountsForCurrentUserDidApproveFollowRequest;
-(void)successHandlerForChangeFriendshipStatusAction:(int)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showAlertForAgeGateError:(id)arg1 forAction:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateCountsForCurrentUserDidNotApproveFollowRequest;
-(void)setFavorited:(char)arg1 ;
-(void)updateFriendshipStatusWithResponse:(id)arg1 ;
-(int)lastFollowStatus;
-(void)updateFollowingCount:(int)arg1 ;
-(void)updateFollowerCount:(int)arg1 ;
-(void)toggleBlockStatus;
-(void)suggestUserWithResponseHandler:(/*^block*/id)arg1 ;
-(char)isAdRater;
-(char)isNeedy;
-(char)isGeoIPBlocked;
-(NSString *)geoIPBlockedExtraInfo;
-(NSString *)biography;
-(char)profileActionNeeded;
-(char)onDirectBlacklist;
-(NSString *)profileContext;
-(NSString *)publicEmail;
-(NSString *)publicPhoneNumber;
-(NSString *)pageCategory;
-(CLLocation *)publicLocationCoordinates;
-(NSString *)publicLocationName;
-(void)setNeedy:(char)arg1 ;
-(void)setBiography:(NSString *)arg1 ;
-(void)setExternalURL:(NSURL *)arg1 ;
-(void)setGeoMediaCount:(unsigned)arg1 ;
-(void)setUsertagsCount:(unsigned)arg1 ;
-(void)setGeoIPBlocked:(char)arg1 ;
-(void)setGeoIPBlockedExtraInfo:(NSString *)arg1 ;
-(void)setFollowRestricted:(char)arg1 ;
-(void)configureFollowStatus:(id)arg1 ;
-(void)setUnpublished:(char)arg1 ;
-(void)setHasChainingUsers:(char)arg1 ;
-(void)setMutualFollowersCount:(NSNumber *)arg1 ;
-(void)setFriendScore:(NSNumber *)arg1 ;
-(void)setHDProfilePicVersions:(NSArray *)arg1 ;
-(void)setOnDirectBlacklist:(char)arg1 ;
-(void)setProfileContext:(NSString *)arg1 ;
-(void)setCanBoostPost:(char)arg1 ;
-(void)setPublicEmail:(NSString *)arg1 ;
-(void)setPublicLocationCoordinates:(CLLocation *)arg1 ;
-(void)setPublicLocationName:(NSString *)arg1 ;
-(void)setPublicPhoneNumber:(NSString *)arg1 ;
-(void)setPageCategory:(NSString *)arg1 ;
-(id)userInfoDict;
-(id)similarUserInfoDict;
-(NSArray *)HDProfilePicVersions;
-(unsigned)geoMediaCount;
-(id)fullOrDisplayName;
-(void)setDirectShareBlocked:(char)arg1 ;
-(char)rejects_staff_privileges;
-(id)HDProfilePicURL;
-(char)friendshipStatusPending;
-(char)hasContactOptions;
-(char)directShareBlocked;
-(void)setRejects_staff_privileges:(char)arg1 ;
-(void)setAdRater:(char)arg1 ;
-(unsigned)usertagsCount;
-(NSURL *)externalURL;
-(id)primaryName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)searchString;
-(NSString *)displayName;
-(char)hasLocation;
-(void)setBlocking:(char)arg1 ;
-(char)blocking;
-(id)searchTerms;
-(id)loggingDescription;
-(id)loggingDescription;
-(NSString *)fullName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setVerified:(char)arg1 ;
-(id)secondaryName;
-(char)updateWithDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

