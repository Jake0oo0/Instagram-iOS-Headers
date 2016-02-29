/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>

@class IGFeedItemPivotCellDataSource, IGFeedItem, IGPivotCarouselView, UIViewController, NSString;

@interface IGFeedItemPivotCell : UICollectionViewCell <UICollectionViewDelegate> {

	IGFeedItemPivotCellDataSource* _pivotDataSource;
	IGFeedItem* _post;
	IGPivotCarouselView* _carousel;
	UIViewController* _baseController;

}

@property (nonatomic,retain) IGFeedItem * post;                                     //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) IGPivotCarouselView * carousel;                      //@synthesize carousel=_carousel - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * baseController;              //@synthesize baseController=_baseController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 ;
-(IGFeedItem *)post;
-(void)setPost:(IGFeedItem *)arg1 ;
-(void)setupCellWithItem:(id)arg1 underController:(id)arg2 ;
-(void)onCarouselButton:(id)arg1 ;
-(void)setBaseController:(UIViewController *)arg1 ;
-(void)segueToFullPage:(int)arg1 ;
-(UIViewController *)baseController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)prepareForReuse;
-(IGPivotCarouselView *)carousel;
@end

