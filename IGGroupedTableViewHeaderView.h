/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:20 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface IGGroupedTableViewHeaderView : UIView {

	UIView* _accessoryView;
	UILabel* _titleLabel;
	UILabel* _textLabel;

}
+(float)heightWithTitle:(id)arg1 text:(id)arg2 ;
+(float)textLabelXWithAccessoryViewWidth:(float)arg1 ;
+(float)textWidthWithAccessoryViewWidth:(float)arg1 ;
+(CGSize)titleLabelSizeWithTitle:(id)arg1 width:(float)arg2 ;
+(CGSize)textLabelSizeWithText:(id)arg1 width:(float)arg2 ;
+(float)minHeightForAccessoryViewHeight:(float)arg1 ;
+(float)heightWithTitle:(id)arg1 text:(id)arg2 accessoryViewOfSize:(CGSize)arg3 ;
-(id)initWithTitle:(id)arg1 text:(id)arg2 ;
-(void)configureTextLabelWithText:(id)arg1 ;
-(void)doLayout;
-(id)initWithTitle:(id)arg1 text:(id)arg2 accessoryView:(id)arg3 ;
-(void)configureTitleLabelWithTitle:(id)arg1 ;
@end

