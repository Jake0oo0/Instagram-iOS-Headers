/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:43 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGSwitchUsersBaseCell.h>

@class IGProfilePictureImageView, IGUser;

@interface IGSwitchUsersUserCell : IGSwitchUsersBaseCell {

	IGProfilePictureImageView* _cellImageView;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(id)cellImageView;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
@end

