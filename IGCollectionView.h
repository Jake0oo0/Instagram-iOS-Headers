/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>

@interface IGCollectionView : UICollectionView {

	char _isBatchUpdating;

}

@property (assign,nonatomic) char isBatchUpdating;              //@synthesize isBatchUpdating=_isBatchUpdating - In the implementation block
-(void)setIsBatchUpdating:(char)arg1 ;
-(char)isBatchUpdating;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

