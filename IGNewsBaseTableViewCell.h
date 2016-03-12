
#import <UIKit/UITableViewCell.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTappableImageViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGNewsTableViewCellDelegate, IGRaindropAnalyticsDelegate;
@class UIView, IGNewsStory, IGFollowButton, IGProfilePictureImageView, IGCoreTextView, NSMutableArray, IGUnreadBubbleView, UIImageView, NSString;

@interface IGNewsBaseTableViewCell : UITableViewCell <IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, IGTappableImageViewDelegate, IGFollowButtonDelegate> {

	UIView* _topLine;
	char _hidesCellDivider;
	IGNewsStory* _story;
	IGFollowButton* _followButton;
	id<IGNewsTableViewCellDelegate> _delegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	UIView* _hairlineView;
	IGProfilePictureImageView* _profilePictureView;
	IGCoreTextView* _textView;
	NSMutableArray* _imageViews;
	IGUnreadBubbleView* _requestCountBubbleView;
	UIImageView* _chevronView;

}

@property (nonatomic,retain) IGNewsStory * story;                                                   //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                         //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) char hidesCellDivider;                                                 //@synthesize hidesCellDivider=_hidesCellDivider - In the implementation block
@property (assign,nonatomic,__weak) id<IGNewsTableViewCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) UIView * hairlineView;                                                 //@synthesize hairlineView=_hairlineView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                        //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * textView;                                             //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                           //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * requestCountBubbleView;                           //@synthesize requestCountBubbleView=_requestCountBubbleView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                             //@synthesize chevronView=_chevronView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForStory:(id)arg1 cellWidth:(float)arg2 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFollowButton *)followButton;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)profilePictureTapped:(id)arg1 ;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(void)imageViewTapped:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 analyticsDelegate:(id)arg3 ;
-(void)createImageViews:(int)arg1 ;
-(IGNewsStory *)story;
-(void)applyHighlight:(char)arg1 ;
-(void)setStory:(IGNewsStory *)arg1 ;
-(void)setHidesCellDivider:(char)arg1 ;
-(char)hidesCellDivider;
-(IGUnreadBubbleView *)requestCountBubbleView;
-(void)setRequestCountBubbleView:(IGUnreadBubbleView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGNewsTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGNewsTableViewCellDelegate>)delegate;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setTextView:(IGCoreTextView *)arg1 ;
-(IGCoreTextView *)textView;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(void)setMedia:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
@end

