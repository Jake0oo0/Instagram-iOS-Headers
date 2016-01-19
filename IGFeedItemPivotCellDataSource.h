/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@class NSMutableArray, IGFeedItem, NSString;

@interface IGFeedItemPivotCellDataSource : NSObject <UICollectionViewDataSource> {

	NSMutableArray* _thumbnails;
	NSMutableArray* _pivots;
	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) NSMutableArray * pivots;              //@synthesize pivots=_pivots - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(NSMutableArray *)pivots;
-(id)initWithFeedItem:(id)arg1 imageWidth:(float)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

