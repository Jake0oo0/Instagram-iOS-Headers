/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFindUsersViewDataSource.h>

@class IGUser;

@interface IGProfileChainingFindUsersViewDataSource : IGFindUsersViewDataSource {

	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(void)fetchList;
-(void)fetchMore;
-(id)requestWithMaxId:(id)arg1 parameters:(id)arg2 ;
-(id)parseListResponse:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
@end

