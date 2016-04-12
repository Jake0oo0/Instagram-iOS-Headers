/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGFileCoordinator;

@interface IGExplorePhotosArchiver : NSObject {

	IGFileCoordinator* _trendsFileCoordinator;
	IGFileCoordinator* _marqueeFileCoordinator;

}

@property (nonatomic,retain) IGFileCoordinator * trendsFileCoordinator;               //@synthesize trendsFileCoordinator=_trendsFileCoordinator - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * marqueeFileCoordinator;              //@synthesize marqueeFileCoordinator=_marqueeFileCoordinator - In the implementation block
-(IGFileCoordinator *)trendsFileCoordinator;
-(IGFileCoordinator *)marqueeFileCoordinator;
-(char)archiveTrends:(id)arg1 ;
-(char)archiveMarqueeItems:(id)arg1 ;
-(id)unarchiveTrends;
-(id)unarchiveMarqueeItems;
-(void)setTrendsFileCoordinator:(IGFileCoordinator *)arg1 ;
-(void)setMarqueeFileCoordinator:(IGFileCoordinator *)arg1 ;
@end

