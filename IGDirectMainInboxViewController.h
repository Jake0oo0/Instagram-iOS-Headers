
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingInboxDelegate.h>
#import <Instagram/IGDirectInboxCellDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGDirectThreadViewControllerDelegate.h>

@class NSOrderedSet, IGPlainTableView, NSString, UIBarButtonItem, IGDirectPendingRequestsHeaderView, NSArray, IGPullToRefreshViewManager, IGGenericMegaphone, IGGenericMegaphoneView, IGDirectEmptyInboxView;

@interface IGDirectMainInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingInboxDelegate, IGDirectInboxCellDelegate, IGGenericMegaphoneViewDelegate, IGPullToRefreshProtocol, IGDirectThreadViewControllerDelegate> {

	char _isFetchingData;
	char _loadingPreviousThreads;
	char _hasLoadedOnce;
	char _needsRefreshForThreadUpdateNotification;
	NSOrderedSet* _threads;
	IGPlainTableView* _tableView;
	NSString* _nextMaxID;
	UIBarButtonItem* _createMessageButton;
	IGDirectPendingRequestsHeaderView* _pendingRequestsHeader;
	NSString* _countedAt;
	int _unseenShareCount;
	NSArray* _pendingRequestUsers;
	int _pendingRequestCount;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGGenericMegaphone* _megaphone;
	IGGenericMegaphoneView* _megaphoneView;
	IGDirectEmptyInboxView* _emptyInboxView;
	int _unseenPendingRequestCount;

}

@property (nonatomic,retain) NSOrderedSet * threads;                                                 //@synthesize threads=_threads - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char isFetchingData;                                                    //@synthesize isFetchingData=_isFetchingData - In the implementation block
@property (nonatomic,copy) NSString * nextMaxID;                                                     //@synthesize nextMaxID=_nextMaxID - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                            //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * createMessageButton;                                  //@synthesize createMessageButton=_createMessageButton - In the implementation block
@property (nonatomic,retain) IGDirectPendingRequestsHeaderView * pendingRequestsHeader;              //@synthesize pendingRequestsHeader=_pendingRequestsHeader - In the implementation block
@property (nonatomic,copy) NSString * countedAt;                                                     //@synthesize countedAt=_countedAt - In the implementation block
@property (assign,nonatomic) int unseenShareCount;                                                   //@synthesize unseenShareCount=_unseenShareCount - In the implementation block
@property (nonatomic,retain) NSArray * pendingRequestUsers;                                          //@synthesize pendingRequestUsers=_pendingRequestUsers - In the implementation block
@property (assign,nonatomic) int pendingRequestCount;                                                //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;                  //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                         //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                                 //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (assign,nonatomic) char hasLoadedOnce;                                                     //@synthesize hasLoadedOnce=_hasLoadedOnce - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                                //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (assign,nonatomic) int unseenPendingRequestCount;                                          //@synthesize unseenPendingRequestCount=_unseenPendingRequestCount - In the implementation block
@property (assign,nonatomic) char needsRefreshForThreadUpdateNotification;                           //@synthesize needsRefreshForThreadUpdateNotification=_needsRefreshForThreadUpdateNotification - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)inboxCellWantsToPan:(id)arg1 ;
-(id)cachedThreads;
-(void)refreshDataWithClearCount:(char)arg1 ;
-(void)inboxUpdateNotificationReceivedWithMegaphone:(id)arg1 ;
-(void)inboxUpdateNotificationReceived:(id)arg1 ;
-(void)threadUpdateNotificationReceived;
-(void)unseenShareCountUpdated:(id)arg1 ;
-(void)setUnseenShareCount:(int)arg1 ;
-(void)setNeedsRefreshForThreadUpdateNotification:(char)arg1 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)updateNux;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(int)unseenShareCount;
-(void)refreshDataWithClearCount:(char)arg1 withNextMaxID:(id)arg2 clearOperationCompletion:(/*^block*/id)arg3 fetchCompletion:(/*^block*/id)arg4 ;
-(void)sendNewDirect;
-(void)setCreateMessageButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)createMessageButton;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(void)onAppForeground:(id)arg1 ;
-(char)isFetchingData;
-(char)needsRefreshForThreadUpdateNotification;
-(int)unseenPendingRequestCount;
-(void)setUnseenPendingRequestCount:(int)arg1 ;
-(void)pushToThread:(id)arg1 animated:(char)arg2 ;
-(int)pendingRequestCount;
-(void)setIsFetchingData:(char)arg1 ;
-(void)setPendingRequestUsers:(NSArray *)arg1 ;
-(void)setPendingRequestCount:(int)arg1 ;
-(void)setNextMaxID:(NSString *)arg1 ;
-(void)setHasLoadedOnce:(char)arg1 ;
-(char)loadingPreviousThreads;
-(NSString *)nextMaxID;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(void)replaceThread:(id)arg1 withThread:(id)arg2 ;
-(float)cellProfilePictureVerticalPadding;
-(char)shouldShowPendingInbox;
-(char)shouldShowEmptyInbox;
-(void)configureCellForCurrentPendingRequests:(id)arg1 ;
-(id)tableView:(id)arg1 threadCellForInboxPath:(id)arg2 ;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(NSArray *)pendingRequestUsers;
-(void)inboxCell:(id)arg1 wantsDeleteForThread:(id)arg2 ;
-(void)inboxCell:(id)arg1 wantsUnmuteForThread:(id)arg2 ;
-(void)inboxCell:(id)arg1 wantsMuteForThread:(id)arg2 ;
-(void)pushToPendingInboxAnimated:(char)arg1 ;
-(char)findAndCloseActionCellsExcludingCell:(id)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 ;
-(void)loadMoreThreads;
-(char)isFirstDelete;
-(void)performHideForThread:(id)arg1 ;
-(void)hideThreadLocally:(id)arg1 ;
-(void)threadUpdated:(id)arg1 ;
-(char)hasLoadedOnce;
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(char)arg3 remainingInviter:(id)arg4 ;
-(void)pendingInboxDidClear:(id)arg1 ;
-(void)pendingInboxDidActionThreads:(id)arg1 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3 ;
-(unsigned)inboxSubscriptionStatus;
-(id)endpointPath;
-(id)threadWithThreadId:(id)arg1 ;
-(IGDirectPendingRequestsHeaderView *)pendingRequestsHeader;
-(void)setPendingRequestsHeader:(IGDirectPendingRequestsHeaderView *)arg1 ;
-(NSString *)countedAt;
-(void)setCountedAt:(NSString *)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(NSOrderedSet *)threads;
@end

