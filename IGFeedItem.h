
#import <Instagram/IGPost.h>
#import <Instagram/IGStoredObject.h>
#import <Instagram/IGFeedHeaderItem.h>

@class NSString, IGUsertagGroup, NSNumber, IGSponsoredPostInfo, IGPivotMediaInfo, IGDirectResponseInfo, IGLocation, IGUser, IGDate, CLLocation;

@interface IGFeedItem : IGPost <IGStoredObject, IGFeedHeaderItem> {

	char _seen;
	char _inPhotosOfYou;
	char _isWaitingForPivot;
	char _isDummyVideo;
	char _showPivot;
	char _carouselLinkButtonOverride;
	char _expanded;
	NSString* _permalink;
	IGUsertagGroup* _usertags;
	int _directResponseStyle;
	int _directResponseHeaderStyle;
	NSNumber* _iTunesItemIdentifier;
	IGSponsoredPostInfo* _sponsoredPostInfo;
	NSString* _organicTrackingToken;
	NSString* _exploreAlgorithm;
	NSString* _exploreImpressionToken;
	NSString* _mediaId;
	IGPivotMediaInfo* _pivotInfo;

}

@property (nonatomic,copy,readonly) NSString * ig_productSessionKey; 
@property (copy,readonly) NSString * permalink;                                   //@synthesize permalink=_permalink - In the implementation block
@property (retain) IGUsertagGroup * usertags;                                     //@synthesize usertags=_usertags - In the implementation block
@property (readonly) char inPhotosOfYou;                                          //@synthesize inPhotosOfYou=_inPhotosOfYou - In the implementation block
@property (readonly) NSString * exploreAlgorithm;                                 //@synthesize exploreAlgorithm=_exploreAlgorithm - In the implementation block
@property (readonly) NSString * exploreImpressionToken;                           //@synthesize exploreImpressionToken=_exploreImpressionToken - In the implementation block
@property (assign) char isWaitingForPivot;                                        //@synthesize isWaitingForPivot=_isWaitingForPivot - In the implementation block
@property (assign) char isDummyVideo;                                             //@synthesize isDummyVideo=_isDummyVideo - In the implementation block
@property (assign) char showPivot;                                                //@synthesize showPivot=_showPivot - In the implementation block
@property (readonly) NSString * mediaId;                                          //@synthesize mediaId=_mediaId - In the implementation block
@property (readonly) IGDirectResponseInfo * directResponseInfo; 
@property (readonly) int directResponseStyle;                                     //@synthesize directResponseStyle=_directResponseStyle - In the implementation block
@property (readonly) int directResponseHeaderStyle;                               //@synthesize directResponseHeaderStyle=_directResponseHeaderStyle - In the implementation block
@property (readonly) NSNumber * iTunesItemIdentifier;                             //@synthesize iTunesItemIdentifier=_iTunesItemIdentifier - In the implementation block
@property (readonly) IGSponsoredPostInfo * sponsoredPostInfo;                     //@synthesize sponsoredPostInfo=_sponsoredPostInfo - In the implementation block
@property (copy) NSString * organicTrackingToken;                                 //@synthesize organicTrackingToken=_organicTrackingToken - In the implementation block
@property (assign) char carouselLinkButtonOverride;                               //@synthesize carouselLinkButtonOverride=_carouselLinkButtonOverride - In the implementation block
@property (retain) IGPivotMediaInfo * pivotInfo;                                  //@synthesize pivotInfo=_pivotInfo - In the implementation block
@property (assign) char expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) IGLocation * location; 
@property (readonly) IGUser * user; 
@property (readonly) IGDate * takenAt; 
@property (readonly) CLLocation * mediaCoord; 
+(id)centralizedStore;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(id)urlToPostComment;
-(id)urlToDeleteComment:(id)arg1 ;
-(id)urlToFlagComment:(id)arg1 ;
-(NSString *)mediaId;
-(id)likeText;
-(id)defaultStyleString;
-(id)bylineStyleString;
-(id)grayStyleString;
-(id)commaNumberFormatter;
-(id)featuredBadgeText;
-(id)buildLikersStyledString;
-(id)buildExploreContextString;
-(id)buildNewBoomerangAttributionString;
-(id)buildHyperlapseContextString;
-(id)buildLayoutContextString;
-(id)buildMoreCommentsStyledString;
-(id)buildAddCommentStyledString;
-(id)buildBoomerangContextString;
-(id)buildFeaturedBadgeStyledString;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)isDummyVideo;
-(IGPivotMediaInfo *)pivotInfo;
-(void)fetchPivots:(int)arg1 ;
-(void)setShowPivot:(char)arg1 ;
-(NSString *)exploreAlgorithm;
-(NSString *)exploreImpressionToken;
-(char)showPivot;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 completion:(/*^block*/id)arg7 ;
-(IGDirectResponseInfo *)directResponseInfo;
-(char)isWaitingForPivot;
-(NSString *)permalink;
-(char)carouselLinkButtonOverride;
-(int)directResponseStyle;
-(int)directResponseHeaderStyle;
-(char)isSponsoredApp;
-(void)markAsSeen;
-(void)markAsExpanded;
-(char)hasPivot;
-(void)setCarouselLinkButtonOverride:(char)arg1 ;
-(void)setPivotInfo:(IGPivotMediaInfo *)arg1 ;
-(void)setIsWaitingForPivot:(char)arg1 ;
-(NSString *)ig_productSessionKey;
-(char)seen;
-(id)mediaIdFromPK:(id)arg1 ;
-(void)setMediaIdWithPk:(id)arg1 ;
-(void)setUsertagsFromEntry:(id)arg1 ;
-(void)setSponsoredPostInfoFromEntry:(id)arg1 ;
-(char)inPhotosOfYou;
-(void)setPermalink:(NSString *)arg1 ;
-(void)setInPhotosOfYou:(char)arg1 ;
-(void)setDirectResponseStyle:(int)arg1 ;
-(void)setDirectResponseHeaderStyle:(int)arg1 ;
-(void)setITunesItemIdentifier:(NSNumber *)arg1 ;
-(void)setSponsoredPostInfo:(IGSponsoredPostInfo *)arg1 ;
-(void)setOrganicTrackingToken:(NSString *)arg1 ;
-(NSString *)organicTrackingToken;
-(void)addToPhotosOfYou:(char)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)untagCurrentUserWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)setIsDummyVideo:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(NSNumber *)iTunesItemIdentifier;
-(char)updateWithDictionary:(id)arg1 ;
@end

