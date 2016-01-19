/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEventViewerHeaderViewDelegate;
@class UIButton, UILabel;

@interface IGEventViewerHeaderView : UIView {

	id<IGEventViewerHeaderViewDelegate> _delegate;
	UIButton* _closeButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (assign,nonatomic,__weak) id<IGEventViewerHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * closeButton;                                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)setupCloseButton;
-(void)setupLabels;
-(void)didReceiveTap:(id)arg1 ;
-(void)didTapCloseButton:(id)arg1 ;
-(id)subtitleAttributes;
-(id)textKerning;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<IGEventViewerHeaderViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitle:(id)arg1 ;
-(void)setupSubviews;
-(id)titleAttributes;
-(id)paragraphStyle;
-(UIButton *)closeButton;
@end

