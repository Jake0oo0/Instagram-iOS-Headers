
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGToastStyleNUXViewDelegate.h>

@protocol IGFeedItemActionCellDelegate, IGFeedItemLoggingProviderDelegate, IGSponsorableButton;
@class IGFeedItem, UIButton, IGPageCellPageControl, UIView, NSArray, IGToastStyleNUXView, NSString;

@interface IGFeedItemActionCell : UICollectionViewCell <IGToastStyleNUXViewDelegate> {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _moreButton;
	UIButton* _sendButton;
	UIButton* _customizableButton;
	IGPageCellPageControl* _pageControl;
	int _accessoryViewType;
	int _ctaLayout;
	id<IGFeedItemActionCellDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	UIView* _lineView;
	UIView* _customizableButtonContainer;
	int _customizableButtonCTAState;
	UIButton*<IGSponsorableButton> _sponsoredButton;
	NSArray* _accessibilityElements;
	IGToastStyleNUXView* _reshareNUXView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) UIButton * commentButton;                                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                       //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic) char sponsoredPostAllowed;                                                 //@synthesize sponsoredPostAllowed=_sponsoredPostAllowed - In the implementation block
@property (assign,nonatomic) int ctaLayout;                                                             //@synthesize ctaLayout=_ctaLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                         //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,readonly) UIView * customizableButtonContainer;                                    //@synthesize customizableButtonContainer=_customizableButtonContainer - In the implementation block
@property (assign,nonatomic) int customizableButtonCTAState;                                            //@synthesize customizableButtonCTAState=_customizableButtonCTAState - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredButton;                            //@synthesize sponsoredButton=_sponsoredButton - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,retain) IGToastStyleNUXView * reshareNUXView;                                      //@synthesize reshareNUXView=_reshareNUXView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForSponsoredFeedItem:(id)arg1 ctaLayout:(int)arg2 ;
+(float)heightForOrganicFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(void)setCtaLayout:(int)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 ;
-(UIButton *)customizableButton;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)accessibleElements;
-(void)setLineView:(UIView *)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)accessoryViewType;
-(UIButton *)commentButton;
-(IGToastStyleNUXView *)reshareNUXView;
-(int)customizableButtonCTAState;
-(void)setCustomizableButtonCTAState:(int)arg1 ;
-(UIView *)customizableButtonContainer;
-(UIButton*<IGSponsorableButton>)sponsoredButton;
-(void)onMoreButtonPressed;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(int)ctaLayout;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)updateLikeButton;
-(char)sponsoredPostAllowed;
-(float)seperatorLineHInset;
-(CGRect)frameForCustomizableButton;
-(void)setReshareNUXView:(IGToastStyleNUXView *)arg1 ;
-(void)didTapNUXView:(id)arg1 ;
-(void)progressCustomizableButtonCTAState;
-(void)showReshareNUXWithArrowDirection:(int)arg1 ;
-(void)hideReshareNUX;
-(char)isReshareNUXVisible;
-(void)setCommentButton:(UIButton *)arg1 ;
-(void)setSponsoredButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGFeedItemActionCellDelegate>)delegate;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(void)prepareForReuse;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(IGPageCellPageControl *)pageControl;
-(UIView *)lineView;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(UIButton *)likeButton;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

