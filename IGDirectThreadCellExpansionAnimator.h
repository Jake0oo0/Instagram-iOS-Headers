/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionView, IGDirectThreadTransitionLayout;

@interface IGDirectThreadCellExpansionAnimator : NSObject {

	char _isAnimating;
	UICollectionView* _collectionView;
	IGDirectThreadTransitionLayout* _transitionLayout;

}

@property (assign,nonatomic) char isAnimating;                                               //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThreadTransitionLayout * transitionLayout;              //@synthesize transitionLayout=_transitionLayout - In the implementation block
-(void)setIsAnimating:(char)arg1 ;
-(void)animateForSelectionAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadTransitionLayout *)transitionLayout;
-(void)setTransitionLayout:(IGDirectThreadTransitionLayout *)arg1 ;
-(UICollectionView *)collectionView;
-(char)isAnimating;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
@end

