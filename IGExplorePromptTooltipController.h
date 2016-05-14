/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGExplorePromptMediaViewDelegate.h>

@protocol OS_dispatch_source, IGExplorePromptTooltipDelegate;
@class NSObject, IGExplorePromptMediaView, IGExplorePromptTooltipView, NSArray, NSDate, IGExplorePromptTooltipLogger, NSTimer, NSString;

@interface IGExplorePromptTooltipController : NSObject <IGExplorePromptMediaViewDelegate> {

	NSObject*<OS_dispatch_source> _timer;
	char _isTooltipVisible;
	char _shouldShowPromptThisSession;
	id<IGExplorePromptTooltipDelegate> _delegate;
	IGExplorePromptMediaView* _exploreView;
	IGExplorePromptTooltipView* _tooltipView;
	NSArray* _imageURLs;
	NSDate* _lastImpressionTime;
	int _impressionCount;
	IGExplorePromptTooltipLogger* _logger;
	int _latestFeedPosition;
	NSTimer* _timerToDisplay;

}

@property (nonatomic,retain) IGExplorePromptMediaView * exploreView;                          //@synthesize exploreView=_exploreView - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipView * tooltipView;                        //@synthesize tooltipView=_tooltipView - In the implementation block
@property (nonatomic,retain) NSArray * imageURLs;                                             //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,retain) NSDate * lastImpressionTime;                                     //@synthesize lastImpressionTime=_lastImpressionTime - In the implementation block
@property (assign,nonatomic) int impressionCount;                                             //@synthesize impressionCount=_impressionCount - In the implementation block
@property (assign,nonatomic) char isTooltipVisible;                                           //@synthesize isTooltipVisible=_isTooltipVisible - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipLogger * logger;                           //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) int latestFeedPosition;                                          //@synthesize latestFeedPosition=_latestFeedPosition - In the implementation block
@property (assign,nonatomic) char shouldShowPromptThisSession;                                //@synthesize shouldShowPromptThisSession=_shouldShowPromptThisSession - In the implementation block
@property (nonatomic,retain) NSTimer * timerToDisplay;                                        //@synthesize timerToDisplay=_timerToDisplay - In the implementation block
@property (assign,nonatomic,__weak) id<IGExplorePromptTooltipDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageURLs:(NSArray *)arg1 ;
-(void)mainFeedScrollTriggered:(id)arg1 ;
-(void)explorePreloadDidFinish:(id)arg1 ;
-(void)mainFeedDidScrollToOldPost:(id)arg1 ;
-(void)userDidInteractWithExplore;
-(void)setLastImpressionTime:(NSDate *)arg1 ;
-(void)setImpressionCount:(int)arg1 ;
-(IGExplorePromptMediaView *)exploreView;
-(NSArray *)imageURLs;
-(char)shouldShowPromptThisSession;
-(NSDate *)lastImpressionTime;
-(int)impressionCount;
-(void)setShouldShowPromptThisSession:(char)arg1 ;
-(void)setLatestFeedPosition:(int)arg1 ;
-(char)shouldShowPrompt;
-(void)scheduleTimerToDisplayTooltip;
-(IGExplorePromptTooltipView *)tooltipView;
-(void)finishDisplayPromptWithAction:(id)arg1 ;
-(void)setIsTooltipVisible:(char)arg1 ;
-(void)dismissPrompt;
-(void)cancelDisplayTimer;
-(void)displayExploreTooltip;
-(void)setTimerToDisplay:(NSTimer *)arg1 ;
-(NSTimer *)timerToDisplay;
-(char)isTooltipVisible;
-(char)isTopVCMainFeed;
-(int)latestFeedPosition;
-(void)explorePromptMediaViewDidTapOnPromptView;
-(void)explorePromptMediaViewDidTapOnCloseButton;
-(void)setExploreView:(IGExplorePromptMediaView *)arg1 ;
-(void)setTooltipView:(IGExplorePromptTooltipView *)arg1 ;
-(IGExplorePromptTooltipLogger *)logger;
-(void)setLogger:(IGExplorePromptTooltipLogger *)arg1 ;
-(void)setDelegate:(id<IGExplorePromptTooltipDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGExplorePromptTooltipDelegate>)delegate;
-(void)scheduleTimer;
@end

