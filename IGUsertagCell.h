/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDarkTableViewCell.h>

@class IGProfilePictureImageView, IGUser;

@interface IGUsertagCell : IGDarkTableViewCell {

	IGProfilePictureImageView* _profilePictureImageView;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

