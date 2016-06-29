
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectKeyboardTextViewControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGQuickCamViewControllerDelegate.h>
#import <Instagram/IGDirectContentCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDirectContentCellTextLinkDelegate.h>
#import <Instagram/IGMediaRequestControllerDelegate.h>
#import <Instagram/IGImageViewDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGDirectViewControllerProtocol.h>

@class UICollectionView, IGCameraNavigationController, IGDirectThread, NSString, IGUser, NSArray, IGPublicThreadNextThreadCell, IGProfilePictureImageView, IGPublicThreadCellFactory, IGPublicThreadLayout, UIPanGestureRecognizer, IGPublicThreadCellManager, IGKeyboardInputManager, IGDirectKeyboardTextViewController, IGAlertBar, NSNumber, IGMediaRequestController, IGDirectFeedCoordinator, IGQuickCamViewController2, IGDirectMenuController, IGPublicThreadNuxView;

@interface IGPublicThreadViewController : IGViewController <IGDirectKeyboardTextViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, IGQuickCamViewControllerDelegate, IGDirectContentCellDelegate, UIGestureRecognizerDelegate, IGDirectContentCellTextLinkDelegate, IGMediaRequestControllerDelegate, IGImageViewDelegate, IGCameraNavigationControllerDelegate, IGDirectViewControllerProtocol> {

	char _scrollToNextThreadBottomAnimationStarted;
	char _didOwnThread;
	char _nextThreadIsLoadedOnScreen;
	char _contentSizeChangeForScrollAnimationIsReady;
	char _isLoadingForFirstTime;
	char _shouldScrollToBottomAfterContentSizeChange;
	char _shouldAnimateScrollingToBottom;
	char _loadingPreviousMessages;
	UICollectionView* _collectionView;
	IGDirectThread* _thread;
	NSString* _threadID;
	int _state;
	IGUser* _threadViewer;
	NSArray* _allContent;
	NSArray* _fadingCellIndexPath;
	IGDirectThread* _nextThread;
	NSArray* _nextThreadAllContentWithTimeStamp;
	IGPublicThreadNextThreadCell* _nextThreadViewCell;
	IGProfilePictureImageView* _nextThreadProfileView;
	IGPublicThreadCellFactory* _cellFactory;
	IGPublicThreadLayout* _layout;
	UIPanGestureRecognizer* _timestampPanRecognizer;
	IGPublicThreadCellManager* _cellManager;
	IGKeyboardInputManager* _keyboardInputManager;
	IGDirectKeyboardTextViewController* _textViewController;
	IGAlertBar* _loadingAlertBar;
	NSNumber* _distanceToBottomToKeep;
	IGMediaRequestController* _mediaRequestController;
	IGCameraNavigationController* _cameraNavigationController;
	IGDirectFeedCoordinator* _threadFeedCoordinator;
	IGQuickCamViewController2* _quickCamViewController;
	IGDirectMenuController* _menuController;
	IGPublicThreadNuxView* _nuxView;

}

@property (nonatomic,retain) IGUser * threadViewer;                                                  //@synthesize threadViewer=_threadViewer - In the implementation block
@property (assign,nonatomic) char scrollToNextThreadBottomAnimationStarted;                          //@synthesize scrollToNextThreadBottomAnimationStarted=_scrollToNextThreadBottomAnimationStarted - In the implementation block
@property (nonatomic,retain) NSArray * allContent;                                                   //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) NSArray * fadingCellIndexPath;                                          //@synthesize fadingCellIndexPath=_fadingCellIndexPath - In the implementation block
@property (assign,nonatomic) char didOwnThread;                                                      //@synthesize didOwnThread=_didOwnThread - In the implementation block
@property (nonatomic,retain) IGDirectThread * nextThread;                                            //@synthesize nextThread=_nextThread - In the implementation block
@property (nonatomic,retain) NSArray * nextThreadAllContentWithTimeStamp;                            //@synthesize nextThreadAllContentWithTimeStamp=_nextThreadAllContentWithTimeStamp - In the implementation block
@property (nonatomic,retain) IGPublicThreadNextThreadCell * nextThreadViewCell;                      //@synthesize nextThreadViewCell=_nextThreadViewCell - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * nextThreadProfileView;                      //@synthesize nextThreadProfileView=_nextThreadProfileView - In the implementation block
@property (assign,nonatomic) char nextThreadIsLoadedOnScreen;                                        //@synthesize nextThreadIsLoadedOnScreen=_nextThreadIsLoadedOnScreen - In the implementation block
@property (assign,nonatomic) char contentSizeChangeForScrollAnimationIsReady;                        //@synthesize contentSizeChangeForScrollAnimationIsReady=_contentSizeChangeForScrollAnimationIsReady - In the implementation block
@property (nonatomic,retain) IGPublicThreadCellFactory * cellFactory;                                //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) IGPublicThreadLayout * layout;                                          //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * timestampPanRecognizer;                        //@synthesize timestampPanRecognizer=_timestampPanRecognizer - In the implementation block
@property (nonatomic,retain) IGPublicThreadCellManager * cellManager;                                //@synthesize cellManager=_cellManager - In the implementation block
@property (nonatomic,retain) IGKeyboardInputManager * keyboardInputManager;                          //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,retain) IGDirectKeyboardTextViewController * textViewController;                //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) IGAlertBar * loadingAlertBar;                                           //@synthesize loadingAlertBar=_loadingAlertBar - In the implementation block
@property (assign,nonatomic) char isLoadingForFirstTime;                                             //@synthesize isLoadingForFirstTime=_isLoadingForFirstTime - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToBottomToKeep;                                      //@synthesize distanceToBottomToKeep=_distanceToBottomToKeep - In the implementation block
@property (assign,nonatomic) char shouldScrollToBottomAfterContentSizeChange;                        //@synthesize shouldScrollToBottomAfterContentSizeChange=_shouldScrollToBottomAfterContentSizeChange - In the implementation block
@property (assign,nonatomic) char shouldAnimateScrollingToBottom;                                    //@synthesize shouldAnimateScrollingToBottom=_shouldAnimateScrollingToBottom - In the implementation block
@property (assign,nonatomic) char loadingPreviousMessages;                                           //@synthesize loadingPreviousMessages=_loadingPreviousMessages - In the implementation block
@property (nonatomic,retain) IGMediaRequestController * mediaRequestController;                      //@synthesize mediaRequestController=_mediaRequestController - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraNavigationController;              //@synthesize cameraNavigationController=_cameraNavigationController - In the implementation block
@property (nonatomic,retain) IGDirectFeedCoordinator * threadFeedCoordinator;                        //@synthesize threadFeedCoordinator=_threadFeedCoordinator - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController2 * quickCamViewController;                     //@synthesize quickCamViewController=_quickCamViewController - In the implementation block
@property (nonatomic,retain) IGDirectMenuController * menuController;                                //@synthesize menuController=_menuController - In the implementation block
@property (nonatomic,retain) IGPublicThreadNuxView * nuxView;                                        //@synthesize nuxView=_nuxView - In the implementation block
@property (assign,nonatomic) int state;                                                              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                                //@synthesize thread=_thread - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID;                                             //@synthesize threadID=_threadID - In the implementation block
-(id)analyticsModule;
-(IGPublicThreadNuxView *)nuxView;
-(void)setNuxView:(IGPublicThreadNuxView *)arg1 ;
-(IGKeyboardInputManager *)keyboardInputManager;
-(void)scrollToBottomAnimated:(char)arg1 ;
-(NSArray *)allContent;
-(id)initWithThreadID:(id)arg1 didOwnThread:(char)arg2 ;
-(void)threadUpdated:(id)arg1 ;
-(void)directContentUploadCell:(id)arg1 wantsRetryForContent:(id)arg2 ;
-(void)directContentUploadCell:(id)arg1 wantsDeleteForContent:(id)arg2 ;
-(void)contentCell:(id)arg1 profilePictureWasTappedWithUser:(id)arg2 ;
-(char)contentCellShouldLongPress:(id)arg1 ;
-(void)contentCellDidLongPress:(id)arg1 ;
-(void)contentCellWantsToPostToFeed:(id)arg1 ;
-(void)contentCellWantsToShareToOtherThread:(id)arg1 ;
-(void)setAllContent:(NSArray *)arg1 ;
-(void)initializeThreadComponents;
-(char)didOwnThread;
-(id)createNuxView;
-(void)setCellManager:(IGPublicThreadCellManager *)arg1 ;
-(char)shouldShowKeyboard;
-(void)setupTextViewController;
-(IGDirectKeyboardTextViewController *)textViewController;
-(void)setKeyboardInputManager:(IGKeyboardInputManager *)arg1 ;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 showLoadingIndicator:(char)arg4 ownedThread:(char)arg5 ;
-(char)isLoadingForFirstTime;
-(IGAlertBar *)loadingAlertBar;
-(void)setScrollToNextThreadBottomAnimationStarted:(char)arg1 ;
-(void)sendSeenTimestampForContent:(id)arg1 ;
-(void)updateNuxIfNeed;
-(void)updateThreadAndTitleWithThreadID:(id)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 forceUpdate:(char)arg4 ;
-(void)setShouldScrollToBottomAfterContentSizeChange:(char)arg1 ;
-(char)canSeeLatestContent;
-(float)offSetYWhenScrolledToBottom;
-(char)shouldShowWelcomeNux;
-(void)setNextThread:(IGDirectThread *)arg1 ;
-(void)updateNextThreadWithThread:(id)arg1 ;
-(id)createLayout;
-(IGUser *)threadViewer;
-(IGMediaRequestController *)mediaRequestController;
-(void)setCellFactory:(IGPublicThreadCellFactory *)arg1 ;
-(id)createTimestampPanRecognizer;
-(void)setTimestampPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)timestampPanRecognizer;
-(void)setTextViewController:(IGDirectKeyboardTextViewController *)arg1 ;
-(void)invalideCollectionviewLayoutContentSize;
-(IGDirectThread *)nextThread;
-(void)onTimestampPan:(id)arg1 ;
-(void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(IGPublicThreadNextThreadCell *)nextThreadViewCell;
-(float)nextThreadCellHeight;
-(char)nextThreadIsLoadedOnScreen;
-(void)fadeCurrentThreadContent:(char)arg1 scrollHeight:(float)arg2 ;
-(char)scrollToNextThreadBottomAnimationStarted;
-(void)scrollToBottomAnimatedIfPossible;
-(char)shouldScrollView:(id)arg1 scrollToNextThread:(CGPoint)arg2 ;
-(char)scrollableToNextThread;
-(void)updateCollectionViewLayoutWithNextThread;
-(char)contentSizeChangeForScrollAnimationIsReady;
-(void)setContentSizeChangeForScrollAnimationIsReady:(char)arg1 ;
-(void)updateThreadContentWithOldNextThreadContent;
-(void)setNextThreadIsLoadedOnScreen:(char)arg1 ;
-(void)setNextThreadViewCell:(IGPublicThreadNextThreadCell *)arg1 ;
-(void)recordVisibleCellAttributes;
-(NSArray *)nextThreadAllContentWithTimeStamp;
-(void)setDistanceToBottomToKeep:(NSNumber *)arg1 ;
-(void)setFadingCellIndexPath:(NSArray *)arg1 ;
-(NSArray *)fadingCellIndexPath;
-(IGPublicThreadCellManager *)cellManager;
-(IGPublicThreadCellFactory *)cellFactory;
-(IGProfilePictureImageView *)nextThreadProfileView;
-(void)setNextThreadProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setIsLoadingForFirstTime:(char)arg1 ;
-(void)setShouldAnimateScrollingToBottom:(char)arg1 ;
-(char)loadingPreviousMessages;
-(void)setLoadingPreviousMessages:(char)arg1 ;
-(void)setDidOwnThread:(char)arg1 ;
-(/*^block*/id)loadingFailureHandlerBlock;
-(void)updateNextThread;
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
-(IGCameraNavigationController *)cameraNavigationController;
-(IGDirectFeedCoordinator *)threadFeedCoordinator;
-(void)postToFeed:(id)arg1 ;
-(void)share:(id)arg1 ;
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
-(void)keyboardTextViewController:(id)arg1 textViewDidChange:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)quickCamViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)quickCamViewControllerLibraryDidLoad:(id)arg1 ;
-(void)mediaRequestControllerSucceedLoadingImage:(id)arg1 forUrl:(id)arg2 ;
-(void)mediaRequestControllerFailedLoadingImageForUrl:(id)arg1 ;
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareNextThreadTransitionView:(id)arg1 ;
-(void)updateCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(void)addTypingCell;
-(void)removeTypingCell;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setNextThreadAllContentWithTimeStamp:(NSArray *)arg1 ;
-(void)setLoadingAlertBar:(IGAlertBar *)arg1 ;
-(void)setMediaRequestController:(IGMediaRequestController *)arg1 ;
-(void)setCameraNavigationController:(IGCameraNavigationController *)arg1 ;
-(void)setThreadFeedCoordinator:(IGDirectFeedCoordinator *)arg1 ;
-(void)setMenuController:(IGDirectMenuController *)arg1 ;
-(void)contentCell:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(char)prefersTabBarHidden;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(IGDirectMenuController *)menuController;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)state;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(IGPublicThreadLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
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

