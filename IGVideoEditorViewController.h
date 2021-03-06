
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGFilterCollectionControllerDelegate.h>
#import <Instagram/IGClipCollectionControllerDelegate.h>
#import <Instagram/IGVideoPlaybackViewDelegate.h>
#import <Instagram/IGEditorTabBarDelegate.h>
#import <Instagram/IGVideoScrubberViewDelegate.h>
#import <Instagram/IGFilterControlViewDelegate.h>
#import <Instagram/IGOverlayNuxControllerDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGVideoTrimControllerDelegate.h>
#import <Instagram/IGVideoTrimConfirmationDelegate.h>
#import <Instagram/IGCameraViewControllerProtocol.h>
#import <Instagram/IGShareViewControllerDelegate.h>

@protocol IGEditorTabView;
@class IGVideoInfo, IGVideoComposition, IGVideoPlaybackView, IGVideoPlayButton, IGMediaMetadata, NSMutableDictionary, UIBarButtonItem, UIImageView, UIView, UILabel, IGEditorTabBar, IGRearrangeOverlayView, UICollectionView, IGFilterCollectionController, IGFilterControlView, IGClipCollectionController, IGVideoTrimViewController, IGSegmentedProgressView, IGVideoScrubberView, IGOverlayNuxController, NSString, IGCameraNavigationController;

@interface IGVideoEditorViewController : IGViewController <IGFilterCollectionControllerDelegate, IGClipCollectionControllerDelegate, IGVideoPlaybackViewDelegate, IGEditorTabBarDelegate, IGVideoScrubberViewDelegate, IGFilterControlViewDelegate, IGOverlayNuxControllerDelegate, IGCameraNavigationControllerDelegate, IGVideoTrimControllerDelegate, IGVideoTrimConfirmationDelegate, IGCameraViewControllerProtocol, IGShareViewControllerDelegate> {

	char _needsVideoUpdate;
	char _trimAnimationAlreadyShown;
	char _isClipTrimMode;
	char _didReorderTray;
	char _videoIsReady;
	char _viewLoaded;
	char _hasCancelledShareVC;
	IGVideoInfo* _videoInfo;
	IGVideoComposition* _workingVideoComposition;
	IGVideoPlaybackView* _playerView;
	IGVideoPlayButton* _playButton;
	IGMediaMetadata* _mediaMetadata;
	NSMutableDictionary* _adjustedFilterStrengthValues;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UIImageView* _cinemaButton;
	UIImageView* _audioMuteButton;
	UIView*<IGEditorTabView> _coverFrameButton;
	UIView*<IGEditorTabView> _trimmerButton;
	UIView*<IGEditorTabView> _multiClipButton;
	UIView*<IGEditorTabView> _filtersButton;
	UIView* _audioMuteOverlayView;
	UILabel* _audioMutedLabel;
	UILabel* _audioOnLabel;
	int _audioMuteToggleTick;
	float _originalVideoLength;
	float _maxVideoDuration;
	UIView* _toolsContainerView;
	IGEditorTabBar* _toolsTabBar;
	IGEditorTabBar* _toggleToolsTabBar;
	UIView* _toolView;
	IGRearrangeOverlayView* _rearrangeFilterOverlayView;
	IGRearrangeOverlayView* _rearrangeClipOverlayView;
	UICollectionView* _filterCollectionView;
	IGFilterCollectionController* _filterTrayController;
	IGFilterControlView* _filterControlView;
	IGClipCollectionController* _clipTrayController;
	IGVideoTrimViewController* _videoTrimViewController;
	IGSegmentedProgressView* _trimProgressView;
	IGVideoScrubberView* _scrubberView;
	IGOverlayNuxController* _overlayNuxController;
	IGClipCollectionController* _clipCollectionController;
	int _videoOrigin;
	CGSize _videoDisplaySize;
	SCD_Struct_IG53 _keyTime;
	SCD_Struct_IG68 _previousTrimmedRange;

}

@property (assign,nonatomic) CGSize videoDisplaySize;                                            //@synthesize videoDisplaySize=_videoDisplaySize - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                                            //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) IGVideoComposition * workingVideoComposition;                       //@synthesize workingVideoComposition=_workingVideoComposition - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) IGVideoPlayButton * playButton;                                     //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                    //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adjustedFilterStrengthValues;                 //@synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImageView * cinemaButton;                                         //@synthesize cinemaButton=_cinemaButton - In the implementation block
@property (nonatomic,retain) UIImageView * audioMuteButton;                                      //@synthesize audioMuteButton=_audioMuteButton - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> coverFrameButton;                          //@synthesize coverFrameButton=_coverFrameButton - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> trimmerButton;                             //@synthesize trimmerButton=_trimmerButton - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> multiClipButton;                           //@synthesize multiClipButton=_multiClipButton - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> filtersButton;                             //@synthesize filtersButton=_filtersButton - In the implementation block
@property (nonatomic,retain) UIView * audioMuteOverlayView;                                      //@synthesize audioMuteOverlayView=_audioMuteOverlayView - In the implementation block
@property (nonatomic,retain) UILabel * audioMutedLabel;                                          //@synthesize audioMutedLabel=_audioMutedLabel - In the implementation block
@property (nonatomic,retain) UILabel * audioOnLabel;                                             //@synthesize audioOnLabel=_audioOnLabel - In the implementation block
@property (assign,nonatomic) int audioMuteToggleTick;                                            //@synthesize audioMuteToggleTick=_audioMuteToggleTick - In the implementation block
@property (assign,nonatomic) float originalVideoLength;                                          //@synthesize originalVideoLength=_originalVideoLength - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                             //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (nonatomic,retain) UIView * toolsContainerView;                                        //@synthesize toolsContainerView=_toolsContainerView - In the implementation block
@property (nonatomic,retain) IGEditorTabBar * toolsTabBar;                                       //@synthesize toolsTabBar=_toolsTabBar - In the implementation block
@property (nonatomic,retain) IGEditorTabBar * toggleToolsTabBar;                                 //@synthesize toggleToolsTabBar=_toggleToolsTabBar - In the implementation block
@property (nonatomic,retain) UIView * toolView;                                                  //@synthesize toolView=_toolView - In the implementation block
@property (nonatomic,retain) IGRearrangeOverlayView * rearrangeFilterOverlayView;                //@synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView - In the implementation block
@property (nonatomic,retain) IGRearrangeOverlayView * rearrangeClipOverlayView;                  //@synthesize rearrangeClipOverlayView=_rearrangeClipOverlayView - In the implementation block
@property (nonatomic,retain) UICollectionView * filterCollectionView;                            //@synthesize filterCollectionView=_filterCollectionView - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;                //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (nonatomic,retain) IGFilterControlView * filterControlView;                            //@synthesize filterControlView=_filterControlView - In the implementation block
@property (nonatomic,retain) IGClipCollectionController * clipTrayController;                    //@synthesize clipTrayController=_clipTrayController - In the implementation block
@property (nonatomic,retain) IGVideoTrimViewController * videoTrimViewController;                //@synthesize videoTrimViewController=_videoTrimViewController - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG68 previousTrimmedRange;                               //@synthesize previousTrimmedRange=_previousTrimmedRange - In the implementation block
@property (nonatomic,retain) IGSegmentedProgressView * trimProgressView;                         //@synthesize trimProgressView=_trimProgressView - In the implementation block
@property (nonatomic,retain) IGVideoScrubberView * scrubberView;                                 //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) IGOverlayNuxController * overlayNuxController;                      //@synthesize overlayNuxController=_overlayNuxController - In the implementation block
@property (assign,nonatomic) char needsVideoUpdate;                                              //@synthesize needsVideoUpdate=_needsVideoUpdate - In the implementation block
@property (assign,nonatomic) char trimAnimationAlreadyShown;                                     //@synthesize trimAnimationAlreadyShown=_trimAnimationAlreadyShown - In the implementation block
@property (assign,nonatomic) char isClipTrimMode;                                                //@synthesize isClipTrimMode=_isClipTrimMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG53 keyTime;                                            //@synthesize keyTime=_keyTime - In the implementation block
@property (assign,nonatomic) char didReorderTray;                                                //@synthesize didReorderTray=_didReorderTray - In the implementation block
@property (nonatomic,retain) IGClipCollectionController * clipCollectionController;              //@synthesize clipCollectionController=_clipCollectionController - In the implementation block
@property (assign,nonatomic) char videoIsReady;                                                  //@synthesize videoIsReady=_videoIsReady - In the implementation block
@property (assign,nonatomic) char viewLoaded;                                                    //@synthesize viewLoaded=_viewLoaded - In the implementation block
@property (assign,nonatomic) int videoOrigin;                                                    //@synthesize videoOrigin=_videoOrigin - In the implementation block
@property (assign,nonatomic) char hasCancelledShareVC;                                           //@synthesize hasCancelledShareVC=_hasCancelledShareVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
-(id)analyticsModule;
-(IGVideoInfo *)videoInfo;
-(void)setPlayerView:(IGVideoPlaybackView *)arg1 ;
-(void)setMaxVideoDuration:(float)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(id)initWithDraft:(id)arg1 userSession:(id)arg2 ;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(float)maxVideoDuration;
-(id)initWithAssetInMediaMetadata:(id)arg1 ;
-(id)initWithOrigin:(int)arg1 videoInfo:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)buildNavbar;
-(void)videoInfoReady:(id)arg1 ;
-(char)isValidVideo:(id)arg1 ;
-(void)updateVideoDependentViews;
-(void)viewWillAppearInner:(char)arg1 ;
-(void)showInvalidVideoError;
-(void)buildToolContainerView;
-(void)buildToolsTabBar;
-(void)buildToggleToolsTabBar;
-(void)setOverlayNuxController:(IGOverlayNuxController *)arg1 ;
-(IGOverlayNuxController *)overlayNuxController;
-(UIView *)toolsContainerView;
-(void)initializeFromEditsDictionary;
-(void)prepareForShareStep;
-(char)videoIsReady;
-(IGEditorTabBar *)toolsTabBar;
-(UIView*<IGEditorTabView>)coverFrameButton;
-(IGClipCollectionController *)clipCollectionController;
-(char)trimAnimationAlreadyShown;
-(float)originalVideoLength;
-(void)showTrimAnimation;
-(UIView*<IGEditorTabView>)trimmerButton;
-(void)showVideoTrimmer;
-(IGFilterCollectionController *)filterTrayController;
-(UICollectionView *)filterCollectionView;
-(void)setNeedsVideoUpdate:(char)arg1 ;
-(void)reconcileVideoPlayer;
-(CGSize)toolsTabBarSizeForToolsContainerSize:(CGSize)arg1 ;
-(UIView*<IGEditorTabView>)filtersButton;
-(UIView*<IGEditorTabView>)multiClipButton;
-(UIImageView *)audioMuteButton;
-(UIImageView *)cinemaButton;
-(void)configureAccessibilityForTabBar:(id)arg1 ;
-(id)accessibilityLabelForView:(id)arg1 ;
-(id)accessibilityHintForView:(id)arg1 ;
-(char)stabilizationEnabled;
-(CGSize)videoDisplaySize;
-(void)onVideoTapped;
-(char)isAudioMutingEnabled;
-(UILabel *)audioOnLabel;
-(UILabel *)audioMutedLabel;
-(void)didTapCancel;
-(char)isDraftWorthWarningBeforeDiscard;
-(char)isDraftFiltered;
-(char)hasCancelledShareVC;
-(void)showTrimOverlayNux;
-(id)sendAnalyticsEvent:(id)arg1 ;
-(void)startVideoRender;
-(void)filterPlayerViewDidFinishPlaying;
-(char)isClipTrimMode;
-(NSMutableDictionary *)adjustedFilterStrengthValues;
-(void)cancelRenderAndUpload;
-(void)setFilterControlView:(IGFilterControlView *)arg1 ;
-(IGFilterControlView *)filterControlView;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)setDidReorderTray:(char)arg1 ;
-(IGRearrangeOverlayView *)rearrangeFilterOverlayView;
-(IGRearrangeOverlayView *)rearrangeClipOverlayView;
-(void)updateWithVideoComposition:(id)arg1 ;
-(void)setIsClipTrimMode:(char)arg1 ;
-(float)trimViewTimeScaleForClipDuration:(float)arg1 ;
-(void)updateTrimProgressSegmentColors;
-(id)titleForItem:(id)arg1 ;
-(void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)createTitleView:(id)arg1 withSubtitle:(id)arg2 ;
-(UIView *)audioMuteOverlayView;
-(void)setHasCancelledShareVC:(char)arg1 ;
-(id)trimmerAnimationImagesWithTintColor:(id)arg1 ;
-(id)activeTrimTabView;
-(void)addScissorsAnimationToImageView:(id)arg1 tintColor:(id)arg2 ;
-(void)setTrimAnimationAlreadyShown:(char)arg1 ;
-(void)trimmerNuxTapped;
-(void)toggleStabilization;
-(void)toggleAudioMuting;
-(void)showFilters;
-(void)showClips;
-(void)showCoverFramePicker;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(/*^block*/id)arg6 ;
-(void)onToolCancel:(id)arg1 ;
-(void)onToolDone:(id)arg1 ;
-(void)filterControlViewDidPressDone:(id)arg1 ;
-(void)filterControlViewDidPressCancel:(id)arg1 ;
-(void)dismissFilterControlView:(id)arg1 ;
-(void)trimClips;
-(void)updateVideoDisplaySize;
-(char)needsVideoUpdate;
-(void)generateScrubberFrames;
-(void)populateThumbnailCacheForClipIndex:(unsigned)arg1 ;
-(id)cachedThumbnailForClip:(id)arg1 andTime:(SCD_Struct_IG53)arg2 ;
-(void)cacheThumbnail:(id)arg1 forClip:(id)arg2 andTime:(SCD_Struct_IG53)arg3 ;
-(id)cacheKeyForClip:(id)arg1 filter:(id)arg2 time:(SCD_Struct_IG53)arg3 ;
-(void)exitTrimControlView;
-(void)setVideoDisplaySize:(CGSize)arg1 ;
-(void)setOriginalVideoLength:(float)arg1 ;
-(void)setVideoIsReady:(char)arg1 ;
-(void)updateModeTabBarButtons;
-(void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(char)arg3 willScroll:(char)arg4 ;
-(void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2 ;
-(float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2 ;
-(void)filterControllerDidSelectAddMoreFilters:(id)arg1 ;
-(void)filterControllerDidStartReordering:(id)arg1 ;
-(void)filterControllerDidFinishReordering:(id)arg1 ;
-(void)clipController:(id)arg1 didChangeClipOrder:(id)arg2 ;
-(void)didTapClipAtIndexPath:(id)arg1 ;
-(void)clipControllerDidStartReordering:(id)arg1 ;
-(void)clipControllerDidFinishReordering:(id)arg1 ;
-(id)draggingContainerViewForClipController:(id)arg1 ;
-(void)filterPlayerViewDidFinishPlayingWithAnimation:(char)arg1 ;
-(void)playbackView:(id)arg1 didPlayToTime:(SCD_Struct_IG53)arg2 ;
-(void)tabBar:(id)arg1 didSelectTabView:(id)arg2 previousTabView:(id)arg3 ;
-(char)tabBar:(id)arg1 shouldSelectTabView:(id)arg2 ;
-(void)filterControlViewDidStartDragging:(id)arg1 ;
-(void)filterControlViewDidEndDragging:(id)arg1 ;
-(void)filterControlView:(id)arg1 didChangeValue:(float)arg2 ;
-(void)filterControlView:(id)arg1 didChangeBorderSelection:(char)arg2 ;
-(void)filterControlViewDidTapRotate:(id)arg1 ;
-(void)filterControlViewDidToggleGrid:(char)arg1 ;
-(void)filterControlViewNeedUpdateValue;
-(void)filterControlView:(id)arg1 didChangeTintColor:(unsigned)arg2 withTintType:(unsigned)arg3 ;
-(void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned)arg3 ;
-(void)overlayNuxControllerWillDismiss;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)videoTrimController:(id)arg1 willBeginUpdatingWithTrimmedRange:(SCD_Struct_IG68)arg2 ;
-(void)videoTrimController:(id)arg1 didUpdateWithTrimmedRange:(SCD_Struct_IG68)arg2 ;
-(void)videoTrimController:(id)arg1 didFinishUpdatingWithTrimmedRange:(SCD_Struct_IG68)arg2 ;
-(void)videoTrimController:(id)arg1 didConfirmTrimmedRange:(SCD_Struct_IG68)arg2 ;
-(void)videoTrimControllerDidRejectChanges:(id)arg1 ;
-(void)shareViewControllerDidAppear:(id)arg1 ;
-(void)shareViewControllerWillFinish:(id)arg1 ;
-(void)shareViewControllerDidCancel:(id)arg1 ;
-(SCD_Struct_IG53)keyTime;
-(IGVideoComposition *)workingVideoComposition;
-(void)setWorkingVideoComposition:(IGVideoComposition *)arg1 ;
-(void)setAdjustedFilterStrengthValues:(NSMutableDictionary *)arg1 ;
-(void)setCinemaButton:(UIImageView *)arg1 ;
-(void)setAudioMuteButton:(UIImageView *)arg1 ;
-(void)setCoverFrameButton:(UIView*<IGEditorTabView>)arg1 ;
-(void)setTrimmerButton:(UIView*<IGEditorTabView>)arg1 ;
-(void)setMultiClipButton:(UIView*<IGEditorTabView>)arg1 ;
-(void)setFiltersButton:(UIView*<IGEditorTabView>)arg1 ;
-(void)setAudioMuteOverlayView:(UIView *)arg1 ;
-(void)setAudioMutedLabel:(UILabel *)arg1 ;
-(void)setAudioOnLabel:(UILabel *)arg1 ;
-(int)audioMuteToggleTick;
-(void)setAudioMuteToggleTick:(int)arg1 ;
-(void)setToolsContainerView:(UIView *)arg1 ;
-(void)setToolsTabBar:(IGEditorTabBar *)arg1 ;
-(IGEditorTabBar *)toggleToolsTabBar;
-(void)setToggleToolsTabBar:(IGEditorTabBar *)arg1 ;
-(UIView *)toolView;
-(void)setToolView:(UIView *)arg1 ;
-(void)setRearrangeFilterOverlayView:(IGRearrangeOverlayView *)arg1 ;
-(void)setRearrangeClipOverlayView:(IGRearrangeOverlayView *)arg1 ;
-(void)setFilterCollectionView:(UICollectionView *)arg1 ;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGClipCollectionController *)clipTrayController;
-(void)setClipTrayController:(IGClipCollectionController *)arg1 ;
-(IGVideoTrimViewController *)videoTrimViewController;
-(void)setVideoTrimViewController:(IGVideoTrimViewController *)arg1 ;
-(SCD_Struct_IG68)previousTrimmedRange;
-(void)setPreviousTrimmedRange:(SCD_Struct_IG68)arg1 ;
-(IGSegmentedProgressView *)trimProgressView;
-(void)setTrimProgressView:(IGSegmentedProgressView *)arg1 ;
-(void)setScrubberView:(IGVideoScrubberView *)arg1 ;
-(void)setKeyTime:(SCD_Struct_IG53)arg1 ;
-(char)didReorderTray;
-(void)setClipCollectionController:(IGClipCollectionController *)arg1 ;
-(char)viewLoaded;
-(void)setViewLoaded:(char)arg1 ;
-(int)videoOrigin;
-(void)setVideoOrigin:(int)arg1 ;
-(void)scrubberViewDidTapOnHandle;
-(void)scrubberViewBeganMovingHandle;
-(void)scrubberViewFinishedMovingHandle;
-(void)scrubberViewDidMoveHandleToPosition:(float)arg1 ;
-(IGVideoPlaybackView *)playerView;
-(void)togglePlayback;
-(IGVideoScrubberView *)scrubberView;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)done;
-(IGCameraNavigationController *)navController;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setPlayButton:(IGVideoPlayButton *)arg1 ;
-(IGVideoPlayButton *)playButton;
@end

