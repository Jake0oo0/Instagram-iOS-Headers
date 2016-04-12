
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, IGDirectThreadLayoutInvalidationContext, NSDictionary, IGDirectContent;

@interface IGPublicThreadLayout : UICollectionViewLayout {

	NSArray* _allContent;
	NSArray* _nextThreadAllContent;
	NSIndexPath* _nextThreadTransitionViewIndexPath;
	NSArray* _seenUsers;
	IGDirectThreadLayoutInvalidationContext* _igInvalidationContext;
	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	NSDictionary* _footerAttributes;
	IGDirectContent* _currentlyExpandedContent;
	float _collectionViewWidth;
	NSDictionary* _nextThreadItemAttributes;
	NSDictionary* _nextThreadTransitionViewAttributes;
	CGSize _calculatedCollectionViewContentSize;

}

@property (assign,nonatomic,__weak) NSArray * allContent;                                                  //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) NSArray * nextThreadAllContent;                                               //@synthesize nextThreadAllContent=_nextThreadAllContent - In the implementation block
@property (nonatomic,retain) NSIndexPath * nextThreadTransitionViewIndexPath;                              //@synthesize nextThreadTransitionViewIndexPath=_nextThreadTransitionViewIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * seenUsers;                                                          //@synthesize seenUsers=_seenUsers - In the implementation block
@property (nonatomic,retain) IGDirectThreadLayoutInvalidationContext * igInvalidationContext;              //@synthesize igInvalidationContext=_igInvalidationContext - In the implementation block
@property (nonatomic,retain) NSDictionary * itemAttributes;                                                //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                                              //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerAttributes;                                              //@synthesize footerAttributes=_footerAttributes - In the implementation block
@property (assign,nonatomic) CGSize calculatedCollectionViewContentSize;                                   //@synthesize calculatedCollectionViewContentSize=_calculatedCollectionViewContentSize - In the implementation block
@property (nonatomic,retain) IGDirectContent * currentlyExpandedContent;                                   //@synthesize currentlyExpandedContent=_currentlyExpandedContent - In the implementation block
@property (assign,nonatomic) float collectionViewWidth;                                                    //@synthesize collectionViewWidth=_collectionViewWidth - In the implementation block
@property (nonatomic,retain) NSDictionary * nextThreadItemAttributes;                                      //@synthesize nextThreadItemAttributes=_nextThreadItemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * nextThreadTransitionViewAttributes;                            //@synthesize nextThreadTransitionViewAttributes=_nextThreadTransitionViewAttributes - In the implementation block
+(Class)invalidationContextClass;
-(NSArray *)allContent;
-(void)calculateAndCacheAttributes;
-(IGDirectThreadLayoutInvalidationContext *)igInvalidationContext;
-(void)setIgInvalidationContext:(IGDirectThreadLayoutInvalidationContext *)arg1 ;
-(CGSize)calculatedCollectionViewContentSize;
-(id)currentThreadAndNextThreadTransitionAttributes;
-(NSDictionary *)nextThreadItemAttributes;
-(NSDictionary *)nextThreadTransitionViewAttributes;
-(NSDictionary *)itemAttributes;
-(void)setAllContent:(NSArray *)arg1 ;
-(NSArray *)seenUsers;
-(void)setSeenUsers:(NSArray *)arg1 ;
-(void)setNextThreadTransitionViewAttributes:(NSDictionary *)arg1 ;
-(void)setCollectionViewWidth:(float)arg1 ;
-(float)collectionViewWidth;
-(float)calculateItemAttributes:(float)arg1 currentHeight:(float)arg2 contents:(id)arg3 map:(id*)arg4 section:(int)arg5 ;
-(float)calculateNextThreadTransitionViewAttributesWithYOffset:(float)arg1 width:(float)arg2 ;
-(NSArray *)nextThreadAllContent;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(void)setNextThreadItemAttributes:(NSDictionary *)arg1 ;
-(float)calculateContentSize:(id)arg1 updateAttributes:(id)arg2 withBaseTopToBottom:(float)arg3 ;
-(void)setCalculatedCollectionViewContentSize:(CGSize)arg1 ;
-(id)sortIndexPath:(id)arg1 ;
-(CGSize)sizeForContent:(id)arg1 prevContent:(id)arg2 withViewWidth:(float)arg3 ;
-(char)updateSeenUsers:(id)arg1 ;
-(void)setNextThreadAllContent:(NSArray *)arg1 ;
-(NSIndexPath *)nextThreadTransitionViewIndexPath;
-(void)setNextThreadTransitionViewIndexPath:(NSIndexPath *)arg1 ;
-(IGDirectContent *)currentlyExpandedContent;
-(void)setCurrentlyExpandedContent:(IGDirectContent *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)footerAttributes;
-(NSDictionary *)headerAttributes;
@end

