/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class IGUnreadBubbleView, UIView;

@interface IGInboxButton : UIButton {

	int _unreadCount;
	IGUnreadBubbleView* _unreadBubbleView;
	UIView* _bubbleBackground;

}

@property (assign,nonatomic) int unreadCount;                                    //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * unreadBubbleView;              //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
@property (nonatomic,retain) UIView * bubbleBackground;                          //@synthesize bubbleBackground=_bubbleBackground - In the implementation block
+(id)button;
-(UIView *)bubbleBackground;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)updateCountLabel:(id)arg1 ;
-(void)layoutCountLabel;
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(void)setBubbleBackground:(UIView *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

