

#import <Instagram/Instagram-Structs.h>
@interface IGMediaThumbnailCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 feedItem:(id)arg2 imageSizeForGrid:(CGSize)arg3 ;
+(int)imageOptionToLoadForGrid;
@end

