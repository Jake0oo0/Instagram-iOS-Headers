
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGEventViewerFeedLayoutDataSource.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate;
@class NSArray, NSString;

@interface IGEventViewerDataSource : NSObject <UICollectionViewDataSource, IGEventViewerFeedLayoutDataSource> {

	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;
	NSArray* _posts;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,copy) NSArray * posts;                                                                         //@synthesize posts=_posts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)posts;
-(id)initWithPosts:(id)arg1 ;
-(void)setPosts:(NSArray *)arg1 ;
-(id)postAtIndexPath:(id)arg1 ;
-(id)headerCellForPost:(id)arg1 atIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(id)mediaCellForPost:(id)arg1 atIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id)cellIdForPostMediaType:(int)arg1 ;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(CGSize)eventViewerFeedLayout:(id)arg1 sizeForMediaItemAtIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(id)allPosts;
-(void)appendPosts:(id)arg1 ;
-(void)replacePostsWithPosts:(id)arg1 ;
-(void)deletePostAtIndexPath:(id)arg1 ;
-(id)indexPathForPost:(id)arg1 ;
-(void)setMediaCellDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(void)setHeaderCellDelegate:(id<IGEventViewerAttributionHeaderCellDelegate>)arg1 ;
-(unsigned)count;
-(id)init;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
@end
