/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:21 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(int)numberOfSectionsInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@required
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

