/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPageMediaViewDelegate.h>
#import <Instagram/IGPageCellIndicatorControllerDelegate.h>
#import <Instagram/IGOverlayable.h>
#import <Instagram/IGHeartAnimatable.h>
#import <Instagram/IGFeedVideoCell.h>

@protocol IGFeedItemPageCellDelegate, IGFeedVideoCellPlayerDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, IGFeedItemPageCellState, IGMediaOverlayIndicator, IGPageMediaView, IGPageCellIndicatorController, NSString;

@interface IGFeedItemPageCell : UICollectionViewCell <IGPageMediaViewDelegate, IGPageCellIndicatorControllerDelegate, IGOverlayable, IGHeartAnimatable, IGFeedVideoCell> {

	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;
	float _percentVisible;
	id<IGFeedItemPageCellDelegate> _delegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	IGMediaOverlayIndicator* _indicatorView;
	IGPageMediaView* _pageMediaView;
	IGPageCellIndicatorController* _indicatorController;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                                   //@synthesize pageCellState=_pageCellState - In the implementation block
@property (assign,nonatomic) float percentVisible;                                                      //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPageCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                   //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) IGMediaOverlayIndicator * indicatorView;                                   //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) IGPageMediaView * pageMediaView;                                           //@synthesize pageMediaView=_pageMediaView - In the implementation block
@property (nonatomic,readonly) IGPageCellIndicatorController * indicatorController;                     //@synthesize indicatorController=_indicatorController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)requestVideoPlayback;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)contentViewForHeartAnimation;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(IGPageMediaView *)pageMediaView;
-(IGPageCellIndicatorController *)indicatorController;
-(IGFeedItemPageCellState *)pageCellState;
-(void)showOverlayForDirectResponseInfo:(id)arg1 animated:(char)arg2 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setPercentVisible:(float)arg1 ;
-(void)pageMediaViewWillDisplayOverlay:(id)arg1 ;
-(void)pageMediaViewDidInitialSingleTap:(id)arg1 ;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)pageMediaViewDidDoubleTap:(id)arg1 ;
-(void)pageMediaViewCurrentVideoCellDidLoadImage:(id)arg1 ;
-(void)pageMediaViewDidRequestVideoPlayback:(id)arg1 ;
-(void)pageMediaView:(id)arg1 didToggleVideoAudio:(char)arg2 ;
-(void)pageMediaView:(id)arg1 willScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)pageMediaViewDidScroll:(id)arg1 ;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)pageCellIndicatorControllerDidShowNUX:(id)arg1 ;
-(unsigned)updatePercentVisible:(float)arg1 ;
-(float)percentVisible;
-(void)showNUXIfNeededWithPercentVisible:(float)arg1 ;
-(void)setPageMediaView:(IGPageMediaView *)arg1 ;
-(id)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPageCellDelegate>)delegate;
-(IGMediaOverlayIndicator *)indicatorView;
-(void)setIndicatorView:(IGMediaOverlayIndicator *)arg1 ;
-(char)isSponsored;
@end

