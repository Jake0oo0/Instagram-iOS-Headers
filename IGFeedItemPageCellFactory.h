

#import <Instagram/Instagram-Structs.h>
@interface IGFeedItemPageCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 delegate:(id)arg4 playerDelegate:(id)arg5 loggingDelegate:(id)arg6 ;
+(CGSize)sizeForContainerWidth:(float)arg1 ;
@end

