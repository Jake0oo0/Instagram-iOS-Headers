/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
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
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

