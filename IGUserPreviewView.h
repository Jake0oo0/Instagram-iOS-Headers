/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGThumbnailsGridView, IGUserHeaderView, IGStatButton, IGExploreEmptyView;

@interface IGUserPreviewView : UIView {

	char _showAsPrivate;
	IGThumbnailsGridView* _thumbnailView;
	IGUserHeaderView* _headerView;
	IGStatButton* _followersButton;
	IGStatButton* _followingButton;
	IGStatButton* _postsButton;
	IGExploreEmptyView* _emptyView;

}

@property (nonatomic,retain) IGThumbnailsGridView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) IGUserHeaderView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGStatButton * followersButton;                    //@synthesize followersButton=_followersButton - In the implementation block
@property (nonatomic,retain) IGStatButton * followingButton;                    //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,retain) IGStatButton * postsButton;                        //@synthesize postsButton=_postsButton - In the implementation block
@property (nonatomic,retain) IGExploreEmptyView * emptyView;                    //@synthesize emptyView=_emptyView - In the implementation block
@property (assign,nonatomic) char showAsPrivate;                                //@synthesize showAsPrivate=_showAsPrivate - In the implementation block
-(void)updateUser:(id)arg1 ;
-(IGStatButton *)followingButton;
-(void)setFollowingButton:(IGStatButton *)arg1 ;
-(IGExploreEmptyView *)emptyView;
-(void)setEmptyView:(IGExploreEmptyView *)arg1 ;
-(void)updatePosts:(id)arg1 followers:(id)arg2 following:(id)arg3 verified:(char)arg4 ;
-(void)updateFeedItems:(id)arg1 ;
-(IGStatButton *)postsButton;
-(IGStatButton *)followersButton;
-(void)setFollowersButton:(IGStatButton *)arg1 ;
-(void)setPostsButton:(IGStatButton *)arg1 ;
-(char)showAsPrivate;
-(void)setShowAsPrivate:(char)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGUserHeaderView *)headerView;
-(void)setHeaderView:(IGUserHeaderView *)arg1 ;
-(void)setThumbnailView:(IGThumbnailsGridView *)arg1 ;
-(IGThumbnailsGridView *)thumbnailView;
@end

