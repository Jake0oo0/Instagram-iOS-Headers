/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSIndexPath, IGDirectThreadLayoutInvalidationContext, NSDictionary, IGDirectContent, NSCache;

@interface IGDirectThreadLayout : UICollectionViewLayout <NSCopying> {

	char _isSeenStampExpanded;
	NSArray* _allContent;
	NSIndexPath* _currentlyExpandedIndexPath;
	NSArray* _seenUsers;
	IGDirectThreadLayoutInvalidationContext* _igInvalidationContext;
	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	NSDictionary* _footerAttributes;
	IGDirectContent* _currentlyExpandedContent;
	NSCache* _textHeightCache;
	float _collectionViewWidth;
	CGSize _calculatedCollectionViewContentSize;

}

@property (assign,nonatomic) char isSeenStampExpanded;                                                     //@synthesize isSeenStampExpanded=_isSeenStampExpanded - In the implementation block
@property (assign,nonatomic,__weak) NSArray * allContent;                                                  //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyExpandedIndexPath;                                     //@synthesize currentlyExpandedIndexPath=_currentlyExpandedIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * seenUsers;                                                          //@synthesize seenUsers=_seenUsers - In the implementation block
@property (nonatomic,retain) IGDirectThreadLayoutInvalidationContext * igInvalidationContext;              //@synthesize igInvalidationContext=_igInvalidationContext - In the implementation block
@property (nonatomic,retain) NSDictionary * itemAttributes;                                                //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                                              //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerAttributes;                                              //@synthesize footerAttributes=_footerAttributes - In the implementation block
@property (assign,nonatomic) CGSize calculatedCollectionViewContentSize;                                   //@synthesize calculatedCollectionViewContentSize=_calculatedCollectionViewContentSize - In the implementation block
@property (nonatomic,retain) IGDirectContent * currentlyExpandedContent;                                   //@synthesize currentlyExpandedContent=_currentlyExpandedContent - In the implementation block
@property (nonatomic,retain) NSCache * textHeightCache;                                                    //@synthesize textHeightCache=_textHeightCache - In the implementation block
@property (assign,nonatomic) float collectionViewWidth;                                                    //@synthesize collectionViewWidth=_collectionViewWidth - In the implementation block
+(Class)invalidationContextClass;
-(NSArray *)allContent;
-(void)calculateAndCacheAttributes;
-(IGDirectThreadLayoutInvalidationContext *)igInvalidationContext;
-(void)setIgInvalidationContext:(IGDirectThreadLayoutInvalidationContext *)arg1 ;
-(CGSize)calculatedCollectionViewContentSize;
-(NSDictionary *)itemAttributes;
-(void)setAllContent:(NSArray *)arg1 ;
-(NSArray *)seenUsers;
-(void)setSeenUsers:(NSArray *)arg1 ;
-(void)setCollectionViewWidth:(float)arg1 ;
-(float)collectionViewWidth;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(void)setCalculatedCollectionViewContentSize:(CGSize)arg1 ;
-(char)updateSeenUsers:(id)arg1 ;
-(IGDirectContent *)currentlyExpandedContent;
-(void)setCurrentlyExpandedContent:(IGDirectContent *)arg1 ;
-(NSIndexPath *)currentlyExpandedIndexPath;
-(void)setCurrentlyExpandedIndexPath:(NSIndexPath *)arg1 ;
-(char)isSeenStampExpanded;
-(void)setIsSeenStampExpanded:(char)arg1 ;
-(NSCache *)textHeightCache;
-(CGSize)sizeForContent:(id)arg1 withViewWidth:(float)arg2 showsUsername:(char)arg3 isExpandedContent:(char)arg4 ;
-(void)calculateContentSizeAndAdjustAttributesIfNeeded;
-(float)calculateHeightForContent:(id)arg1 andViewWidth:(float)arg2 ;
-(char)useFullSizePhotos;
-(void)setTextHeightCache:(NSCache *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)allAttributes;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)footerAttributes;
-(NSDictionary *)headerAttributes;
@end

