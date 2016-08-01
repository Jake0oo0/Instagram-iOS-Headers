
#import <Instagram/IGFeedItemConfigurationType.h>

@class NSString;

@interface IGDefaultFeedItemConfiguration : NSObject <IGFeedItemConfigurationType>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(char)shouldTightenUpWhiteSpace:(id)arg1 ;
@end

