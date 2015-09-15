/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

