/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGFeedItem, IGPostItem;

@interface IGAlbumFocusCoordinator : NSObject {

	IGFeedItem* _feedItem;
	IGPostItem* _currentItem;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGPostItem * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 currentItem:(id)arg2 ;
-(void)setCurrentItem:(IGPostItem *)arg1 ;
-(IGPostItem *)currentItem;
@end

