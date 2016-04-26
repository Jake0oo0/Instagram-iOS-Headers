/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource;
@class IGListVerticalLayoutCache;

@interface IGListVerticalLayout : UICollectionViewLayout {

	char _stickyHeadersEnabled;
	char _needsToPrepareAttributes;
	id<IGListVerticalLayoutDataSource> _dataSource;
	id<IGListVerticalLayoutEstimatingDataSource> _estimatingDataSource;
	float _sectionSpacing;
	float _stickyHeaderOriginYAdjustment;
	unsigned _scrollState;
	IGListVerticalLayoutCache* _cache;

}

@property (assign,nonatomic,__weak) id<IGListVerticalLayoutDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListVerticalLayoutEstimatingDataSource> estimatingDataSource;              //@synthesize estimatingDataSource=_estimatingDataSource - In the implementation block
@property (assign,nonatomic) float sectionSpacing;                                                                  //@synthesize sectionSpacing=_sectionSpacing - In the implementation block
@property (assign,nonatomic) char stickyHeadersEnabled;                                                             //@synthesize stickyHeadersEnabled=_stickyHeadersEnabled - In the implementation block
@property (assign,nonatomic) float stickyHeaderOriginYAdjustment;                                                   //@synthesize stickyHeaderOriginYAdjustment=_stickyHeaderOriginYAdjustment - In the implementation block
@property (assign,nonatomic) unsigned scrollState;                                                                  //@synthesize scrollState=_scrollState - In the implementation block
@property (assign,nonatomic) char needsToPrepareAttributes;                                                         //@synthesize needsToPrepareAttributes=_needsToPrepareAttributes - In the implementation block
@property (nonatomic,readonly) IGListVerticalLayoutCache * cache;                                                   //@synthesize cache=_cache - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(void)setEstimatingDataSource:(id<IGListVerticalLayoutEstimatingDataSource>)arg1 ;
-(id)initWithDataSource:(id)arg1 estimatingDataSource:(id)arg2 layoutCache:(id)arg3 ;
-(id<IGListVerticalLayoutEstimatingDataSource>)estimatingDataSource;
-(unsigned)scrollState;
-(void)resetForDataSourceChange;
-(void)setNeedsToPrepareAttributes:(char)arg1 ;
-(char)needsToPrepareAttributes;
-(void)prepareAllAttributes;
-(id)computeOrRetrieveSupplementaryViewAttributesAtIndexPath:(id)arg1 forKind:(id)arg2 estimated:(char)arg3 ;
-(char)isEmptySection:(int)arg1 ;
-(id)computeOrRetrieveItemAttributesAtIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)enumerateAllIndexPathsUsingBlock:(/*^block*/id)arg1 ;
-(id)lastIndexPath;
-(void)setScrollState:(unsigned)arg1 ;
-(id)attributesFromLastKnownAttributes:(id)arg1 inRect:(CGRect)arg2 targetRange:(NSRange*)arg3 ;
-(NSRange)findTargetSectionRangeForElementsInRect:(CGRect)arg1 ;
-(void)configureHeaderAttributes:(id)arg1 estimated:(char)arg2 shouldQuerySize:(char)arg3 ;
-(void)configureItemAttributes:(id)arg1 estimated:(char)arg2 ;
-(void)enumerateIndexPathsInSectionRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)stickyHeadersEnabled;
-(void)configureHeaderAttributesForStickiness:(id)arg1 ;
-(float)stickyHeaderOriginYAdjustment;
-(float)sectionSpacing;
-(NSRange)rangeForTargetSection:(int)arg1 ;
-(unsigned)findTargetItemInSection:(unsigned)arg1 forElementsInRect:(CGRect)arg2 movingUp:(char*)arg3 ;
-(void)removeAttributesAtIndexPaths:(id)arg1 ;
-(void)reconfigureAttributesInSection:(unsigned)arg1 ;
-(void)handleCollectionViewUpdates:(id)arg1 ;
-(void)processUpdateItems:(id)arg1 ;
-(id)attributesAboveItemIndexPath:(id)arg1 estimated:(char)arg2 adjustmentForStickyHeader:(float*)arg3 ;
-(int)lastItemIndexInSection:(int)arg1 ;
-(id)attributesAboveHeaderIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)setStickyHeadersEnabled:(char)arg1 ;
-(void)setStickyHeaderOriginYAdjustment:(float)arg1 ;
-(void)setSectionSpacing:(float)arg1 ;
-(id)attributesAboveItemIndexPath:(id)arg1 estimated:(char)arg2 ;
-(void)setDataSource:(id<IGListVerticalLayoutDataSource>)arg1 ;
-(id)init;
-(id)description;
-(id<IGListVerticalLayoutDataSource>)dataSource;
-(int)numberOfItemsInSection:(int)arg1 ;
-(int)numberOfSections;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(IGListVerticalLayoutCache *)cache;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
@end

