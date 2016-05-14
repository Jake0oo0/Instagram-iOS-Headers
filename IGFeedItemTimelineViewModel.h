/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGFeedItemConfigurationType;
@class IGFeedItem, NSArray;

@interface IGFeedItemTimelineViewModel : NSObject {

	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _configuration;
	NSArray* _rowItems;
	NSArray* _textRowItems;

}

@property (nonatomic,readonly) NSArray * textRowItems;                                     //@synthesize textRowItems=_textRowItems - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * rowItems;                                         //@synthesize rowItems=_rowItems - In the implementation block
-(IGFeedItem *)feedItem;
-(int)feedItemCellTypeForRow:(int)arg1 ;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 ;
-(char)shouldShowTimestamp;
-(char)shouldShowInsights;
-(char)shouldShowPivotGrid;
-(int)numberOfTextRowsInTimeline;
-(NSArray *)textRowItems;
-(int)totalNumberOfRows;
-(int)numberOfFeedCellsBeforeTextRows;
-(int)cellTypeForTextTimelineRow:(int)arg1 ;
-(int)captionCellRow;
-(id)commentForTextTimelineRow:(int)arg1 ;
-(id<IGFeedItemConfigurationType>)configuration;
-(NSArray *)rowItems;
@end

