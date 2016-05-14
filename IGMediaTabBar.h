/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class NSArray, UIView;

@interface IGMediaTabBar : UIControl {

	int _selectedIndex;
	NSArray* _buttons;
	UIView* _highlight;

}

@property (nonatomic,retain) NSArray * buttons;               //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * highlight;              //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic) int selectedIndex;               //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(float)textInset;
+(float)defaultHeight;
-(float)highlightHeight;
-(void)layoutSubviews;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setHighlight:(UIView *)arg1 ;
-(UIView *)highlight;
-(float)spacing;
-(float)itemSize;
-(NSArray *)buttons;
-(void)buttonWasTapped:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

