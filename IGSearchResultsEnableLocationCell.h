/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton;

@interface IGSearchResultsEnableLocationCell : UITableViewCell {

	UILabel* _label;
	UIButton* _enableLocationButton;

}

@property (nonatomic,__weak,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * enableLocationButton;              //@synthesize enableLocationButton=_enableLocationButton - In the implementation block
+(char)shouldShowEnableLocationHeader;
-(void)shouldEnableLocation:(id)arg1 ;
-(UIButton *)enableLocationButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

