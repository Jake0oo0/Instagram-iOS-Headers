
#import <Instagram/Instagram-Structs.h>
#import <Instagram/LXReorderableCollectionViewDataSource.h>
#import <Instagram/LXReorderableCollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGFilterTrayManagerViewControllerDelegate.h>

@protocol IGFilterCollectionControllerDelegate;
@class UICollectionView, NSDictionary, NSMutableSet, NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface IGFilterCollectionController : NSObject <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGFilterTrayManagerViewControllerDelegate> {

	char _scrollingToFilter;
	Class _selectedFilterClass;
	id<IGFilterCollectionControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	int _pickerType;
	NSDictionary* _allFiltersById;
	NSMutableSet* _activeFilterSet;
	NSMutableArray* _orderedFilterClasses;
	NSMutableDictionary* _filterThumbnailsById;
	NSMutableSet* _newFilterIds;

}

@property (nonatomic,retain) Class selectedFilterClass;                                             //@synthesize selectedFilterClass=_selectedFilterClass - In the implementation block
@property (nonatomic,readonly) NSArray * filterClassesInTray; 
@property (assign,nonatomic) int pickerType;                                                        //@synthesize pickerType=_pickerType - In the implementation block
@property (assign,nonatomic) char scrollingToFilter;                                                //@synthesize scrollingToFilter=_scrollingToFilter - In the implementation block
@property (nonatomic,retain) NSDictionary * allFiltersById;                                         //@synthesize allFiltersById=_allFiltersById - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeFilterSet;                                        //@synthesize activeFilterSet=_activeFilterSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedFilterClasses;                                 //@synthesize orderedFilterClasses=_orderedFilterClasses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterThumbnailsById;                            //@synthesize filterThumbnailsById=_filterThumbnailsById - In the implementation block
@property (nonatomic,retain) NSMutableSet * newFilterIds;                                           //@synthesize newFilterIds=_newFilterIds - In the implementation block
@property (assign,nonatomic,__weak) id<IGFilterCollectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFilterClasses;
+(id)sharedFiltersHiddenByDefault;
+(id)filtersHiddenByDefault;
+(char)useStaticFilterThumbnails;
-(NSMutableSet *)activeFilterSet;
-(void)readFilterClasses;
-(id)allFilterClasses;
-(NSDictionary *)allFiltersById;
-(id)filterStorageKey;
-(void)setActiveFilterSet:(NSMutableSet *)arg1 ;
-(void)setOrderedFilterClasses:(NSMutableArray *)arg1 ;
-(NSMutableSet *)newFilterIds;
-(void)writeNewFiltersToDefaults;
-(void)writeFiltersToDefaults;
-(id)filterManagementState;
-(NSArray *)filterClassesInTray;
-(char)isNewFilterClass:(Class)arg1 ;
-(void)setNewFilterIsNoLongerNew:(Class)arg1 ;
-(void)setScrollingToFilter:(char)arg1 ;
-(void)setFilterThumbnailsById:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)filterThumbnailsById;
-(void)reloadCellForFilterClass:(Class)arg1 ;
-(void)setSelectedFilterClass:(Class)arg1 ;
-(int)pickerType;
-(void)setPickerType:(int)arg1 ;
-(char)scrollingToFilter;
-(void)setAllFiltersById:(NSDictionary *)arg1 ;
-(void)setNewFilterIds:(NSMutableSet *)arg1 ;
-(char)isVisibleFilterClass:(Class)arg1 ;
-(id)cachedFilterThumbnailForFilterClass:(Class)arg1 ;
-(void)fetchStaticThumbnailForFilterClass:(Class)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFilterClass:(Class)arg1 isVisible:(char)arg2 ;
-(void)moveFilterClassFromIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 wasRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3 ;
-(NSMutableArray *)orderedFilterClasses;
-(void)logFilterManagementState;
-(void)generateFilterPreviewThumbnailsForImage:(id)arg1 ;
-(Class)filterClassForId:(int)arg1 ;
-(void)selectFilter:(Class)arg1 animated:(char)arg2 ;
-(Class)selectedFilterClass;
-(void)setDelegate:(id<IGFilterCollectionControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGFilterCollectionControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithType:(int)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)resetSelection;
-(void)resetToDefaults;
@end

