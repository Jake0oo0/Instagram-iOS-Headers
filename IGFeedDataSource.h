
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGCollectionViewControllerDataSourceUICollectionViewDelegate;
@class NSArray, IGCollectionViewController, NSString;

@interface IGFeedDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _objects;
	id _context;
	IGCollectionViewController*<IGCollectionViewControllerDataSource>*<UICollectionViewDelegate> _collectionViewController;
	float _headerHeight;

}

@property (nonatomic,readonly) float headerHeight;                                                                                                                        //@synthesize headerHeight=_headerHeight - In the implementation block
@property (nonatomic,retain) NSArray * objects;                                                                                                                           //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) id context;                                                                                                                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) IGCollectionViewController*<IGCollectionViewControllerDataSource>*<UICollectionViewDelegate> collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isScrollViewDelegateMethod:(SEL)arg1 ;
-(id)initWithCollectionViewController:(id)arg1 headerHeight:(float)arg2 ;
-(CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 sizeForHeaderInSection:(int)arg2 ;
-(NSArray *)objects;
-(char)respondsToSelector:(SEL)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)context;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setContext:(id)arg1 ;
-(IGCollectionViewController*<IGCollectionViewControllerDataSource>*<UICollectionViewDelegate>)collectionViewController;
-(float)headerHeight;
-(void)setObjects:(NSArray *)arg1 ;
@end

