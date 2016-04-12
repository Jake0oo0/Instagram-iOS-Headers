/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate;
@class IGPost, NSString;

@interface IGEventViewerPostItemController : IGListItemController <IGListItemType> {

	IGPost* _post;
	id<IGEventViewerMediaCellDelegate> _mediaCellDelegate;
	id<IGEventViewerAttributionHeaderCellDelegate> _headerCellDelegate;

}

@property (nonatomic,readonly) IGPost * post;                                                                         //@synthesize post=_post - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerMediaCellDelegate> mediaCellDelegate;                           //@synthesize mediaCellDelegate=_mediaCellDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerAttributionHeaderCellDelegate> headerCellDelegate;              //@synthesize headerCellDelegate=_headerCellDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGPost *)post;
-(id<IGEventViewerAttributionHeaderCellDelegate>)headerCellDelegate;
-(id<IGEventViewerMediaCellDelegate>)mediaCellDelegate;
-(id)initWithPost:(id)arg1 headerCellDelegate:(id)arg2 mediaCellDelegate:(id)arg3 ;
-(id)headerCellAtIndex:(int)arg1 ;
-(id)mediaCellAtIndex:(int)arg1 ;
-(CGSize)headerCellSize;
-(CGSize)mediaCellSize;
-(Class)cellClassForPostMediaType:(int)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

