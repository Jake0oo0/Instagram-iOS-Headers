/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGPageMediaViewDelegate <NSObject>
@required
-(void)pageMediaViewWillDisplayOverlay:(id)arg1;
-(void)pageMediaViewDidInitialSingleTap:(id)arg1;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)pageMediaViewDidDoubleTap:(id)arg1;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1;
-(void)pageMediaViewDidRequestVideoPlayback:(id)arg1;
-(void)pageMediaView:(id)arg1 didToggleVideoAudio:(char)arg2;
-(void)pageMediaView:(id)arg1 willScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)pageMediaViewDidScroll:(id)arg1;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2;

@end

