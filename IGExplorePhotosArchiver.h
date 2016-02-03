/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:17 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

