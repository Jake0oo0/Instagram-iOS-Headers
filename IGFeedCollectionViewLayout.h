
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewLayout.h>
#import <Instagram/IGFeedCollectionViewLayout.h>

@protocol IGFeedCollectionViewLayout <NSObject>
@end

#import <Instagram/IGCollectionViewLayoutAnalytics.h>

@protocol IGFeedCollectionViewLayoutDelegate;
@class NSMutableDictionary, NSString;

@interface IGFeedCollectionViewLayout : IGCollectionViewLayout <IGFeedCollectionViewLayout, IGCollectionViewLayoutAnalytics> {

	vector<int, std::__1::allocator<int> >* _sectionCounts;
	vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >* _itemHeights;
	vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >* _itemWidths;
	vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >* _cumulativeItemOffsets;
	vector<float, std::__1::allocator<float> >* _cachedSectionHeights;
	vector<float, std::__1::allocator<float> >* _cachedSectionMaxYValues;
	vector<float, std::__1::allocator<float> >* _headerHeights;
	NSMutableDictionary* _attributesCache;
	NSMutableDictionary* _headerAttributesCache;
	char _pinsHeaders;
	float _topContentInset;
	id<IGFeedCollectionViewLayoutDelegate> _delegate;
	float _headerHeight;
	float _widthForLayout;

}

@property (assign,nonatomic) float widthForLayout;                                                //@synthesize widthForLayout=_widthForLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float headerHeight;                                                  //@synthesize headerHeight=_headerHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPinsSectionHeaders:(char)arg1 topContentInset:(float)arg2 ;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(NSRange)rangeOfSectionsInRect:(CGRect)arg1 ;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(float)widthForLayout;
-(void)calculateLaytoutInfoWithObjects:(id)arg1 context:(id)arg2 viewWidth:(float)arg3 supplementaryHeaderViewHeight:(float)arg4 sectionCounts:(vector<int, std::__1::allocator<int> >*)arg5 itemHeights:(vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg6 itemWidths:(vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg7 itemOffsets:(vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*)arg8 sectionHeights:(vector<float, std::__1::allocator<float> >*)arg9 headerHeights:(vector<float, std::__1::allocator<float> >*)arg10 ;
-(char)didLayoutForWidth:(float)arg1 ;
-(CGRect)rectForIndexPath:(id)arg1 ;
-(void)setWidthForLayout:(float)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 oldObjects:(id)arg3 oldContext:(id)arg4 synchronous:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setDelegate:(id<IGFeedCollectionViewLayoutDelegate>)arg1 ;
-(id<IGFeedCollectionViewLayoutDelegate>)delegate;
-(int)numberOfItemsInSection:(int)arg1 ;
-(int)numberOfSections;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)rectForSection:(int)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

