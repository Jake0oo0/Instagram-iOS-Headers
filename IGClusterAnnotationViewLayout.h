

#import <Instagram/Instagram-Structs.h>
@interface IGClusterAnnotationViewLayout : NSObject {

	int _spacing;
	int _fullScreenSquareDimension;
	char _adjustOrigin;
	int _numTiles;
	char _hasShowMoreButton;
	IGPagingFocusOffsets _largeRows;
	IGPagingFocusOffsets _smallRows;

}

@property (assign,nonatomic) IGPagingFocusOffsets largeRows;              //@synthesize largeRows=_largeRows - In the implementation block
@property (assign,nonatomic) IGPagingFocusOffsets smallRows;              //@synthesize smallRows=_smallRows - In the implementation block
+(id)forNumberOfTiles:(int)arg1 withShowMoreButton:(char)arg2 adjustOrigin:(char)arg3 ;
-(id)initWithNumberOfTiles:(int)arg1 withShowMoreButton:(char)arg2 adjustOrigin:(char)arg3 ;
-(CGRect)frameForInfoButton:(char)arg1 ;
-(float)totalWidthInFullScreen:(char)arg1 ;
-(float)totalHeightIncludingShowMoreButton;
-(CGRect)adjustRect:(CGRect)arg1 ;
-(CGRect)frameForFullScreenTile:(int)arg1 ;
-(char)shouldRecenterTileInFullScreen;
-(char)isLargeImage:(int)arg1 ;
-(CGRect)frameForExplodedTile:(int)arg1 ;
-(CGRect)frameForShowMoreButton:(id)arg1 forFullScreen:(char)arg2 ;
-(char)shouldFadeOutOtherTilesInFullScreen;
-(IGPagingFocusOffsets)largeRows;
-(void)setLargeRows:(IGPagingFocusOffsets)arg1 ;
-(IGPagingFocusOffsets)smallRows;
-(void)setSmallRows:(IGPagingFocusOffsets)arg1 ;
-(float)totalWidth;
-(float)totalHeightIncludingInfoButton;
-(CGPoint)centerOfExplodedClusterInView:(id)arg1 ;
-(float)totalHeight;
@end

