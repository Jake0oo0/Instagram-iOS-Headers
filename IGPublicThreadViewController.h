
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectKeyboardTextViewControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGQuickCamViewControllerDelegate.h>

@protocol IGPublicThreadViewControllerDelegate;
@class IGUser, IGDirectThread, NSString, NSArray, IGPublicThreadNextThreadCell, UICollectionView, IGPublicThreadCellFactory, IGPublicThreadLayout, IGKeyboardInputManager, IGDirectKeyboardTextViewController, IGAlertBar, NSNumber, IGQuickCamViewController2;

@interface IGPublicThreadViewController : IGViewController <IGDirectKeyboardTextViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, IGQuickCamViewControllerDelegate> {

	char _nextThreadIsLoadedOnScreen;
	char _isLoadingForFirstTime;
	char _shouldScrollToBottomAfterContentSizeChange;
	char _shouldAnimateScrollingToBottom;
	char _loadingPreviousMessages;
	int _state;
	id<IGPublicThreadViewControllerDelegate> _delegate;
	IGUser* _threadViewer;
	IGDirectThread* _thread;
	NSString* _threadID;
	NSArray* _allContent;
	IGDirectThread* _nextThread;
	IGPublicThreadNextThreadCell* _nextThreadViewCell;
	UICollectionView* _collectionView;
	IGPublicThreadCellFactory* _cellFactory;
	IGPublicThreadLayout* _layout;
	IGKeyboardInputManager* _keyboardInputManager;
	IGDirectKeyboardTextViewController* _textViewController;
	IGAlertBar* _loadingAlertBar;
	NSNumber* _distanceToBottomToKeep;
	IGQuickCamViewController2* _quickCamViewController;

}

@property (assign,nonatomic) int state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGPublicThreadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                                 //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                               //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSString * threadID;                                                   //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSArray * allContent;                                                  //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) IGDirectThread * nextThread;                                           //@synthesize nextThread=_nextThread - In the implementation block
@property (nonatomic,retain) IGPublicThreadNextThreadCell * nextThreadViewCell;                     //@synthesize nextThreadViewCell=_nextThreadViewCell - In the implementation block
@property (assign,nonatomic) char nextThreadIsLoadedOnScreen;                                       //@synthesize nextThreadIsLoadedOnScreen=_nextThreadIsLoadedOnScreen - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGPublicThreadCellFactory * cellFactory;                               //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) IGPublicThreadLayout * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) IGKeyboardInputManager * keyboardInputManager;                         //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,retain) IGDirectKeyboardTextViewController * textViewController;               //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) IGAlertBar * loadingAlertBar;                                          //@synthesize loadingAlertBar=_loadingAlertBar - In the implementation block
@property (assign,nonatomic) char isLoadingForFirstTime;                                            //@synthesize isLoadingForFirstTime=_isLoadingForFirstTime - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToBottomToKeep;                                     //@synthesize distanceToBottomToKeep=_distanceToBottomToKeep - In the implementation block
@property (assign,nonatomic) char shouldScrollToBottomAfterContentSizeChange;                       //@synthesize shouldScrollToBottomAfterContentSizeChange=_shouldScrollToBottomAfterContentSizeChange - In the implementation block
@property (assign,nonatomic) char shouldAnimateScrollingToBottom;                                   //@synthesize shouldAnimateScrollingToBottom=_shouldAnimateScrollingToBottom - In the implementation block
@property (assign,nonatomic) char loadingPreviousMessages;                                          //@synthesize loadingPreviousMessages=_loadingPreviousMessages - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController2 * quickCamViewController;                    //@synthesize quickCamViewController=_quickCamViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setThreadID:(NSString *)arg1 ;
-(id)initWithThreadID:(id)arg1 ;
-(IGKeyboardInputManager *)keyboardInputManager;
-(void)scrollToBottomAnimated:(char)arg1 ;
-(char)prefersTabBarHidden;
-(NSArray *)allContent;
-(void)directContentUploadCell:(id)arg1 wantsRetryForContent:(id)arg2 ;
-(void)directContentUploadCell:(id)arg1 wantsDeleteForContent:(id)arg2 ;
-(void)setNextThreadID:(id)arg1 ;
-(void)setAllContent:(NSArray *)arg1 ;
-(void)initializeThreadComponents;
-(char)shouldShowKeyboard;
-(void)setupTextViewController;
-(IGDirectKeyboardTextViewController *)textViewController;
-(void)setKeyboardInputManager:(IGKeyboardInputManager *)arg1 ;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 showLoadingIndicator:(char)arg4 ;
-(char)isLoadingForFirstTime;
-(IGAlertBar *)loadingAlertBar;
-(void)setNextThread:(IGDirectThread *)arg1 ;
-(id)createLayout;
-(IGUser *)threadViewer;
-(void)setCellFactory:(IGPublicThreadCellFactory *)arg1 ;
-(void)setTextViewController:(IGDirectKeyboardTextViewController *)arg1 ;
-(float)nextThreadViewHeight;
-(char)nextThreadIsLoadedOnScreen;
-(IGPublicThreadNextThreadCell *)nextThreadViewCell;
-(void)updateCollectionViewLayoutWithNextThread;
-(void)replaceThreadContentWithNextThread;
-(void)setNextThreadIsLoadedOnScreen:(char)arg1 ;
-(IGDirectThread *)nextThread;
-(float)offSetYWhenScrolledToBottom;
-(IGPublicThreadCellFactory *)cellFactory;
-(void)setNextThreadViewCell:(IGPublicThreadNextThreadCell *)arg1 ;
-(void)setIsLoadingForFirstTime:(char)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 forceUpdate:(char)arg4 ;
-(void)setShouldScrollToBottomAfterContentSizeChange:(char)arg1 ;
-(void)setShouldAnimateScrollingToBottom:(char)arg1 ;
-(char)loadingPreviousMessages;
-(void)setLoadingPreviousMessages:(char)arg1 ;
-(void)updateThreadAndTitleWithThreadID:(id)arg1 ;
-(void)setDistanceToBottomToKeep:(NSNumber *)arg1 ;
-(id)currentThreadTitle;
-(void)collectionViewDidScrollFromYPosition:(float)arg1 toYPosition:(float)arg2 ;
-(NSNumber *)distanceToBottomToKeep;
-(char)shouldScrollToBottomAfterContentSizeChange;
-(char)shouldAnimateScrollingToBottom;
-(void)loadPreviousMessages;
-(void)handleSendWithSuccess:(char)arg1 andResponse:(id)arg2 ;
-(void)updateFromSend;
-(void)showQuickCam:(char)arg1 ;
-(IGQuickCamViewController2 *)quickCamViewController;
-(void)setQuickCamViewController:(IGQuickCamViewController2 *)arg1 ;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2 ;
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2 ;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1 ;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1 ;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)quickCamViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)quickCamViewControllerLibraryDidLoad:(id)arg1 ;
-(void)updateCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setLoadingAlertBar:(IGAlertBar *)arg1 ;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)updateTitle;
-(void)setDelegate:(id<IGPublicThreadViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGPublicThreadViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(IGPublicThreadLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setLayout:(IGPublicThreadLayout *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setupCollectionView;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(NSString *)threadID;
@end

