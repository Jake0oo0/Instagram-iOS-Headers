/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIView, IGHeartView;

@interface IGPublicThreadContentExpandableCell : IGPublicThreadContentCell <IGDirectContentUploadCell> {

	char _isAnimating;
	char _expanded;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIView* _contentImageView;
	float _cornerRadius;
	float _currentUsernameXOffset;
	float _expansionProgress;
	IGHeartView* _heartView;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (assign,nonatomic) CGSize expandedPhotoSize;                                          //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                                        //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) float currentUsernameXOffset;                                      //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float expansionProgress;                                           //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) IGHeartView * heartView;                                           //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,retain) UIView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic) char isAnimating;                                                  //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char expanded;                                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(float)photoExpandedHeightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(float)heightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(CGSize)contractedOffsetForUploadSpinner;
+(CGSize)expandedOffsetForUploadSpinner;
-(void)completeAnimation;
-(void)performDelete;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(id)timestampText;
-(void)setCellDecorator:(id)arg1 ;
-(CGRect)tapTargetFrame;
-(float)usernameXOffset;
-(void)setIsSameUserContent:(char)arg1 ;
-(UIView *)contentImageView;
-(float)expandedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(float)arg1 ;
-(void)updateProfileAlpha;
-(float)currentUsernameXOffset;
-(float)contractedUsernameXOffset;
-(void)setExpansionProgress:(float)arg1 ;
-(IGHeartView *)heartView;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(float)expansionProgress;
-(float)expandedCornerRadius;
-(float)contractedCornerRadius;
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(void)animateLikeAction;
-(void)animateExpanded:(char)arg1 withProgress:(float)arg2 ;
-(void)setContentImageView:(UIView *)arg1 ;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(CGSize)photoSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)prepareForReuse;
-(char)isAnimating;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)setContent:(id)arg1 ;
-(void)beginAnimation;
@end

