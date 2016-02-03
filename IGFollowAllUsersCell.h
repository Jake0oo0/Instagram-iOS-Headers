/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:19 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFollowAllUsersCellDelegate;
@class IGFollowAllUsersView;

@interface IGFollowAllUsersCell : UICollectionViewCell {

	id<IGFollowAllUsersCellDelegate> _delegate;
	IGFollowAllUsersView* _followAllUsersView;

}

@property (assign,nonatomic) unsigned userCount; 
@property (assign,nonatomic) char followAllButtonEnabled; 
@property (assign,nonatomic,__weak) id<IGFollowAllUsersCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFollowAllUsersView * followAllUsersView;                   //@synthesize followAllUsersView=_followAllUsersView - In the implementation block
+(float)preferredHeight;
+(Class)viewClass;
-(void)setUserCount:(unsigned)arg1 ;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)onFollowAllButtonTapped;
-(IGFollowAllUsersView *)followAllUsersView;
-(unsigned)userCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFollowAllUsersCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFollowAllUsersCellDelegate>)delegate;
@end

