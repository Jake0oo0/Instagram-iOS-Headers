/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IGCollectionViewChangeSet : NSObject {

	char _shouldAnimate;
	NSArray* _addedIndexPaths;
	NSArray* _removedIndexPaths;
	NSArray* _fromMoveIndexPaths;
	NSArray* _toMoveIndexPaths;

}

@property (assign,nonatomic) char shouldAnimate;                        //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (nonatomic,retain) NSArray * addedIndexPaths;                 //@synthesize addedIndexPaths=_addedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * removedIndexPaths;               //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * fromMoveIndexPaths;              //@synthesize fromMoveIndexPaths=_fromMoveIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * toMoveIndexPaths;                //@synthesize toMoveIndexPaths=_toMoveIndexPaths - In the implementation block
-(NSArray *)removedIndexPaths;
-(void)setRemovedIndexPaths:(NSArray *)arg1 ;
-(void)setAddedIndexPaths:(NSArray *)arg1 ;
-(void)setFromMoveIndexPaths:(NSArray *)arg1 ;
-(void)setToMoveIndexPaths:(NSArray *)arg1 ;
-(NSArray *)addedIndexPaths;
-(NSArray *)fromMoveIndexPaths;
-(NSArray *)toMoveIndexPaths;
-(void)setShouldAnimate:(char)arg1 ;
-(id)description;
-(char)shouldAnimate;
@end

