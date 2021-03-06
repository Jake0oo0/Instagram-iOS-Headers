
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

