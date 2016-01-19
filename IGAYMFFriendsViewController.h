/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFindUsersViewController.h>

@class NSMutableSet;

@interface IGAYMFFriendsViewController : IGFindUsersViewController {

	NSMutableSet* _displayedUsers;

}

@property (nonatomic,retain) NSMutableSet * displayedUsers;              //@synthesize displayedUsers=_displayedUsers - In the implementation block
-(id)analyticsModule;
-(void)logAYMFEvent:(id)arg1 userID:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 algorithm:(id)arg5 ;
-(void)authorizeAndFetchUsers;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSMutableSet *)displayedUsers;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(id)newFindUsersViewDataSource;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 willDisplayOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)setDisplayedUsers:(NSMutableSet *)arg1 ;
-(id)init;
@end

