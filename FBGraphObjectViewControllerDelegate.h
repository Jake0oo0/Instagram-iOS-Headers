/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:50 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBGraphObjectViewControllerDelegate <NSObject>
@optional
-(char)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 titleSuffixOfItem:(id)arg2;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2;
-(void)graphObjectTableDataSource:(id)arg1 customizeTableCell:(id)arg2;

@required
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2;

@end

