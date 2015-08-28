/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class FBLikeBoxBorderView, UILabel;

@interface FBLikeBoxView : UIView {

	FBLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned _caretPosition;
	unsigned _likeCount;

}

@property (assign,nonatomic) unsigned caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                  //@synthesize likeCount=_likeCount - In the implementation block
-(void)_initializeContent;
-(void)setLikeCount:(unsigned)arg1 animated:(char)arg2 ;
-(void)setCaretPosition:(unsigned)arg1 ;
-(unsigned)caretPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setLikeCount:(unsigned)arg1 ;
-(unsigned)likeCount;
@end

