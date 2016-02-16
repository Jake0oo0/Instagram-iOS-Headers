/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGViewControllerTitleDetailTitleView : UIView {

	UILabel* _title;
	UILabel* _detail;

}

@property (nonatomic,retain) UILabel * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * detail;              //@synthesize detail=_detail - In the implementation block
-(void)updateTitle:(id)arg1 ;
-(void)updateDetail:(id)arg1 ;
-(float)centerOffsetFromContainingNavigationBar;
-(UILabel *)detail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)title;
-(void)setDetail:(UILabel *)arg1 ;
-(void)setColorScheme:(unsigned)arg1 ;
@end

