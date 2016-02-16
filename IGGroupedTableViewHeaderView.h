/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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

