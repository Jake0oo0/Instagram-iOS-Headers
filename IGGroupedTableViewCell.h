/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGTableViewCell.h>

@class UIColor;

@interface IGGroupedTableViewCell : IGTableViewCell {

	char _enabled;
	char _actionable;
	UIColor* _defaultBackgroundColor;
	int _sidePadding;

}

@property (assign,nonatomic) char enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char actionable;                               //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) int sidePadding;                               //@synthesize sidePadding=_sidePadding - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setSidePadding:(int)arg1 ;
-(void)configureTextLabels;
-(void)applySelectedStyle:(char)arg1 ;
-(int)sidePadding;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(char)enabled;
-(void)setActionable:(char)arg1 ;
-(char)actionable;
-(UIColor *)defaultBackgroundColor;
@end

