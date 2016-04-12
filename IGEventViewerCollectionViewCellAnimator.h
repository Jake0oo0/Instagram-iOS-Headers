/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionView, NSString;

@interface IGEventViewerCollectionViewCellAnimator : NSObject {

	UICollectionView* _collectionView;
	NSString* _videoCellId;
	NSString* _photoCellId;
	NSString* _headerCellId;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoCellId;                           //@synthesize videoCellId=_videoCellId - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoCellId;                           //@synthesize photoCellId=_photoCellId - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerCellId;                          //@synthesize headerCellId=_headerCellId - In the implementation block
-(id)visibleMediaCells;
-(id)visibleHeaderCells;
-(void)updateCrossFadeForVisibleMediaCells:(id)arg1 ;
-(void)updateCrossFadeForVisibleHeaderCells:(id)arg1 centeredIndexPath:(id)arg2 ;
-(NSString *)videoCellId;
-(NSString *)photoCellId;
-(NSString *)headerCellId;
-(char)isMediaCell:(id)arg1 ;
-(id)visibleCellsUsingPredicate:(id)arg1 ;
-(char)isHeaderCell:(id)arg1 ;
-(void)updateVisibleCellsForTargetIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)updateVisibleCellsWithDynamicCrossFadeAnimated:(char)arg1 centeredIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

