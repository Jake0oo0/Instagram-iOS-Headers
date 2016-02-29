/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class UICollectionView, UIView;

@interface IGCollectionViewVisibility : NSObject {

	UICollectionView* _collectionView;
	UIView* _navigationbar;
	UIView* _tabBar;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * navigationbar;                         //@synthesize navigationbar=_navigationbar - In the implementation block
@property (nonatomic,readonly) UIView * tabBar;                                //@synthesize tabBar=_tabBar - In the implementation block
-(id)initWithCollectionView:(id)arg1 navigationBar:(id)arg2 tabBar:(id)arg3 ;
-(id)mostVisibleCellFromCells:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(UIView *)navigationbar;
-(NSRange)visibleSectionRange;
-(UICollectionView *)collectionView;
-(UIView *)tabBar;
-(CGRect)visibleContentRect;
@end

