/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserBioInfoCell : IGPlainTableViewCell {

	UILabel* _bioInfoLabel;

}

@property (nonatomic,retain) UILabel * bioInfoLabel;              //@synthesize bioInfoLabel=_bioInfoLabel - In the implementation block
+(id)styledStringForFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
+(id)validateString:(id)arg1 ;
-(float)setUserFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(UILabel *)bioInfoLabel;
-(void)setBioInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

