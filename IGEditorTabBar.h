/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEditorTabBarDelegate;
@class UIImage, NSArray, UIImageView;

@interface IGEditorTabBar : UIView {

	UIImage* _selectionIndicatorImage;
	NSArray* _tabViews;
	id<IGEditorTabBarDelegate> _delegate;
	unsigned _selectedIndex;
	UIImageView* _selectedIndicatorImageView;

}

@property (assign,nonatomic) unsigned selectedIndex;                                  //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) UIImageView * selectedIndicatorImageView;                //@synthesize selectedIndicatorImageView=_selectedIndicatorImageView - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;                       //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (nonatomic,retain) NSArray * tabViews;                                      //@synthesize tabViews=_tabViews - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> selectedTabView; 
@property (assign,nonatomic,__weak) id<IGEditorTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView*<IGEditorTabView>)selectedTabView;
-(void)setTabViews:(NSArray *)arg1 ;
-(void)setSelectedTabView:(UIView*<IGEditorTabView>)arg1 ;
-(NSArray *)tabViews;
-(UIImageView *)selectedIndicatorImageView;
-(void)setSelectedIndicatorImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEditorTabBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEditorTabBarDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)selectedIndex;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
@end

