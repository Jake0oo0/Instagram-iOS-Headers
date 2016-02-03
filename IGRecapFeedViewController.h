/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:19 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>

@class IGFeedFollowPeopleCell, NSArray, NSString;

@interface IGRecapFeedViewController : IGFeedViewController <IGFeedFollowPeopleCellDelegate> {

	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	NSArray* _followAccountList;

}

@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;              //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (nonatomic,retain) NSArray * followAccountList;                                //@synthesize followAccountList=_followAccountList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)followAccountList;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFollowAccountList:(NSArray *)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 ;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
@end

