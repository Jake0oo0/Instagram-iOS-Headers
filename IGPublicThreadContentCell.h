/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGSlidingCollectionViewCell.h>
#import <Instagram/IGDirectCellProtocol.h>

@protocol IGDirectContentCellDelegate, IGDirectContentCellTextLinkDelegate, IGDirectContentCellDecorator;
@class UIView, IGDirectContent, UIImageView, IGProfilePictureImageView, UILabel, UILongPressGestureRecognizer, NSString;

@interface IGPublicThreadContentCell : UICollectionViewCell <IGProfilePictureImageViewDelegate, UIGestureRecognizerDelegate, IGSlidingCollectionViewCell, IGDirectCellProtocol> {

	char _isSameUserContent;
	char _hideProfilePicture;
	char _hidesBubbleBackground;
	char _showUsername;
	char _pendingDeleteAction;
	char _showSeparator;
	float _slideAmount;
	UIView* _contentContainerView;
	id<IGDirectContentCellDelegate> _delegate;
	id<IGDirectContentCellTextLinkDelegate> _textDelegate;
	IGDirectContent* _content;
	id<IGDirectContentCellDecorator> _cellDecorator;
	UIImageView* _backgroundBubbleView;
	UIView* _topSeparatorLine;
	IGProfilePictureImageView* _profilePictureImageView;
	UILabel* _timestampLabel;
	UILabel* _senderUsernameLabel;
	UILongPressGestureRecognizer* _contentMenuLongPressRecognizer;
	CGRect _tapTargetFrame;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePictureImageView;                        //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                                   //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UILabel * senderUsernameLabel;                                              //@synthesize senderUsernameLabel=_senderUsernameLabel - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * contentMenuLongPressRecognizer;              //@synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentCellTextLinkDelegate> textDelegate;                //@synthesize textDelegate=_textDelegate - In the implementation block
@property (nonatomic,retain) IGDirectContent * content;                                                  //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) char isSameUserContent;                                                     //@synthesize isSameUserContent=_isSameUserContent - In the implementation block
@property (assign,nonatomic) char hideProfilePicture;                                                    //@synthesize hideProfilePicture=_hideProfilePicture - In the implementation block
@property (nonatomic,retain) id<IGDirectContentCellDecorator> cellDecorator;                             //@synthesize cellDecorator=_cellDecorator - In the implementation block
@property (assign,nonatomic) CGRect tapTargetFrame;                                                      //@synthesize tapTargetFrame=_tapTargetFrame - In the implementation block
@property (nonatomic,readonly) CGRect bubbleFrame; 
@property (assign,nonatomic) char hidesBubbleBackground;                                                 //@synthesize hidesBubbleBackground=_hidesBubbleBackground - In the implementation block
@property (assign,nonatomic) char showUsername;                                                          //@synthesize showUsername=_showUsername - In the implementation block
@property (assign,nonatomic) char pendingDeleteAction;                                                   //@synthesize pendingDeleteAction=_pendingDeleteAction - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundBubbleView;                                         //@synthesize backgroundBubbleView=_backgroundBubbleView - In the implementation block
@property (assign,nonatomic) char showSeparator;                                                         //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorLine;                                                  //@synthesize topSeparatorLine=_topSeparatorLine - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float slideAmount;                                                          //@synthesize slideAmount=_slideAmount - In the implementation block
@property (nonatomic,readonly) float maxSlideAmount; 
@property (nonatomic,readonly) UIView * contentContainerView;                                            //@synthesize contentContainerView=_contentContainerView - In the implementation block
+(char)shouldAddTopSeparatorLineWithCurrentContent:(id)arg1 prevContent:(id)arg2 ;
+(float)profilePictureWidthOffset;
+(float)cellContentYOffset;
+(float)topSeparatorLineWidth;
+(float)cellBottomPadding;
-(void)setTopSeparatorLine:(UIView *)arg1 ;
-(UIView *)topSeparatorLine;
-(void)setPendingDeleteAction:(char)arg1 ;
-(char)pendingDeleteAction;
-(CGRect)bubbleFrame;
-(void)setHidesBubbleBackground:(char)arg1 ;
-(id)timestampText;
-(void)setCellDecorator:(id<IGDirectContentCellDecorator>)arg1 ;
-(CGRect)tapTargetFrame;
-(id<IGDirectContentCellDecorator>)cellDecorator;
-(UIImageView *)backgroundBubbleView;
-(IGProfilePictureImageView *)profilePictureImageView;
-(UILabel *)timestampLabel;
-(UILabel *)senderUsernameLabel;
-(void)onContentMenuPress:(id)arg1 ;
-(void)setContentMenuLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)contentMenuLongPressRecognizer;
-(void)setSlideAmount:(float)arg1 ;
-(void)setShowUsername:(char)arg1 ;
-(float)slideAmount;
-(float)profilePictureYOffset;
-(float)cellContentYOffset;
-(float)maxSlideAmount;
-(char)showUsername;
-(char)isSameUserContent;
-(float)usernameXOffset;
-(id)backgroundImageIsForCurrentUser:(char)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setProfilePictureAlpha:(float)arg1 ;
-(void)setHideProfilePicture:(char)arg1 ;
-(void)setProfilePictureY:(float)arg1 ;
-(void)setBackgroundBubbleWithFrame:(CGRect)arg1 forCurrentUser:(char)arg2 ;
-(void)setIsSameUserContent:(char)arg1 ;
-(char)hideProfilePicture;
-(void)setTapTargetFrame:(CGRect)arg1 ;
-(char)hidesBubbleBackground;
-(void)setBackgroundBubbleView:(UIImageView *)arg1 ;
-(void)setProfilePictureImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(void)setSenderUsernameLabel:(UILabel *)arg1 ;
-(void)setTextDelegate:(id<IGDirectContentCellTextLinkDelegate>)arg1 ;
-(id<IGDirectContentCellTextLinkDelegate>)textDelegate;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
-(UIView *)contentContainerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)prepareForReuse;
-(IGDirectContent *)content;
-(void)setContent:(IGDirectContent *)arg1 ;
@end

