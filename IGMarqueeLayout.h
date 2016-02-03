/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:17 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class IGMarqueeViewLayoutSpec, NSIndexPath;

@interface IGMarqueeLayout : UICollectionViewFlowLayout {

	IGMarqueeViewLayoutSpec* _layoutSpec;
	NSIndexPath* _currentlyCenteredIndexPath;

}

@property (nonatomic,readonly) IGMarqueeViewLayoutSpec * layoutSpec;                //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyCenteredIndexPath;              //@synthesize currentlyCenteredIndexPath=_currentlyCenteredIndexPath - In the implementation block
-(CGPoint)targetContentOffsetInScrollview:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(CGPoint)targetContentOffsetForLayoutAttributes:(id)arg1 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)setCurrentlyCenteredIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithLayoutSpec:(id)arg1 ;
-(void)setScrollOffsetForIndexPath:(id)arg1 animated:(char)arg2 ;
-(IGMarqueeViewLayoutSpec *)layoutSpec;
-(void)setScrollOffsetForNextIndexPath;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
@end

