
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectKeyboardTextViewControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGQuickCamViewControllerDelegate.h>
#import <Instagram/IGDirectContentCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDirectContentCellTextLinkDelegate.h>
#import <Instagram/IGDirectViewControllerProtocol.h>

@protocol IGPublicThreadViewControllerDelegate;
@class UICollectionView, IGDirectThread, IGUser, NSString, NSArray, NSMutableDictionary, IGPublicThreadNextThreadCell, IGPublicThreadCellFactory, IGPublicThreadLayout, UIPanGestureRecognizer, IGKeyboardInputManager, IGDirectKeyboardTextViewController, IGAlertBar, NSNumber, IGQuickCamViewController2, IGDirectMenuController;

@interface IGPublicThreadViewController : IGViewController <IGDirectKeyboardTextViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, IGQuickCamViewControllerDelegate, IGDirectContentCellDelegate, UIGestureRecognizerDelegate, IGDirectContentCellTextLinkDelegate, IGDirectViewControllerProtocol> {

	char _didOwnThread;
	char _nextThreadIsLoadedOnScreen;
	char _isLoadingForFirstTime;
	char _shouldScrollToBottomAfterContentSizeChange;
	char _shouldAnimateScrollingToBottom;
	char _loadingPreviousMessages;
	UICollectionView* _collectionView;
	IGDirectThread* _thread;
	int _state;
	id<IGPublicThreadViewControllerDelegate> _delegate;
	IGUser* _threadViewer;
	NSString* _threadID;
	NSArray* _allContent;
	NSMutableDictionary* _fadingCellIndexPathMapping;
	IGDirectThread* _nextThread;
	NSArray* _nextThreadAllContentWithTimeStamp;
	IGPublicThreadNextThreadCell* _nextThreadViewCell;
	IGPublicThreadCellFactory* _cellFactory;
	IGPublicThreadLayout* _layout;
	UIPanGestureRecognizer* _timestampPanRecognizer;
	IGKeyboardInputManager* _keyboardInputManager;
	IGDirectKeyboardTextViewController* _textViewController;
	IGAlertBar* _loadingAlertBar;
	NSNumber* _distanceToBottomToKeep;
	IGQuickCamViewController2* _quickCamViewController;
	IGDirectMenuController* _menuController;

}

@property (assign,nonatomic) int state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGPublicThreadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                                 //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSString * threadID;                                                   //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) NSArray * allContent;                                                  //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fadingCellIndexPathMapping;                      //@synthesize fadingCellIndexPathMapping=_fadingCellIndexPathMapping - In the implementation block
@property (assign,nonatomic) char didOwnThread;                                                     //@synthesize didOwnThread=_didOwnThread - In the implementation block
@property (nonatomic,retain) IGDirectThread * nextThread;                                           //@synthesize nextThread=_nextThread - In the implementation block
@property (nonatomic,retain) NSArray * nextThreadAllContentWithTimeStamp;                           //@synthesize nextThreadAllContentWithTimeStamp=_nextThreadAllContentWithTimeStamp - In the implementation block
@property (nonatomic,retain) IGPublicThreadNextThreadCell * nextThreadViewCell;                     //@synthesize nextThreadViewCell=_nextThreadViewCell - In the implementation block
@property (assign,nonatomic) char nextThreadIsLoadedOnScreen;                                       //@synthesize nextThreadIsLoadedOnScreen=_nextThreadIsLoadedOnScreen - In the implementation block
@property (nonatomic,retain) IGPublicThreadCellFactory * cellFactory;                               //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) IGPublicThreadLayout * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * timestampPanRecognizer;                       //@synthesize timestampPanRecognizer=_timestampPanRecognizer - In the implementation block
@property (nonatomic,retain) IGKeyboardInputManager * keyboardInputManager;                         //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,retain) IGDirectKeyboardTextViewController * textViewController;               //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) IGAlertBar * loadingAlertBar;                                          //@synthesize loadingAlertBar=_loadingAlertBar - In the implementation block
@property (assign,nonatomic) char isLoadingForFirstTime;                                            //@synthesize isLoadingForFirstTime=_isLoadingForFirstTime - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToBottomToKeep;                                     //@synthesize distanceToBottomToKeep=_distanceToBottomToKeep - In the implementation block
@property (assign,nonatomic) char shouldScrollToBottomAfterContentSizeChange;                       //@synthesize shouldScrollToBottomAfterContentSizeChange=_shouldScrollToBottomAfterContentSizeChange - In the implementation block
@property (assign,nonatomic) char shouldAnimateScrollingToBottom;                                   //@synthesize shouldAnimateScrollingToBottom=_shouldAnimateScrollingToBottom - In the implementation block
@property (assign,nonatomic) char loadingPreviousMessages;                                          //@synthesize loadingPreviousMessages=_loadingPreviousMessages - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController2 * quickCamViewController;                    //@synthesize quickCamViewController=_quickCamViewController - In the implementation block
@property (nonatomic,retain) IGDirectMenuController * menuController;                               //@synthesize menuController=_menuController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                               //@synthesize thread=_thread - In the implementation block
-(void)scrollToBottomAnimated:(char)arg1 ;
-(id)analyticsModule;
-(IGKeyboardInputManager *)keyboardInputManager;
-(char)prefersTabBarHidden;
-(id)initWithThreadID:(id)arg1 didOwnThread:(char)arg2 ;
-(NSArray *)allContent;
-(void)setThreadID:(NSString *)arg1 ;
-(void)contentCell:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)directContentUploadCell:(id)arg1 wantsRetryForContent:(id)arg2 ;
-(void)directContentUploadCell:(id)arg1 wantsDeleteForContent:(id)arg2 ;
-(void)contentCell:(id)arg1 profilePictureWasTappedWithUser:(id)arg2 ;
-(char)contentCellShouldLongPress:(id)arg1 ;
-(void)contentCellDidLongPress:(id)arg1 ;
-(void)setNextThreadID:(id)arg1 ;
-(void)setAllContent:(NSArray *)arg1 ;
-(void)setDidOwnThread:(char)arg1 ;
-(void)initializeThreadComponents;
-(char)shouldShowKeyboard;
-(void)setupTextViewController;
-(IGDirectKeyboardTextViewController *)textViewController;
-(void)setKeyboardInputManager:(IGKeyboardInputManager *)arg1 ;
-(char)didOwnThread;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 showLoadingIndicator:(char)arg4 ownedThread:(char)arg5 ;
-(char)isLoadingForFirstTime;
-(IGAlertBar *)loadingAlertBar;
-(void)setNextThread:(IGDirectThread *)arg1 ;
-(id)createLayout;
-(IGUser *)threadViewer;
-(void)setCellFactory:(IGPublicThreadCellFactory *)arg1 ;
-(id)createTimestampPanRecognizer;
-(void)setTimestampPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)timestampPanRecognizer;
-(void)setTextViewController:(IGDirectKeyboardTextViewController *)arg1 ;
-(IGDirectThread *)nextThread;
-(void)invalideCollectionviewLayoutContentSize;
-(void)onTimestampPan:(id)arg1 ;
-(void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(float)nextThreadViewHeight;
-(char)nextThreadIsLoadedOnScreen;
-(IGPublicThreadNextThreadCell *)nextThreadViewCell;
-(void)fadeCurrentThreadContentIfPossible;
-(void)updateCollectionViewLayoutWithNextThread;
-(void)replaceThreadContentWithNextThread;
-(void)setNextThreadIsLoadedOnScreen:(char)arg1 ;
-(void)recordVisibleCellAttributes;
-(NSArray *)nextThreadAllContentWithTimeStamp;
-(void)setDistanceToBottomToKeep:(NSNumber *)arg1 ;
-(void)setFadingCellIndexPathMapping:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)fadingCellIndexPathMapping;
-(float)offSetYWhenScrolledToBottom;
-(IGPublicThreadCellFactory *)cellFactory;
-(void)setNextThreadViewCell:(IGPublicThreadNextThreadCell *)arg1 ;
-(void)setIsLoadingForFirstTime:(char)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 forceUpdate:(char)arg4 ;
-(void)setShouldScrollToBottomAfterContentSizeChange:(char)arg1 ;
-(void)setShouldAnimateScrollingToBottom:(char)arg1 ;
-(char)loadingPreviousMessages;
-(void)setLoadingPreviousMessages:(char)arg1 ;
-(/*^block*/id)loadingFailureHandlerBlock;
-(void)updateThreadAndTitleWithThreadID:(id)arg1 ;
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
-(void)unsend:(id)arg1 ;
-(void)unlike:(id)arg1 ;
-(void)flag:(id)arg1 ;
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
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(void)addTypingCell;
-(void)removeTypingCell;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setNextThreadAllContentWithTimeStamp:(NSArray *)arg1 ;
-(void)setLoadingAlertBar:(IGAlertBar *)arg1 ;
-(void)setMenuController:(IGDirectMenuController *)arg1 ;
-(IGDirectMenuController *)menuController;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)setDelegate:(id<IGPublicThreadViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGPublicThreadViewControllerDelegate>)delegate;
-(int)state;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(IGPublicThreadLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)updateLayout;
-(void)copy:(id)arg1 ;
-(void)setLayout:(IGPublicThreadLayout *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setupCollectionView;
-(void)save:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(NSString *)threadID;
@end
