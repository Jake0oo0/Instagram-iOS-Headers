/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGFeedItemVideoView, IGFeedItem, IGFeedItemPageCellState;

@interface IGPageCellIndicatorContext : NSObject {

	char _animated;
	IGFeedItemVideoView* _videoView;
	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;

}

@property (nonatomic,readonly) IGFeedItemVideoView * videoView;                      //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedItemPageCellState * pageCellState;              //@synthesize pageCellState=_pageCellState - In the implementation block
@property (nonatomic,readonly) char animated;                                        //@synthesize animated=_animated - In the implementation block
-(IGFeedItem *)feedItem;
-(IGFeedItemPageCellState *)pageCellState;
-(id)initWithVideoView:(id)arg1 feedItem:(id)arg2 pageCellState:(id)arg3 animated:(char)arg4 ;
-(IGFeedItemVideoView *)videoView;
-(char)isEqual:(id)arg1 ;
-(char)animated;
@end

