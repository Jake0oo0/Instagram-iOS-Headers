/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:34 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface IGChevronTitleButton : UIButton {

	char _isOpen;
	UIOffset _tapPadding;

}

@property (assign,nonatomic) char isOpen;                      //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) UIOffset tapPadding;              //@synthesize tapPadding=_tapPadding - In the implementation block
+(id)button;
-(UIOffset)tapPadding;
-(void)setTapPadding:(UIOffset)arg1 ;
-(void)setIsOpen:(char)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)isOpen;
@end

