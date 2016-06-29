
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPullRefreshControlDelegate.h>

@protocol IGPullToRefreshProtocol;
@class IGPullToRefreshView, NSString;

@interface IGPullToRefreshViewManager : NSObject <IGPullRefreshControlDelegate> {

	char _hasPullToRefreshSessionRunning;
	char _hasClosureAnimationRunning;
	char _needsPullToRefreshClosureOnNetworkFinishedLoading;
	char _isClosingPullRefreshView;
	char _disableAutoClosureForFakedPullToRefresh;
	id<IGPullToRefreshProtocol> _delegate;
	IGPullToRefreshView* _pullRefreshControlView;
	float _pullToRefreshTopInset;
	/*^block*/id _completionBlockToRunAfterPullToRefreshClosure;
	double _timeStampPullingDownTriggeredNetworkFetch;

}

@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                        //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (assign,nonatomic) float pullToRefreshTopInset;                                         //@synthesize pullToRefreshTopInset=_pullToRefreshTopInset - In the implementation block
@property (assign,nonatomic) double timeStampPullingDownTriggeredNetworkFetch;                    //@synthesize timeStampPullingDownTriggeredNetworkFetch=_timeStampPullingDownTriggeredNetworkFetch - In the implementation block
@property (assign,nonatomic) char needsPullToRefreshClosureOnNetworkFinishedLoading;              //@synthesize needsPullToRefreshClosureOnNetworkFinishedLoading=_needsPullToRefreshClosureOnNetworkFinishedLoading - In the implementation block
@property (assign,nonatomic) char isClosingPullRefreshView;                                       //@synthesize isClosingPullRefreshView=_isClosingPullRefreshView - In the implementation block
@property (assign,nonatomic) char hasPullToRefreshSessionRunning;                                 //@synthesize hasPullToRefreshSessionRunning=_hasPullToRefreshSessionRunning - In the implementation block
@property (assign,nonatomic) char disableAutoClosureForFakedPullToRefresh;                        //@synthesize disableAutoClosureForFakedPullToRefresh=_disableAutoClosureForFakedPullToRefresh - In the implementation block
@property (assign,nonatomic) char hasClosureAnimationRunning;                                     //@synthesize hasClosureAnimationRunning=_hasClosureAnimationRunning - In the implementation block
@property (nonatomic,copy) id completionBlockToRunAfterPullToRefreshClosure;                      //@synthesize completionBlockToRunAfterPullToRefreshClosure=_completionBlockToRunAfterPullToRefreshClosure - In the implementation block
@property (nonatomic,__weak,readonly) id<IGPullToRefreshProtocol> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(IGPullToRefreshView *)pullRefreshControlView;
-(void)fakePullToRefreshForFirstTimeLoading;
-(void)closePullToRefreshViewOnNetworkFinishedLoading:(/*^block*/id)arg1 ;
-(void)pullToRefreshViewDidScroll;
-(void)pullToRefreshViewDidEndScrolling;
-(void)pullToRefreshViewDidEndDragging;
-(char)hasPullToRefreshSessionRunning;
-(void)pullRefreshControlAnimationInterrupted:(id)arg1 ;
-(void)pullRefreshControlDidTriggerRefresh:(id)arg1 ;
-(float)pullToRefreshTopInset;
-(char)isClosingPullRefreshView;
-(void)setIsClosingPullRefreshView:(char)arg1 ;
-(void)setHasClosureAnimationRunning:(char)arg1 ;
-(void)setPullToRefreshTopInset:(float)arg1 ;
-(UIEdgeInsets)preferredContentInsetsWithPullToRefresh;
-(void)setHasPullToRefreshSessionRunning:(char)arg1 ;
-(void)setDisableAutoClosureForFakedPullToRefresh:(char)arg1 ;
-(id)completionBlockToRunAfterPullToRefreshClosure;
-(void)setCompletionBlockToRunAfterPullToRefreshClosure:(id)arg1 ;
-(void)closePullToRefreshViewWithPullToRefreshSessionTimedOut:(char)arg1 ;
-(double)timeStampPullingDownTriggeredNetworkFetch;
-(void)setNeedsPullToRefreshClosureOnNetworkFinishedLoading:(char)arg1 ;
-(void)closeContentInsetTopGapForPullToRefreshViewWithDuration:(double)arg1 resetCompletionBlock:(char)arg2 ;
-(void)adjustContentInsetsWithScrollViewContentOffsetY:(float)arg1 ;
-(void)updatePullRefreshControlWithScrollViewContentOffsetY:(float)arg1 ;
-(char)disableAutoClosureForFakedPullToRefresh;
-(void)setTimeStampPullingDownTriggeredNetworkFetch:(double)arg1 ;
-(void)forceHidingPullRefreshView;
-(char)needsPullToRefreshClosureOnNetworkFinishedLoading;
-(char)hasClosureAnimationRunning;
-(id<IGPullToRefreshProtocol>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

