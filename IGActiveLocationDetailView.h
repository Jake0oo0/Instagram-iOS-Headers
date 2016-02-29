/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:43 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, IGKVOHandle;

@interface IGActiveLocationDetailView : UIView {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _imageView;
	IGKVOHandle* _textLabelObserver;
	IGKVOHandle* _detailTextLabelObserver;

}

@property (nonatomic,retain) UILabel * textLabel;                                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                          //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGKVOHandle * textLabelObserver;                    //@synthesize textLabelObserver=_textLabelObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * detailTextLabelObserver;              //@synthesize detailTextLabelObserver=_detailTextLabelObserver - In the implementation block
-(void)setTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabelObserver:(IGKVOHandle *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(IGKVOHandle *)textLabelObserver;
-(IGKVOHandle *)detailTextLabelObserver;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

