/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUserCell.h>

@class UIImageView, UILabel;

@interface IGDiscoverMorePeopleUserCell : IGUserCell {

	int _sourceType;
	UIImageView* _sourceTypeImageView;
	UILabel* _userDefailtInfoLabel;

}

@property (assign,nonatomic) int sourceType;                                 //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) UIImageView * sourceTypeImageView;              //@synthesize sourceTypeImageView=_sourceTypeImageView - In the implementation block
@property (nonatomic,retain) UILabel * userDefailtInfoLabel;                 //@synthesize userDefailtInfoLabel=_userDefailtInfoLabel - In the implementation block
+(float)defaultCellHeight;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)setSourceTypeImageView:(UIImageView *)arg1 ;
-(UIImageView *)sourceTypeImageView;
-(void)configureCellWithUserInfo:(id)arg1 ;
-(UILabel *)userDefailtInfoLabel;
-(void)setUserDefailtInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
@end

