/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
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
-(float)navBarHeight;
-(void)scheduleCellForUsertagRemoval:(id)arg1 ;
-(void)hideUsertagsForFeedItem:(id)arg1 ;
-(void)showUsertagsIndication:(char)arg1 inCell:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 navBarHeight:(float)arg2 ;
-(NSMutableSet *)feedItemsScheduledForTagRemoval;
-(UICollectionView *)collectionView;
@end

