
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGBaseCameraViewController.h>
#import <Instagram/IGFilterCollectionControllerDelegate.h>
#import <Instagram/IGClipCollectionControllerDelegate.h>
#import <Instagram/IGVideoPlaybackViewDelegate.h>
#import <Instagram/IGShareViewControllerDelegate.h>
#import <Instagram/IGImageViewTabBarDelegate.h>
#import <Instagram/IGVideoScrubberViewDelegate.h>
#import <Instagram/IGFilterControlViewDelegate.h>
#import <Instagram/IGVideoTrimViewControlDelegate.h>
#import <Instagram/IGOverlayNuxControllerDelegate.h>

@class IGVideoInfo, IGVideoPlaybackView, IGVideoPlayButton, IGMediaMetadata, NSMutableDictionary, UIBarButtonItem, UIImageView, UIView, UILabel, IGImageViewTabBar, UICollectionView, IGFilterCollectionController, IGFilterControlView, IGClipCollectionController, IGVideoTrimView, IGVideoTrimViewControl, IGVideoScrubberView, IGOverlayNuxController, NSString;

@interface IGVideoEditorViewController : IGBaseCameraViewController <IGFilterCollectionControllerDelegate, IGClipCollectionControllerDelegate, IGVideoPlaybackViewDelegate, IGShareViewControllerDelegate, IGImageViewTabBarDelegate, IGVideoScrubberViewDelegate, IGFilterControlViewDelegate, IGVideoTrimViewControlDelegate, IGOverlayNuxControllerDelegate> {

	CGSize _videoDisplaySize;
	char _prefersToolbarHidden;
	char _needsVideoUpdate;
	char _trimAnimationAlreadyShown;
	char _isClipTrimMode;
	char _didReorderTray;
	IGVideoInfo* _videoInfo;
	IGVideoPlaybackView* _playerView;
	IGVideoPlayButton* _playButton;
	IGMediaMetadata* _mediaMetadata;
	NSMutableDictionary* _adjustedFilterStrengthValues;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	UIImageView* _cinemaButton;
	UIImageView* _audioMuteButton;
	UIImageView* _coverFrameButton;
	UIImageView* _trimmerButton;
	UIImageView* _multiClipButton;
	UIImageView* _filtersButton;
	UIView* _NUXView;
	UIView* _audioMuteOverlayView;
	UILabel* _audioMutedLabel;
	UILabel* _audioOnLabel;
	int _audioMuteToggleTick;
	float _originalVideoLength;
	UIView* _toolContainerView;
	UIView* _rearrangeFilterOverlayView;
	UIView* _rearrangeClipOverlayView;
	IGImageViewTabBar* _modeTabBar;
	UICollectionView* _filterCollectionView;
	UICollectionView* _clipCollectionView;
	IGFilterCollectionController* _filterTrayController;
	IGFilterControlView* _filterControlView;
	IGClipCollectionController* _clipTrayController;
	IGVideoTrimView* _trimView;
	IGVideoTrimViewControl* _trimViewControl;
	IGVideoScrubberView* _scrubberView;
	IGOverlayNuxController* _overlayNuxController;
	SCD_Struct_IG43 _keyTime;

}

@property (nonatomic,retain) IGVideoInfo * videoInfo;                                          //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackView * playerView;                                 //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) IGVideoPlayButton * playButton;                                   //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                  //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adjustedFilterStrengthValues;               //@synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImageView * cinemaButton;                                       //@synthesize cinemaButton=_cinemaButton - In the implementation block
@property (nonatomic,retain) UIImageView * audioMuteButton;                                    //@synthesize audioMuteButton=_audioMuteButton - In the implementation block
@property (nonatomic,retain) UIImageView * coverFrameButton;                                   //@synthesize coverFrameButton=_coverFrameButton - In the implementation block
@property (nonatomic,retain) UIImageView * trimmerButton;                                      //@synthesize trimmerButton=_trimmerButton - In the implementation block
@property (nonatomic,retain) UIImageView * multiClipButton;                                    //@synthesize multiClipButton=_multiClipButton - In the implementation block
@property (nonatomic,retain) UIImageView * filtersButton;                                      //@synthesize filtersButton=_filtersButton - In the implementation block
@property (nonatomic,retain) UIView * NUXView;                                                 //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) UIView * audioMuteOverlayView;                                    //@synthesize audioMuteOverlayView=_audioMuteOverlayView - In the implementation block
@property (nonatomic,retain) UILabel * audioMutedLabel;                                        //@synthesize audioMutedLabel=_audioMutedLabel - In the implementation block
@property (nonatomic,retain) UILabel * audioOnLabel;                                           //@synthesize audioOnLabel=_audioOnLabel - In the implementation block
@property (assign,nonatomic) int audioMuteToggleTick;                                          //@synthesize audioMuteToggleTick=_audioMuteToggleTick - In the implementation block
@property (assign,nonatomic) float originalVideoLength;                                        //@synthesize originalVideoLength=_originalVideoLength - In the implementation block
@property (nonatomic,retain) UIView * toolContainerView;                                       //@synthesize toolContainerView=_toolContainerView - In the implementation block
@property (nonatomic,retain) UIView * rearrangeFilterOverlayView;                              //@synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView - In the implementation block
@property (nonatomic,retain) UIView * rearrangeClipOverlayView;                                //@synthesize rearrangeClipOverlayView=_rearrangeClipOverlayView - In the implementation block
@property (nonatomic,retain) IGImageViewTabBar * modeTabBar;                                   //@synthesize modeTabBar=_modeTabBar - In the implementation block
@property (nonatomic,retain) UICollectionView * filterCollectionView;                          //@synthesize filterCollectionView=_filterCollectionView - In the implementation block
@property (nonatomic,retain) UICollectionView * clipCollectionView;                            //@synthesize clipCollectionView=_clipCollectionView - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;              //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (nonatomic,retain) IGFilterControlView * filterControlView;                          //@synthesize filterControlView=_filterControlView - In the implementation block
@property (nonatomic,retain) IGClipCollectionController * clipTrayController;                  //@synthesize clipTrayController=_clipTrayController - In the implementation block
@property (nonatomic,retain) IGVideoTrimView * trimView;                                       //@synthesize trimView=_trimView - In the implementation block
@property (nonatomic,retain) IGVideoTrimViewControl * trimViewControl;                         //@synthesize trimViewControl=_trimViewControl - In the implementation block
@property (nonatomic,retain) IGVideoScrubberView * scrubberView;                               //@synthesize scrubberView=_scrubberView - In the implementation block
@property (nonatomic,retain) IGOverlayNuxController * overlayNuxController;                    //@synthesize overlayNuxController=_overlayNuxController - In the implementation block
@property (assign,nonatomic) char prefersToolbarHidden;                                        //@synthesize prefersToolbarHidden=_prefersToolbarHidden - In the implementation block
@property (assign,nonatomic) char needsVideoUpdate;                                            //@synthesize needsVideoUpdate=_needsVideoUpdate - In the implementation block
@property (assign,nonatomic) char trimAnimationAlreadyShown;                                   //@synthesize trimAnimationAlreadyShown=_trimAnimationAlreadyShown - In the implementation block
@property (assign,nonatomic) char isClipTrimMode;                                              //@synthesize isClipTrimMode=_isClipTrimMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG43 keyTime;                                          //@synthesize keyTime=_keyTime - In the implementation block
@property (assign,nonatomic) char didReorderTray;                                              //@synthesize didReorderTray=_didReorderTray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlayerView:(IGVideoPlaybackView *)arg1 ;
-(UICollectionView *)filterCollectionView;
-(void)setFilterCollectionView:(UICollectionView *)arg1 ;
-(void)buildNavbar;
-(void)buildToolContainerView;
-(void)buildModeTabBar;
-(void)setOverlayNuxController:(IGOverlayNuxController *)arg1 ;
-(IGOverlayNuxController *)overlayNuxController;
-(UIView *)toolContainerView;
-(IGFilterControlView *)filterControlView;
-(IGFilterCollectionController *)filterTrayController;
-(IGImageViewTabBar *)modeTabBar;
-(void)setFilterControlView:(IGFilterControlView *)arg1 ;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(/*^block*/id)arg6 ;
-(void)setDidReorderTray:(char)arg1 ;
-(UIView *)rearrangeFilterOverlayView;
-(id)createTitleView:(id)arg1 withSubtitle:(id)arg2 ;
-(void)onToolCancel:(id)arg1 ;
-(void)onToolDone:(id)arg1 ;
-(void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)filterControlViewDidPressDone:(id)arg1 ;
-(void)filterControlViewDidPressCancel:(id)arg1 ;
-(void)dismissFilterControlView:(id)arg1 ;
-(NSMutableDictionary *)adjustedFilterStrengthValues;
-(void)configureAccessibiltyForTabBar:(id)arg1 ;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id)accessibilityLabelForView:(id)arg1 ;
-(id)accessibilityHintForView:(id)arg1 ;
-(void)metadataControllerDidAppear:(id)arg1 ;
-(void)metadataControllerWillFinish:(id)arg1 ;
-(void)metadataControllerDidCancel:(id)arg1 ;
-(void)tabBar:(id)arg1 didSelectImageView:(id)arg2 previousImageView:(id)arg3 ;
-(char)tabBar:(id)arg1 shouldSelectImageView:(id)arg2 ;
-(void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(char)arg3 willScroll:(char)arg4 ;
-(void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2 ;
-(float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2 ;
-(void)filterControllerDidSelectAddMoreFilters:(id)arg1 ;
-(void)filterControllerDidStartReordering:(id)arg1 ;
-(void)filterControllerDidFinishReordering:(id)arg1 ;
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
-(char)overlayIsOpaque;
-(void)showFilterTrayNux;
-(void)setAdjustedFilterStrengthValues:(NSMutableDictionary *)arg1 ;
-(void)setToolContainerView:(UIView *)arg1 ;
-(void)setRearrangeFilterOverlayView:(UIView *)arg1 ;
-(void)setModeTabBar:(IGImageViewTabBar *)arg1 ;
-(UIView *)NUXView;
-(void)setNUXView:(UIView *)arg1 ;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(char)prefersToolbarHidden;
-(void)setPrefersToolbarHidden:(char)arg1 ;
-(char)didReorderTray;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(id)initWithVideoInfo:(id)arg1 mediaMetadata:(id)arg2 ;
-(void)filterPlayerViewDidFinishPlaying;
-(void)playbackView:(id)arg1 didPlayToTime:(SCD_Struct_IG43)arg2 ;
-(id)cachedThumbnailForClip:(id)arg1 andTime:(SCD_Struct_IG43)arg2 ;
-(void)didTapClipAtIndexPath:(id)arg1 ;
-(void)clipController:(id)arg1 didChangeClipOrder:(id)arg2 ;
-(void)clipControllerDidStartReordering:(id)arg1 ;
-(void)clipControllerDidFinishReordering:(id)arg1 ;
-(void)setOriginalVideoLength:(float)arg1 ;
-(float)originalVideoLength;
-(UIImageView *)coverFrameButton;
-(char)trimAnimationAlreadyShown;
-(void)showTrimAnimation;
-(UIImageView *)trimmerButton;
-(void)showVideoTrimmer;
-(id)titleForTabView;
-(UIImageView *)filtersButton;
-(UIImageView *)audioMuteButton;
-(UIImageView *)multiClipButton;
-(UIImageView *)cinemaButton;
-(char)stabilizationEnabled;
-(void)onVideoTapped;
-(char)isAudioMutingEnabled;
-(UILabel *)audioOnLabel;
-(UILabel *)audioMutedLabel;
-(void)trimValueChanged:(id)arg1 ;
-(void)trimWillStart;
-(void)trimmerDidScrub:(id)arg1 ;
-(void)reconcileVideoPlayer;
-(void)startVideoRender;
-(void)addScissorsAnimationToImageView:(id)arg1 tintColor:(id)arg2 ;
-(char)isClipTrimMode;
-(IGVideoTrimView *)trimView;
-(void)cancelRenderAndUpload;
-(void)setIsClipTrimMode:(char)arg1 ;
-(id)titleForItem:(id)arg1 ;
-(IGVideoTrimViewControl *)trimViewControl;
-(UICollectionView *)clipCollectionView;
-(UIView *)rearrangeClipOverlayView;
-(void)setNeedsVideoUpdate:(char)arg1 ;
-(UIView *)audioMuteOverlayView;
-(id)trimmerAnimationImagesWithTintColor:(id)arg1 ;
-(void)setTrimAnimationAlreadyShown:(char)arg1 ;
-(void)toggleStabilization;
-(void)toggleAudioMuting;
-(void)showFilters;
-(void)showClips;
-(void)showCoverFramePicker;
-(void)exitTrimControlView;
-(char)needsVideoUpdate;
-(void)generateScrubberFrames;
-(void)setKeyTime:(SCD_Struct_IG43)arg1 ;
-(void)populateThumbnailCacheForClipIndex:(unsigned)arg1 ;
-(void)cacheThumbnail:(id)arg1 forClip:(id)arg2 andTime:(SCD_Struct_IG43)arg3 ;
-(id)cacheKeyForClip:(id)arg1 filter:(id)arg2 time:(SCD_Struct_IG43)arg3 ;
-(SCD_Struct_IG43)keyTime;
-(void)scrubberViewDidMoveHandleToPosition:(float)arg1 ;
-(void)videoTrimViewDidPressDone;
-(void)videoTrimViewDidPressCancel;
-(void)setCinemaButton:(UIImageView *)arg1 ;
-(void)setAudioMuteButton:(UIImageView *)arg1 ;
-(void)setCoverFrameButton:(UIImageView *)arg1 ;
-(void)setTrimmerButton:(UIImageView *)arg1 ;
-(void)setMultiClipButton:(UIImageView *)arg1 ;
-(void)setFiltersButton:(UIImageView *)arg1 ;
-(void)setAudioMuteOverlayView:(UIView *)arg1 ;
-(void)setAudioMutedLabel:(UILabel *)arg1 ;
-(void)setAudioOnLabel:(UILabel *)arg1 ;
-(int)audioMuteToggleTick;
-(void)setAudioMuteToggleTick:(int)arg1 ;
-(void)setRearrangeClipOverlayView:(UIView *)arg1 ;
-(void)setClipCollectionView:(UICollectionView *)arg1 ;
-(IGClipCollectionController *)clipTrayController;
-(void)setClipTrayController:(IGClipCollectionController *)arg1 ;
-(void)setTrimView:(IGVideoTrimView *)arg1 ;
-(void)setTrimViewControl:(IGVideoTrimViewControl *)arg1 ;
-(void)setScrubberView:(IGVideoScrubberView *)arg1 ;
-(IGVideoPlaybackView *)playerView;
-(void)togglePlayback;
-(IGVideoScrubberView *)scrubberView;
-(void)cancel;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)done;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setPlayButton:(IGVideoPlayButton *)arg1 ;
-(IGVideoPlayButton *)playButton;
@end

