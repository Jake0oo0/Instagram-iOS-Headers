/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionView, IGUser;

@interface IGPublicThreadCellFactory : NSObject {

	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                   //@synthesize cellViewer=_cellViewer - In the implementation block
+(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 ;
-(id)transitionViewCellAtIndexPath:(id)arg1 withThread:(id)arg2 ;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 ;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

