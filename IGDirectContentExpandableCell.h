/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UIView, UIImage;

@interface IGDirectContentExpandableCell : IGDirectContentCell {

	char _isAnimating;
	char _expanded;
	UIView* _contentImageView;
	UIImage* _image;
	float _cornerRadius;
	float _currentUsernameXOffset;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (nonatomic,retain) UIView * contentImageView;                 //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic) char isAnimating;                          //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char expanded;                             //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) float cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) CGSize expandedPhotoSize;                  //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) float currentUsernameXOffset;              //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
+(float)photoExpandedHeightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(float)contractedHeightForFrameWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(float)expandedHeightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
-(void)completeAnimation;
-(CGRect)tapTargetFrame;
-(float)usernameXOffset;
-(UIView *)contentImageView;
-(float)contractedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(float)arg1 ;
-(float)contractedCornerRadius;
-(float)currentUsernameXOffset;
-(float)expandedUsernameXOffset;
-(float)expandedCornerRadius;
-(void)setIsAnimating:(char)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(void)animateExpanded:(char)arg1 withProgress:(float)arg2 ;
-(CGSize)photoSizeForHeight:(float)arg1 ;
-(void)setContentImageView:(UIView *)arg1 ;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(CGSize)photoSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)prepareForReuse;
-(char)isAnimating;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)beginAnimation;
-(id)newImageView;
@end

