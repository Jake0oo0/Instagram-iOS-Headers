/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IGCollectionViewChangeSet : NSObject {

	NSArray* _addedIndexPaths;
	NSArray* _removedIndexPaths;
	NSArray* _fromMoveIndexPaths;
	NSArray* _toMoveIndexPaths;

}

@property (nonatomic,retain) NSArray * addedIndexPaths;                 //@synthesize addedIndexPaths=_addedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * removedIndexPaths;               //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * fromMoveIndexPaths;              //@synthesize fromMoveIndexPaths=_fromMoveIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * toMoveIndexPaths;                //@synthesize toMoveIndexPaths=_toMoveIndexPaths - In the implementation block
-(void)setRemovedIndexPaths:(NSArray *)arg1 ;
-(void)setAddedIndexPaths:(NSArray *)arg1 ;
-(void)setFromMoveIndexPaths:(NSArray *)arg1 ;
-(void)setToMoveIndexPaths:(NSArray *)arg1 ;
-(NSArray *)addedIndexPaths;
-(NSArray *)removedIndexPaths;
-(NSArray *)fromMoveIndexPaths;
-(NSArray *)toMoveIndexPaths;
-(id)description;
@end

