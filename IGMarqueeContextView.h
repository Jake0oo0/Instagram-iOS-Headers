/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, CALayer;

@interface IGMarqueeContextView : UICollectionReusableView {

	UILabel* _label;
	CALayer* _separatorLayer;

}

@property (nonatomic,__weak,readonly) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) CALayer * separatorLayer;              //@synthesize separatorLayer=_separatorLayer - In the implementation block
+(id)headerIdentifier;
+(float)heightForHeaderWithText:(id)arg1 width:(float)arg2 ;
-(void)setupAndConfigureViews;
-(CALayer *)separatorLayer;
-(void)configureWithContext:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

