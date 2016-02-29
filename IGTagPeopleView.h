/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UITapGestureRecognizer, NSString;

@interface IGTagPeopleView : UIControl {

	UIImageView* _tagIndicatorImageView;
	UILabel* _tagPeopleLabel;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImageView * tagIndicatorImageView;                 //@synthesize tagIndicatorImageView=_tagIndicatorImageView - In the implementation block
@property (nonatomic,retain) UILabel * tagPeopleLabel;                            //@synthesize tagPeopleLabel=_tagPeopleLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
-(void)setTagCount:(int)arg1 ;
-(UIImageView *)tagIndicatorImageView;
-(UILabel *)tagPeopleLabel;
-(void)updateWidth;
-(void)setTagIndicatorImageView:(UIImageView *)arg1 ;
-(void)setTagPeopleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)onTap;
-(UITapGestureRecognizer *)tapRecognizer;
@end

