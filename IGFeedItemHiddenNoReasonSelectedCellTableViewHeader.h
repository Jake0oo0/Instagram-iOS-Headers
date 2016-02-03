/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:18 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(id)initWithFrame:(CGRect)arg1 withAdHideFlowVersion:(int)arg2 ;
-(void)layoutSubviews;
@end

