/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionView, NSMutableSet;

@interface IGFeedUsertagManager : NSObject {

	UICollectionView* _collectionView;
	NSMutableSet* _feedItemsScheduledForTagRemoval;
	float _navBarHeight;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) NSMutableSet * feedItemsScheduledForTagRemoval;              //@synthesize feedItemsScheduledForTagRemoval=_feedItemsScheduledForTagRemoval - In the implementation block
@property (nonatomic,readonly) float navBarHeight;                                          //@synthesize navBarHeight=_navBarHeight - In the implementation block
-(void)scheduleCellForUsertagRemoval:(id)arg1 ;
-(float)navBarHeight;
-(void)hideUsertagsForFeedItem:(id)arg1 ;
-(void)showUsertagsIndication:(char)arg1 inCell:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 navBarHeight:(float)arg2 ;
-(NSMutableSet *)feedItemsScheduledForTagRemoval;
-(UICollectionView *)collectionView;
@end

