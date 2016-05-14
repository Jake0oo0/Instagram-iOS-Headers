/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGEventViewerCellType, IGEventViewerMediaPauseViewDelegate, IGEventViewerMediaContextViewDelegate;
@class IGFeedItemMediaCell, UIView;

@interface IGEventViewerMediaPauseViewPresenter : NSObject {

	IGFeedItemMediaCell*<IGEventViewerCellType> _mediaCell;
	UIView* _pauseView;
	id<IGEventViewerMediaPauseViewDelegate> _pauseViewDelegate;
	id<IGEventViewerMediaContextViewDelegate> _contextViewDelegate;

}

@property (assign,nonatomic,__weak) IGFeedItemMediaCell*<IGEventViewerCellType> mediaCell;                      //@synthesize mediaCell=_mediaCell - In the implementation block
@property (nonatomic,retain) UIView * pauseView;                                                                //@synthesize pauseView=_pauseView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPauseViewDelegate> pauseViewDelegate;                  //@synthesize pauseViewDelegate=_pauseViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaContextViewDelegate> contextViewDelegate;              //@synthesize contextViewDelegate=_contextViewDelegate - In the implementation block
@property (nonatomic,readonly) char isPauseViewPresented; 
-(UIView *)pauseView;
-(char)isPauseViewPresented;
-(id)styledStringForFeedItem:(id)arg1 width:(float)arg2 ;
-(id<IGEventViewerMediaContextViewDelegate>)contextViewDelegate;
-(void)setPauseView:(UIView *)arg1 ;
-(id<IGEventViewerMediaPauseViewDelegate>)pauseViewDelegate;
-(void)setMediaCell:(IGFeedItemMediaCell*<IGEventViewerCellType>)arg1 ;
-(id)initWithPauseViewDelegate:(id)arg1 contextViewDelegate:(id)arg2 ;
-(void)showInMediaCell:(id)arg1 feedItem:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateLikeButtonInContextView:(id)arg1 hasLiked:(char)arg2 ;
-(void)cancelImageLoadingForBlurringView;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)mediaCell;
-(void)setPauseViewDelegate:(id<IGEventViewerMediaPauseViewDelegate>)arg1 ;
-(void)setContextViewDelegate:(id<IGEventViewerMediaContextViewDelegate>)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
@end

