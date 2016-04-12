/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, CALayer;

@interface IGFeedItemHiddenNoReasonSelectedCellTableViewHeader : UIView {

	UILabel* _reasonHeaderLabel;
	UIImageView* _chevronImageView;
	CALayer* _topLineLayer;
	CALayer* _bottomLineLayer;

}

@property (nonatomic,readonly) UILabel * reasonHeaderLabel;                 //@synthesize reasonHeaderLabel=_reasonHeaderLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,readonly) CALayer * topLineLayer;                      //@synthesize topLineLayer=_topLineLayer - In the implementation block
@property (nonatomic,readonly) CALayer * bottomLineLayer;                   //@synthesize bottomLineLayer=_bottomLineLayer - In the implementation block
-(UIImageView *)chevronImageView;
-(UILabel *)reasonHeaderLabel;
-(CALayer *)topLineLayer;
-(CALayer *)bottomLineLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

