/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedNetworkSourceHideDelegate;
@class IGFeedItem, IGFeedNetworkSource, IGFeedFocusCoordinator, IGExploreMainFeedLayoutConfiguration, NSString;

@interface IGMediaThumbnailItemController : IGListItemController <IGListItemType> {

	IGFeedItem* _feedItem;
	IGFeedNetworkSource* _networkSource;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;
	id<IGFeedNetworkSourceHideDelegate> _hideDelegate;

}

@property (nonatomic,readonly) IGFeedNetworkSource * networkSource;                                  //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                            //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;                  //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedNetworkSourceHideDelegate> hideDelegate;              //@synthesize hideDelegate=_hideDelegate - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                                //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)displayDelegate;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(IGFeedItem *)feedItem;
-(void)configureCell:(id)arg1 atIndex:(int)arg2 ;
-(void)onFeedItemHidden:(id)arg1 ;
-(id)newContexualFeedController;
-(id<IGFeedNetworkSourceHideDelegate>)hideDelegate;
-(IGFeedNetworkSource *)networkSource;
-(unsigned)contextualFeedInfiniteScrollCap;
-(id)newNetworkSource;
-(id)initWithNetworkSource:(id)arg1 focusCoordinator:(id)arg2 layoutConfig:(id)arg3 hideDelegate:(id)arg4 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

