/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface IGLocationSuggestionTitleControl : UIControl {

	UIImageView* _imageView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

