
#import <UIKit/UIViewController.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGEventServiceCacheDelegate.h>
#import <Instagram/IGEventViewerMediaPreloaderCompletionDelegate.h>
#import <Instagram/IGEventViewerSoundStateListenerDelegate.h>
#import <Instagram/IGTimerProxyObjectType.h>

@class IGEventViewerMediaPreloader, UIView, IGEventViewerLoadingView, IGEventViewerSoundBadge, IGEventService, NSArray, IGEventViewerViewController, IGEventViewerSoundEffectPlayer, IGEventViewerSoundStateListener, NSTimer, IGTimerProxy, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerPresenterViewController : UIViewController <IGEventViewerViewControllerDelegate, IGEventServiceNetworkDelegate, IGEventServiceCacheDelegate, IGEventViewerMediaPreloaderCompletionDelegate, IGEventViewerSoundStateListenerDelegate, IGTimerProxyObjectType> {

	char _shouldHideStatusBar;
	IGEventViewerMediaPreloader* _mediaPreloader;
	UIView* _snapshotView;
	UIView* _dimmedView;
	IGEventViewerLoadingView* _loadingView;
	IGEventViewerSoundBadge* _soundBadge;
	IGEventService* _eventService;
	NSArray* _initialPosts;
	IGEventViewerViewController* _eventViewerController;
	IGEventViewerSoundEffectPlayer* _player;
	IGEventViewerSoundStateListener* _soundStateListener;
	NSTimer* _timer;
	IGTimerProxy* _timerProxy;
	IGEventViewerAnalyticsLogger* _logger;

}

@property (nonatomic,__weak,readonly) UIView * snapshotView;                                    //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * dimmedView;                                      //@synthesize dimmedView=_dimmedView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerLoadingView * loadingView;                   //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerSoundBadge * soundBadge;                     //@synthesize soundBadge=_soundBadge - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                   //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPreloader * mediaPreloader;                    //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,copy) NSArray * initialPosts;                                              //@synthesize initialPosts=_initialPosts - In the implementation block
@property (nonatomic,retain) IGEventViewerViewController * eventViewerController;               //@synthesize eventViewerController=_eventViewerController - In the implementation block
@property (assign,nonatomic) char shouldHideStatusBar;                                          //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (nonatomic,retain) IGEventViewerSoundEffectPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) IGEventViewerSoundStateListener * soundStateListener;              //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) IGTimerProxy * timerProxy;                                         //@synthesize timerProxy=_timerProxy - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                           //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventId:(id)arg1 ;
-(void)eventService:(id)arg1 didLoadCachedPosts:(id)arg2 ;
-(void)eventServiceFailedToLoadFromCache:(id)arg1 ;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)eventMediaPreloaderDidFinishLoading:(id)arg1 ;
-(void)setTimerProxy:(IGTimerProxy *)arg1 ;
-(IGTimerProxy *)timerProxy;
-(void)didFireTimer:(id)arg1 ;
-(id)initWithEventService:(id)arg1 ;
-(id)initWithEventService:(id)arg1 soundEffectPlayer:(id)arg2 soundStateListener:(id)arg3 logger:(id)arg4 ;
-(void)didReceiveStatusBarWillChangeFrameNotification:(id)arg1 ;
-(void)setupSnapshotView;
-(void)setupLoadingView;
-(void)setupSoundBadge;
-(IGEventViewerSoundBadge *)soundBadge;
-(void)didReceiveTapGestureRecognizer:(id)arg1 ;
-(IGEventViewerSoundStateListener *)soundStateListener;
-(void)requestInitialPosts;
-(char)shouldHideStatusBar;
-(UIView *)dimmedView;
-(IGEventViewerViewController *)eventViewerController;
-(IGEventService *)eventService;
-(void)setInitialPosts:(NSArray *)arg1 ;
-(IGEventViewerMediaPreloader *)mediaPreloader;
-(void)presentEventViewer;
-(void)loadPosts:(id)arg1 ;
-(void)prepareToDismiss;
-(NSArray *)initialPosts;
-(void)setSoundStateListener:(IGEventViewerSoundStateListener *)arg1 ;
-(void)setEventViewerController:(IGEventViewerViewController *)arg1 ;
-(void)setShouldHideStatusBar:(char)arg1 ;
-(void)dismissEventViewer;
-(void)didDismissEventViewerViewController:(id)arg1 ;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)stopTimer;
-(void)setPlayer:(IGEventViewerSoundEffectPlayer *)arg1 ;
-(IGEventViewerSoundEffectPlayer *)player;
-(void)dealloc;
-(UIView *)snapshotView;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setupSubviews;
-(IGEventViewerLoadingView *)loadingView;
@end
