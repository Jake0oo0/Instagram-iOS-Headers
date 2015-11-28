
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTimelineHeader.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGFeedHeaderItem, IGFeedItemHeaderDelegate, IGFeedItemLoggingProviderDelegate, IGRaindropAnalyticsDelegate, IGSponsorableButton;
@class UIButton, UINavigationController, NSObject, IGProfilePictureImageView, UILabel, IGFollowButton, IGStringStyle, NSArray, NSString;

@interface IGFeedItemHeader : IGTimelineHeader <IGProfilePictureImageViewDelegate, IGFollowButtonDelegate> {

	char _editing;
	char _alternateAccessibility;
	id<IGFeedHeaderItem> _feedItem;
	UIButton* _customizableButton;
	int _accessoryViewType;
	UINavigationController* _navigationController;
	NSObject*<IGFeedItemHeaderDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	IGProfilePictureImageView* _profilePic;
	UIButton* _usernameButton;
	UILabel* _timestampLabel;
	UIButton* _locationButton;
	UIButton*<IGSponsorableButton> _sponsoredPostButton;
	IGFollowButton* _followButton;
	IGStringStyle* _boldLinkStyle;
	IGStringStyle* _boldAlternateLinkStyle;
	IGStringStyle* _boldGrayStyle;
	IGStringStyle* _grayStyle;
	IGStringStyle* _boldGray7Style;
	NSArray* _accessibleElements;

}

@property (nonatomic,retain) id<IGFeedHeaderItem> feedItem;                                             //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char editing;                                                              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                      //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGFeedItemHeaderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                  //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                                    //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UIButton * usernameButton;                                                 //@synthesize usernameButton=_usernameButton - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                                  //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UIButton * locationButton;                                                 //@synthesize locationButton=_locationButton - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredPostButton;                        //@synthesize sponsoredPostButton=_sponsoredPostButton - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                             //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldLinkStyle;                                             //@synthesize boldLinkStyle=_boldLinkStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldAlternateLinkStyle;                                    //@synthesize boldAlternateLinkStyle=_boldAlternateLinkStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGrayStyle;                                             //@synthesize boldGrayStyle=_boldGrayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * grayStyle;                                                 //@synthesize grayStyle=_grayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGray7Style;                                            //@synthesize boldGray7Style=_boldGray7Style - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                              //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (assign,nonatomic) char alternateAccessibility;                                               //@synthesize alternateAccessibility=_alternateAccessibility - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(id<IGFeedHeaderItem>)arg1 ;
-(id<IGFeedHeaderItem>)feedItem;
-(id)initWithFrame:(CGRect)arg1 analyticsDelegate:(id)arg2 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFollowButton *)followButton;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(NSArray *)accessibleElements;
-(void)profilePictureTapped:(id)arg1 ;
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(UIButton*<IGSponsorableButton>)sponsoredPostButton;
-(void)setAccessoryViewType:(int)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(UIButton *)customizableButton;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(IGStringStyle *)boldGrayStyle;
-(IGStringStyle *)boldLinkStyle;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)accessoryViewType;
-(void)setSponsoredPostButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setBoldGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldLinkStyle:(IGStringStyle *)arg1 ;
-(UIButton *)usernameButton;
-(UIButton *)locationButton;
-(void)onUsernameTapped;
-(void)setAlternateAccessibility:(char)arg1 ;
-(void)onPostUpdated;
-(void)onUserInfoChanged;
-(void)updateAppearance;
-(IGStringStyle *)boldGray7Style;
-(IGStringStyle *)boldAlternateLinkStyle;
-(IGStringStyle *)grayStyle;
-(void)updateAccessoryViewAppearance;
-(void)onLocationTapped;
-(void)openUserViewFrom:(id)arg1 ;
-(char)alternateAccessibility;
-(void)configurWithAnalyticsDelegate:(id)arg1 navigationController:(id)arg2 feedItem:(id)arg3 loggingDelegate:(id)arg4 delegate:(id)arg5 ;
-(void)setUsernameButton:(UIButton *)arg1 ;
-(void)setLocationButton:(UIButton *)arg1 ;
-(void)setBoldAlternateLinkStyle:(IGStringStyle *)arg1 ;
-(void)setGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldGray7Style:(IGStringStyle *)arg1 ;
-(id)primaryName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<IGFeedItemHeaderDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSObject*<IGFeedItemHeaderDelegate>)delegate;
-(id)accessibilityLabel;
-(char)editing;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)setEditing:(char)arg1 ;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(char)hasUserLocation;
-(char)hasLocation;
@end

