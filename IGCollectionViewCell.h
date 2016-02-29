/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, IGKVOHandle;

@interface IGCollectionViewCell : UICollectionViewCell {

	char _enabled;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _accessoryView;
	int _selectionStyle;
	IGKVOHandle* _textLabelObserver;
	IGKVOHandle* _detailTextLabelObserver;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                          //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                             //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) int selectionStyle;                                 //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) char enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) IGKVOHandle * textLabelObserver;                    //@synthesize textLabelObserver=_textLabelObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * detailTextLabelObserver;              //@synthesize detailTextLabelObserver=_detailTextLabelObserver - In the implementation block
-(id)initWithFrame:(CGRect)arg1 displayBorder:(char)arg2 ;
-(void)setTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(IGKVOHandle *)textLabelObserver;
-(IGKVOHandle *)detailTextLabelObserver;
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

