/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGEventViewerCellType;
@class IGPost, NSIndexPath, IGFeedItemMediaCell, IGEventViewerVideoCell, IGEventViewerPhotoCell;

@interface IGEventViewerPlaybackItem : NSObject {

	IGPost* _post;
	NSIndexPath* _indexPath;
	IGFeedItemMediaCell*<IGEventViewerCellType> _cell;

}

@property (nonatomic,readonly) IGPost * post;                                                 //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                       //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) IGEventViewerVideoCell * videoCell; 
@property (nonatomic,readonly) IGEventViewerPhotoCell * photoCell; 
-(IGPost *)post;
-(char)isValidVideoItem;
-(char)isValidPhotoItem;
-(IGEventViewerPhotoCell *)photoCell;
-(id)initWithPost:(id)arg1 indexPath:(id)arg2 cell:(id)arg3 ;
-(IGEventViewerVideoCell *)videoCell;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSIndexPath *)indexPath;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)cell;
@end

