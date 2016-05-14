/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(char)enabled;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setActionable:(char)arg1 ;
-(char)actionable;
-(UIColor *)defaultBackgroundColor;
@end

