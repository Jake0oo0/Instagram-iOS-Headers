/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:20 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <Instagram/IGCollectionViewLayoutAdditions.h>

@class NSDictionary, NSString;

@interface IGCollectionViewGridLayout : UICollectionViewLayout <IGCollectionViewLayoutAdditions> {

	float _supplementaryHeaderViewHeight;
	float _supplementaryFooterViewHeight;
	float _headerAdjustmentAmount;
	int _numberOfColumns;
	float _spacing;
	NSDictionary* _layoutInfo;
	int _numberOfItems;
	float _itemSideLength;

}

@property (nonatomic,readonly) int numberOfColumns;                            //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) float spacing;                                  //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,readonly) CGSize itemSize; 
@property (nonatomic,retain) NSDictionary * layoutInfo;                        //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,readonly) int numberOfItems;                              //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,readonly) float itemSideLength;                           //@synthesize itemSideLength=_itemSideLength - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float supplementaryHeaderViewHeight;              //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;              //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                     //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
-(float)headerAdjustmentAmount;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(float)supplementaryFooterViewHeight;
-(id)initWithNumberOfColumns:(int)arg1 spacing:(float)arg2 ;
-(float)itemSideLength;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(id)init;
-(int)numberOfColumns;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(int)numberOfItems;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(float)spacing;
-(CGSize)itemSize;
-(NSDictionary *)layoutInfo;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
-(NSRange)itemsInRect:(CGRect)arg1 ;
@end

