/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface IGCollectionViewSeeAllCell : UICollectionViewCell {

	UILabel* _label;
	UIView* _selectedOverlay;

}

@property (nonatomic,retain) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * selectedOverlay;              //@synthesize selectedOverlay=_selectedOverlay - In the implementation block
-(void)setSelectedOverlay:(UIView *)arg1 ;
-(UIView *)selectedOverlay;
-(id)createSelectedOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

