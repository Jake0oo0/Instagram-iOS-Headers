/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGListVerticalLayoutDataSource.h>
#import <Instagram/IGListVerticalLayoutEstimatingDataSource.h>
#import <Instagram/IGListCollectionContext.h>

@protocol IGNavigationContext, IGPresentationContext, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGListUpdatingDelegate;
@class UICollectionView, IGListItemMap, IGListDisplayHandler, IGListAdapterProxy, UIView, NSMutableSet, IGListCollectionView, NSString;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource, IGListCollectionContext> {

	UICollectionView* _collectionView;
	char _isInUpdateItemBlock;
	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;
	id<IGListAdapterDataSource> _dataSource;
	id<IGListAdapterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	id<IGListUpdatingDelegate> _updatingDelegate;
	IGListItemMap* _itemMap;
	IGListDisplayHandler* _displayHandler;
	IGListAdapterProxy* _delegateProxy;
	UIView* _emptyBackgroundView;
	IGListItemMap* _previousItemMap;
	NSMutableSet* _registeredItemControllerClasses;

}

@property (nonatomic,__weak,readonly) id<IGNavigationContext> navigationContext;                      //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,__weak,readonly) id<IGPresentationContext> presentationContext;                  //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) IGListCollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<IGListAdapterDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (nonatomic,readonly) id<IGListUpdatingDelegate> updatingDelegate;                           //@synthesize updatingDelegate=_updatingDelegate - In the implementation block
@property (nonatomic,readonly) IGListItemMap * itemMap;                                               //@synthesize itemMap=_itemMap - In the implementation block
@property (nonatomic,readonly) IGListDisplayHandler * displayHandler;                                 //@synthesize displayHandler=_displayHandler - In the implementation block
@property (nonatomic,retain) IGListAdapterProxy * delegateProxy;                                      //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,retain) UIView * emptyBackgroundView;                                            //@synthesize emptyBackgroundView=_emptyBackgroundView - In the implementation block
@property (assign,nonatomic) char isInUpdateItemBlock;                                                //@synthesize isInUpdateItemBlock=_isInUpdateItemBlock - In the implementation block
@property (nonatomic,retain) IGListItemMap * previousItemMap;                                         //@synthesize previousItemMap=_previousItemMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredItemControllerClasses;                          //@synthesize registeredItemControllerClasses=_registeredItemControllerClasses - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize; 
-(id)listItemControllerForItem:(id)arg1 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(unsigned)sectionForItem:(id)arg1 ;
-(id)initWithUpdatingDelegate:(id)arg1 navigationContext:(id)arg2 presentationContext:(id)arg3 ;
-(void)registerAllItemControllerCells;
-(void)updateAfterPublicSettingsChange;
-(void)updateCollectionViewDelegate;
-(void)updateItems:(id)arg1 ;
-(id)layoutAttributesForIndexPath:(id)arg1 ;
-(IGListItemMap *)itemMap;
-(id<IGListUpdatingDelegate>)updatingDelegate;
-(void)setPreviousItemMap:(IGListItemMap *)arg1 ;
-(char)isValidSupplementaryViewSourceForElementKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)supplementaryViewSourceAtIndexPath:(id)arg1 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)checkAndRegisterListItemController:(id)arg1 ;
-(void)updateBackgroundViewWithItemCount:(unsigned)arg1 ;
-(NSMutableSet *)registeredItemControllerClasses;
-(id)reusableViewIdentifierForClass:(Class)arg1 ;
-(char)isInUpdateItemBlock;
-(IGListItemMap *)previousItemMap;
-(id)itemMapAdjustForUpdateBlock:(char)arg1 ;
-(id)validSupplementaryViewKindsForItemControllerAtIndexPath:(id)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)estimatedSizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(IGListDisplayHandler *)displayHandler;
-(id)visibleListItemControllers;
-(id)indexPathForItemController:(id)arg1 index:(int)arg2 ;
-(id)indexPathsFromListItemController:(id)arg1 indexes:(id)arg2 adjustForUpdateBlock:(char)arg3 ;
-(void)setIsInUpdateItemBlock:(char)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)sizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)estimatedSizeForItemAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)estimatedSizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2 ;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2 ;
-(id)visibleCellsForListItemController:(id)arg1 ;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3 ;
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4 ;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)reloadListItemController:(id)arg1 ;
-(void)performBatchAnimated:(char)arg1 updates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithNavigationContext:(id)arg1 presentationContext:(id)arg2 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(void)scrollToItem:(id)arg1 scrollDirection:(int)arg2 animated:(char)arg3 ;
-(void)performUpdatesAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadItems:(id)arg1 ;
-(id)itemAtSection:(unsigned)arg1 ;
-(UIView *)emptyBackgroundView;
-(void)setEmptyBackgroundView:(UIView *)arg1 ;
-(void)setRegisteredItemControllerClasses:(NSMutableSet *)arg1 ;
-(id<IGNavigationContext>)navigationContext;
-(id<IGPresentationContext>)presentationContext;
-(IGListAdapterProxy *)delegateProxy;
-(void)setDataSource:(id<IGListAdapterDataSource>)arg1 ;
-(void)setDelegate:(id<IGListAdapterDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGListAdapterDataSource>)dataSource;
-(id<IGListAdapterDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(id)items;
-(IGListCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(void)setDelegateProxy:(IGListAdapterProxy *)arg1 ;
-(CGSize)containerSize;
@end

