/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:18 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFeedItemActionCellDelegate, IGFeedItemLoggingProviderDelegate, IGSponsorableButton;
@class IGFeedItem, UIButton, IGPageCellPageControl, UIView, NSArray;

@interface IGFeedItemActionCell : UICollectionViewCell {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _moreButton;
	UIButton* _sendButton;
	UIButton* _customizableButton;
	IGPageCellPageControl* _pageControl;
	int _accessoryViewType;
	id<IGFeedItemActionCellDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	int _secondaryAccessoryViewType;
	UIView* _lineView;
	UIButton*<IGSponsorableButton> _sponsoredButton;
	NSArray* _accessibilityElements;
	UIButton* _chevronButton;
	UIView* _chevronSeperatorView;

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
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic) int secondaryAccessoryViewType;                                            //@synthesize secondaryAccessoryViewType=_secondaryAccessoryViewType - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                         //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredButton;                            //@synthesize sponsoredButton=_sponsoredButton - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,retain) UIButton * chevronButton;                                                  //@synthesize chevronButton=_chevronButton - In the implementation block
@property (nonatomic,retain) UIView * chevronSeperatorView;                                             //@synthesize chevronSeperatorView=_chevronSeperatorView - In the implementation block
+(float)height;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(UIButton *)customizableButton;
-(void)setSecondaryAccessoryViewType:(int)arg1 ;
-(id)accessibleElements;
-(void)setLineView:(UIView *)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(float)seperatorLineHInset;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)accessoryViewType;
-(UIButton *)commentButton;
-(UIButton*<IGSponsorableButton>)sponsoredButton;
-(UIButton *)chevronButton;
-(void)onMoreButtonPressed:(id)arg1 ;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)onChevronButtonPressed:(id)arg1 ;
-(void)updateLikeButton;
-(char)sponsoredPostAllowed;
-(void)updateChevronButton;
-(UIView *)chevronSeperatorView;
-(void)setCommentButton:(UIButton *)arg1 ;
-(int)secondaryAccessoryViewType;
-(void)setSponsoredButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setChevronButton:(UIButton *)arg1 ;
-(void)setChevronSeperatorView:(UIView *)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
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

