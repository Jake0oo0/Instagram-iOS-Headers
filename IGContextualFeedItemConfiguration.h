
#import <Instagram/IGFeedItemConfigurationType.h>

@class NSString, IGDefaultFeedItemConfiguration;

@interface IGContextualFeedItemConfiguration : NSObject <IGFeedItemConfigurationType> {

	char _showExploreContext;
	char _isGridLayout;
	char _showFollowButton;
	int _entryPoint;
	NSString* _entityId;
	IGDefaultFeedItemConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGDefaultFeedItemConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (assign,nonatomic) char showExploreContext;                                       //@synthesize showExploreContext=_showExploreContext - In the implementation block
@property (assign,nonatomic) char isGridLayout;                                             //@synthesize isGridLayout=_isGridLayout - In the implementation block
@property (assign,nonatomic) int entryPoint;                                                //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,retain) NSString * entityId;                                           //@synthesize entityId=_entityId - In the implementation block
@property (assign,nonatomic) char showFollowButton;                                         //@synthesize showFollowButton=_showFollowButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntryPoint:(int)arg1 ;
-(char)shouldHideFeedItem:(id)arg1 ;
-(int)hiddenCellTypeForFeedItem:(id)arg1 ;
-(char)shouldMoreSupersedeCustomizableButtonForFeedItem:(id)arg1 ;
-(char)shouldPopAfterDeletingFeedItem:(id)arg1 ;
-(id)actionSheetConfigurationForFeedItem:(id)arg1 ;
-(char)showVerifiedBadge;
-(char)shouldUseProfilePhotoForTitleForFeedItem:(id)arg1 ;
-(char)shouldUsePlusButtonForRightNavigationBarButtonItem:(id)arg1 ;
-(id)profilePictureHelperDelegate;
-(char)displayedInPromoteOrganicToggle;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(char)shouldDisplaySingleCellForFeedItem:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(char)allowHidingFeedItem:(id)arg1 ;
-(id)likeRequestParametersForFeedItem:(id)arg1 ;
-(char)shouldShowInlineInsightsForFeedItem:(id)arg1 ;
-(char)isGridLayout;
-(char)showFollowButton;
-(void)setShowFollowButton:(char)arg1 ;
-(void)setEntityId:(NSString *)arg1 ;
-(void)setIsGridLayout:(char)arg1 ;
-(NSString *)entityId;
-(void)setShowExploreContext:(char)arg1 ;
-(char)showExploreContext;
-(id)init;
-(IGDefaultFeedItemConfiguration *)defaultConfig;
-(int)entryPoint;
@end

