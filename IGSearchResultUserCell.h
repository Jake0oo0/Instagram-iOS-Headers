/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGSearchResultCell.h>

@class UIImageView, IGProfilePictureImageView;

@interface IGSearchResultUserCell : IGSearchResultCell {

	char _showFollowButton;
	char _showFollowingButton;
	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,retain) UIImageView * verifiedUserBadgeView;               //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * iconView; 
@property (nonatomic,readonly) char showFollowButton;                           //@synthesize showFollowButton=_showFollowButton - In the implementation block
@property (nonatomic,readonly) char showFollowingButton;                        //@synthesize showFollowingButton=_showFollowingButton - In the implementation block
-(char)showFollowButton;
-(char)showFollowingButton;
-(char)shouldShowFollowButtonForUser:(id)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(void)setVerifiedUserBadgeView:(UIImageView *)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

