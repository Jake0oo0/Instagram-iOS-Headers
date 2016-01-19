/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(CALayer *)separatorLayer;
-(void)setupAndConfigureViews;
-(void)configureWithContext:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

