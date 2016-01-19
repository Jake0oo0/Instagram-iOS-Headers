/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class IGFollowAllButton, UILabel;

@interface IGFollowAllUsersView : UIView {

	IGFollowAllButton* _followAllButton;
	unsigned _userCount;
	UILabel* _countLabel;

}

@property (nonatomic,retain) IGFollowAllButton * followAllButton;              //@synthesize followAllButton=_followAllButton - In the implementation block
@property (assign,nonatomic) unsigned userCount;                               //@synthesize userCount=_userCount - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
+(float)preferredHeight;
-(void)setUserCount:(unsigned)arg1 ;
-(IGFollowAllButton *)followAllButton;
-(unsigned)userCount;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setFollowAllButton:(IGFollowAllButton *)arg1 ;
@end

