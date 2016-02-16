/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGImageViewTabBarDelegate;
@class UIImage, NSArray, UIImageView;

@interface IGImageViewTabBar : UIView {

	char _animatesSelectionIndicator;
	UIImage* _backgroundImage;
	UIImage* _selectionIndicatorImage;
	NSArray* _imageViews;
	UIImageView* _selectedImageView;
	unsigned _selectedIndex;
	id<IGImageViewTabBarDelegate> _delegate;
	UIImageView* _selectedIndicatorImageView;

}

@property (nonatomic,retain) UIImage * backgroundImage;                                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;                          //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;                                       //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) UIImageView * selectedImageView;                            //@synthesize selectedImageView=_selectedImageView - In the implementation block
@property (assign,nonatomic) unsigned selectedIndex;                                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) char animatesSelectionIndicator;                            //@synthesize animatesSelectionIndicator=_animatesSelectionIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageViewTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * selectedIndicatorImageView;                   //@synthesize selectedIndicatorImageView=_selectedIndicatorImageView - In the implementation block
-(UIImageView *)selectedImageView;
-(void)setAnimatesSelectionIndicator:(char)arg1 ;
-(void)setSelectedImageView:(UIImageView *)arg1 ;
-(UIImageView *)selectedIndicatorImageView;
-(char)animatesSelectionIndicator;
-(void)setSelectedIndicatorImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGImageViewTabBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGImageViewTabBarDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIImage *)backgroundImage;
-(unsigned)selectedIndex;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
@end

