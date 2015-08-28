/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGBaseCameraViewController.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGGridViewControllerScrollDelegate.h>
#import <Instagram/IGVideoSampleBufferDelegate.h>
#import <Instagram/IGAudioSampleBufferDelegate.h>
#import <Instagram/IGMediaCaptureButtonDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGAppInstallationsHelperDelegate.h>
#import <Instagram/IGLayoutAppInstallAlertViewControllerDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGMediaCaptureViewControllerDelegate, OS_dispatch_queue;
@class IGMediaMetadata, IGGridViewController, IGMediaTabBar, IGPagingScrollView, NSArray, IGCameraAccessPromptView, IGSampleBuffer, UIView, NSOperationQueue, IGCaptureManager, IGVideoRecorder, NSObject, IGVideoInfo, IGCameraFocusIndicator, IGCameraModeTransitionOverlayView, IGMediaCaptureButton, IGVideoCaptureDeleteButton, IGTapButton, IGVideoProgressView, IGStabilizationSampler, IGDirectedNUXView, IGDeviceAngleSampler, IGAppInstallationsHelper, IGCropView, IGCircularProgressView, UIImageView, IGAssetPlayerView, IGVideoPlayButton, UITapGestureRecognizer, IGCameraGuideView, IGLabel, IGEmptyLibraryView, UIPanGestureRecognizer, NSDictionary, AVAsset, UIBarButtonItem, IGChevronTitleButton, IGSelectAlbumController, IGEditorViewController, NSString;

@interface IGMediaCaptureViewController : IGBaseCameraViewController <IGAssetPlayerViewDelegate, IGCaptureManagerDelegate, IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, IGMediaCaptureButtonDelegate, IGSelectAlbumDelegate, IGAppInstallationsHelperDelegate, IGLayoutAppInstallAlertViewControllerDelegate, IGCropViewUserInteractionDelegate, UIScrollViewDelegate> {

	char _shouldCaptureFrames;
	char _openToLibrary;
	char _isBackgrounded;
	char _gridViewIsLoaded;
	char _hasStartedCapture;
	char _shouldDelayStartCapture;
	char _changingModes;
	char _layoutButtonVisible;
	char _shouldAutoPlayVideo;
	char _wasPlayingVideo;
	char _isPushingCropView;
	IGMediaMetadata* _mediaMetadata;
	int _state;
	id<IGMediaCaptureViewControllerDelegate> _delegate;
	IGGridViewController* _gridViewController;
	IGMediaTabBar* _mediaTabBar;
	IGPagingScrollView* _scrollView;
	NSArray* _disabledScrollViews;
	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGSampleBuffer* _imageBufferData;
	int _imageBufferCameraMode;
	UIView* _cameraContainerView;
	int _cameraMode;
	NSOperationQueue* _cameraModeQueue;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	NSObject*<OS_dispatch_queue> _imageBufferQueue;
	IGVideoInfo* _videoInfo;
	UIView* _captureView;
	UIView* _disabledOverlayView;
	IGCameraFocusIndicator* _focusIndicator;
	IGCameraModeTransitionOverlayView* _cameraModeTransitionOverlayView;
	IGMediaCaptureButton* _photoCaptureButton;
	IGMediaCaptureButton* _videoCaptureButton;
	IGVideoCaptureDeleteButton* _videoDeleteButton;
	IGTapButton* _flashButton;
	IGTapButton* _switchCamerasButton;
	IGVideoProgressView* _videoProgressView;
	IGStabilizationSampler* _stabilizer;
	IGDirectedNUXView* _NUXView;
	IGDeviceAngleSampler* _deviceAngleSampler;
	int _photoDeviceOrientation;
	float _photoDeviceAngle;
	IGAppInstallationsHelper* _appInstallationsHelper;
	UIView* _cropContainer;
	IGCropView* _cropView;
	IGCropView* _videoCoverFrameImageView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	UIImageView* _loadingThumbnailView;
	id _previewAsset;
	IGTapButton* _layoutButton;
	IGTapButton* _longcatButton;
	IGAssetPlayerView* _playerView;
	IGVideoPlayButton* _playButton;
	UITapGestureRecognizer* _playTap;
	IGCameraGuideView* _guideView;
	IGLabel* _unsupportedVideoLabel;
	IGEmptyLibraryView* _noMediaView;
	int _cropState;
	int _cropMode;
	float _startCropMaxY;
	float _cropOffsetY;
	UITapGestureRecognizer* _cropTap;
	UIPanGestureRecognizer* _cropPanExpand;
	UIPanGestureRecognizer* _cropPanMinimize;
	float _startCropPanTouchInsetY;
	UIView* _cropOverlayView;
	int _fullSizeRequestID;
	unsigned _contentEditingInputRequestID;
	NSDictionary* _metadata;
	id _fullResolutionSource;
	/*^block*/id _fullResolutionCompletionBlock;
	AVAsset* _selectedVideo;
	id _selectedAsset;
	UIBarButtonItem* _libraryNextButtonItem;
	UIBarButtonItem* _libraryLoadingNextButtonItem;
	UIBarButtonItem* _videoNextButtonItem;
	IGChevronTitleButton* _chevronTitleButton;
	IGSelectAlbumController* _selectAlbumVC;
	IGEditorViewController* _currentEditor;
	CGSize _previewImageSize;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                                  //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) char openToLibrary;                                                               //@synthesize openToLibrary=_openToLibrary - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                              //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,nonatomic) int state;                                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaCaptureViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                                            //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                                        //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) IGMediaTabBar * mediaTabBar;                                                      //@synthesize mediaTabBar=_mediaTabBar - In the implementation block
@property (nonatomic,retain) IGPagingScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSArray * disabledScrollViews;                                                    //@synthesize disabledScrollViews=_disabledScrollViews - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                                           //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign,nonatomic) char shouldDelayStartCapture;                                                     //@synthesize shouldDelayStartCapture=_shouldDelayStartCapture - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;                            //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                                           //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (assign) int imageBufferCameraMode;                                                                  //@synthesize imageBufferCameraMode=_imageBufferCameraMode - In the implementation block
@property (assign,getter=isChangingModes,nonatomic) char changingModes;                                        //@synthesize changingModes=_changingModes - In the implementation block
@property (nonatomic,retain) UIView * cameraContainerView;                                                     //@synthesize cameraContainerView=_cameraContainerView - In the implementation block
@property (assign,nonatomic) int cameraMode;                                                                   //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,retain) NSOperationQueue * cameraModeQueue;                                               //@synthesize cameraModeQueue=_cameraModeQueue - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                                //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                                  //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                                    //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                                                          //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) UIView * captureView;                                                             //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) UIView * disabledOverlayView;                                                     //@synthesize disabledOverlayView=_disabledOverlayView - In the implementation block
@property (nonatomic,retain) IGCameraFocusIndicator * focusIndicator;                                          //@synthesize focusIndicator=_focusIndicator - In the implementation block
@property (nonatomic,retain) IGCameraModeTransitionOverlayView * cameraModeTransitionOverlayView;              //@synthesize cameraModeTransitionOverlayView=_cameraModeTransitionOverlayView - In the implementation block
@property (nonatomic,retain) IGMediaCaptureButton * photoCaptureButton;                                        //@synthesize photoCaptureButton=_photoCaptureButton - In the implementation block
@property (nonatomic,retain) IGMediaCaptureButton * videoCaptureButton;                                        //@synthesize videoCaptureButton=_videoCaptureButton - In the implementation block
@property (nonatomic,retain) IGVideoCaptureDeleteButton * videoDeleteButton;                                   //@synthesize videoDeleteButton=_videoDeleteButton - In the implementation block
@property (nonatomic,retain) IGTapButton * flashButton;                                                        //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCamerasButton;                                                //@synthesize switchCamerasButton=_switchCamerasButton - In the implementation block
@property (nonatomic,retain) IGVideoProgressView * videoProgressView;                                          //@synthesize videoProgressView=_videoProgressView - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                              //@synthesize stabilizer=_stabilizer - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * NUXView;                                                      //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) IGDeviceAngleSampler * deviceAngleSampler;                                        //@synthesize deviceAngleSampler=_deviceAngleSampler - In the implementation block
@property (assign,nonatomic) int photoDeviceOrientation;                                                       //@synthesize photoDeviceOrientation=_photoDeviceOrientation - In the implementation block
@property (assign,nonatomic) float photoDeviceAngle;                                                           //@synthesize photoDeviceAngle=_photoDeviceAngle - In the implementation block
@property (nonatomic,retain) IGAppInstallationsHelper * appInstallationsHelper;                                //@synthesize appInstallationsHelper=_appInstallationsHelper - In the implementation block
@property (nonatomic,retain) UIView * cropContainer;                                                           //@synthesize cropContainer=_cropContainer - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                            //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCropView * videoCoverFrameImageView;                                            //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                                      //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                               //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id previewAsset;                                                                  //@synthesize previewAsset=_previewAsset - In the implementation block
@property (assign,nonatomic) char layoutButtonVisible;                                                         //@synthesize layoutButtonVisible=_layoutButtonVisible - In the implementation block
@property (nonatomic,retain) IGTapButton * layoutButton;                                                       //@synthesize layoutButton=_layoutButton - In the implementation block
@property (nonatomic,retain) IGTapButton * longcatButton;                                                      //@synthesize longcatButton=_longcatButton - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                                   //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) IGVideoPlayButton * playButton;                                                   //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playTap;                                                 //@synthesize playTap=_playTap - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                                    //@synthesize guideView=_guideView - In the implementation block
@property (assign,nonatomic) char shouldAutoPlayVideo;                                                         //@synthesize shouldAutoPlayVideo=_shouldAutoPlayVideo - In the implementation block
@property (assign,nonatomic) char wasPlayingVideo;                                                             //@synthesize wasPlayingVideo=_wasPlayingVideo - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                                  //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                                 //@synthesize noMediaView=_noMediaView - In the implementation block
@property (assign,nonatomic) int cropState;                                                                    //@synthesize cropState=_cropState - In the implementation block
@property (assign,nonatomic) int cropMode;                                                                     //@synthesize cropMode=_cropMode - In the implementation block
@property (assign,nonatomic) float startCropMaxY;                                                              //@synthesize startCropMaxY=_startCropMaxY - In the implementation block
@property (assign,nonatomic) float cropOffsetY;                                                                //@synthesize cropOffsetY=_cropOffsetY - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * cropTap;                                                 //@synthesize cropTap=_cropTap - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * cropPanExpand;                                           //@synthesize cropPanExpand=_cropPanExpand - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * cropPanMinimize;                                         //@synthesize cropPanMinimize=_cropPanMinimize - In the implementation block
@property (assign,nonatomic) float startCropPanTouchInsetY;                                                    //@synthesize startCropPanTouchInsetY=_startCropPanTouchInsetY - In the implementation block
@property (assign,nonatomic) char isPushingCropView;                                                           //@synthesize isPushingCropView=_isPushingCropView - In the implementation block
@property (nonatomic,retain) UIView * cropOverlayView;                                                         //@synthesize cropOverlayView=_cropOverlayView - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                            //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                            //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) CGSize previewImageSize;                                                          //@synthesize previewImageSize=_previewImageSize - In the implementation block
@property (nonatomic,retain) id fullResolutionSource;                                                          //@synthesize fullResolutionSource=_fullResolutionSource - In the implementation block
@property (nonatomic,copy) id fullResolutionCompletionBlock;                                                   //@synthesize fullResolutionCompletionBlock=_fullResolutionCompletionBlock - In the implementation block
@property (nonatomic,retain) AVAsset * selectedVideo;                                                          //@synthesize selectedVideo=_selectedVideo - In the implementation block
@property (nonatomic,retain) id selectedAsset;                                                                 //@synthesize selectedAsset=_selectedAsset - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryNextButtonItem;                                          //@synthesize libraryNextButtonItem=_libraryNextButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryLoadingNextButtonItem;                                   //@synthesize libraryLoadingNextButtonItem=_libraryLoadingNextButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * videoNextButtonItem;                                            //@synthesize videoNextButtonItem=_videoNextButtonItem - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                                        //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                                          //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (assign,nonatomic,__weak) IGEditorViewController * currentEditor;                                    //@synthesize currentEditor=_currentEditor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutAppInstallAlertViewDidConfirm:(id)arg1 ;
-(IGMediaCaptureButton *)photoCaptureButton;
-(IGMediaCaptureButton *)videoCaptureButton;
-(void)onOrientationChange;
-(void)setVideoCaptureButton:(IGMediaCaptureButton *)arg1 ;
-(void)setPhotoCaptureButton:(IGMediaCaptureButton *)arg1 ;
-(IGVideoProgressView *)videoProgressView;
-(IGCaptureManager *)captureManager;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)onCancelButtonTapped;
-(void)onClipAdded:(id)arg1 ;
-(void)onClipRemoved;
-(IGDeviceAngleSampler *)deviceAngleSampler;
-(UIView *)captureView;
-(IGCameraFocusIndicator *)focusIndicator;
-(IGCameraGuideView *)guideView;
-(void)updateStabilizationSampler;
-(void)updateVideoState;
-(IGVideoInfo *)videoInfo;
-(UIBarButtonItem *)videoNextButtonItem;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(IGTapButton *)switchCamerasButton;
-(void)onFlashButtonTapped;
-(void)onSwitchCamerasButtonTapped;
-(void)onVideoNextButtonTapped;
-(IGVideoRecorder *)videoRecorder;
-(CGPoint)scaledPointAtTapLocation:(CGPoint)arg1 ;
-(void)updateVideoSize;
-(void)hideNUX;
-(void)showHoldToRecordNUX;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(IGStabilizationSampler *)stabilizer;
-(void)setPhotoDeviceOrientation:(int)arg1 ;
-(float)radianOffsetForCurrentOrientation;
-(void)setPhotoDeviceAngle:(float)arg1 ;
-(int)photoDeviceOrientation;
-(float)photoDeviceAngle;
-(char)shouldSaveToLibrary;
-(char)canCaptureAnotherClip;
-(void)showVideoNextNUX;
-(UIView *)disabledOverlayView;
-(void)showVideoTooShortNUX;
-(char)cameraIsReady;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(IGDirectedNUXView *)NUXView;
-(void)captureSessionWillTakePhoto;
-(void)captureDeviceDidSatisfyFocusRequest;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setVideoProgressView:(IGVideoProgressView *)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCaptureView:(UIView *)arg1 ;
-(void)setDisabledOverlayView:(UIView *)arg1 ;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(void)setFocusIndicator:(IGCameraFocusIndicator *)arg1 ;
-(void)setSwitchCamerasButton:(IGTapButton *)arg1 ;
-(void)setVideoNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(void)setDeviceAngleSampler:(IGDeviceAngleSampler *)arg1 ;
-(IGCropView *)cropView;
-(char)overlayIsOpaque;
-(char)prefersToolbarHidden;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(AVAsset *)selectedVideo;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(void)toggleCropperCropMode;
-(void)toggleCropperCropModeFromButton;
-(void)setSelectedVideo:(AVAsset *)arg1 ;
-(IGEmptyLibraryView *)noMediaView;
-(void)showLayoutAppInstallAlertViewPopover;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(char)shouldDismissAppInstallationModalOnAppForeground;
-(void)setPlayButton:(IGVideoPlayButton *)arg1 ;
-(void)setNoMediaView:(IGEmptyLibraryView *)arg1 ;
-(void)setOpenToLibrary:(char)arg1 ;
-(char)usePhotosFramework;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerDidScroll:(id)arg1 ;
-(void)gridViewControllerDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(id)selectedAsset;
-(void)gridViewControllerSelectedAssetWasRemoved:(id)arg1 ;
-(void)mediaCaptureButtonDidTakePicture;
-(void)mediaCaptureButtonDidEndRecording;
-(void)mediaCaptureButtonDidBeginRecording;
-(void)setCameraModeQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)cameraModeQueue;
-(void)setCameraContainerView:(UIView *)arg1 ;
-(UIView *)cameraContainerView;
-(void)captureViewTap:(id)arg1 ;
-(void)captureViewLongPress:(id)arg1 ;
-(void)setCameraModeTransitionOverlayView:(IGCameraModeTransitionOverlayView *)arg1 ;
-(IGCameraModeTransitionOverlayView *)cameraModeTransitionOverlayView;
-(CGRect)frameForCaptureButton:(id)arg1 pageIndex:(int)arg2 ;
-(void)setVideoDeleteButton:(IGVideoCaptureDeleteButton *)arg1 ;
-(IGVideoCaptureDeleteButton *)videoDeleteButton;
-(void)onVideoDeleteButtonTapped;
-(void)onVideoDeleteButtonLongPressed:(id)arg1 ;
-(void)showLibraryAccessDeniedDialog;
-(void)insertMediaTabBar;
-(void)setCropContainer:(UIView *)arg1 ;
-(UIView *)cropContainer;
-(void)setCropView:(IGCropView *)arg1 ;
-(void)panCrop:(id)arg1 ;
-(void)onCropViewSingleTap;
-(void)setLongcatButton:(IGTapButton *)arg1 ;
-(IGTapButton *)longcatButton;
-(void)setLayoutButton:(IGTapButton *)arg1 ;
-(IGTapButton *)layoutButton;
-(void)layoutButtonTapped;
-(void)setLayoutButtonVisible:(char)arg1 ;
-(void)tapExpandCrop:(id)arg1 ;
-(void)setCropTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)cropTap;
-(void)setCropPanExpand:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)cropPanExpand;
-(void)setVideoCoverFrameImageView:(IGCropView *)arg1 ;
-(IGCropView *)videoCoverFrameImageView;
-(void)setLoadingThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)loadingThumbnailView;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)setUnsupportedVideoLabel:(IGLabel *)arg1 ;
-(IGLabel *)unsupportedVideoLabel;
-(void)setCropOverlayView:(UIView *)arg1 ;
-(UIView *)cropOverlayView;
-(void)setStartCropMaxY:(float)arg1 ;
-(float)tabBarHeight;
-(void)onLibraryNextButtonTapped;
-(void)setLibraryNextButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryNextButtonItem;
-(void)setLibraryLoadingNextButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryLoadingNextButtonItem;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(void)onAlbumTitleTapped;
-(IGSelectAlbumController *)selectAlbumVC;
-(char)openToLibrary;
-(void)setState:(int)arg1 animated:(char)arg2 ;
-(void)setMediaTabBar:(IGMediaTabBar *)arg1 ;
-(IGMediaTabBar *)mediaTabBar;
-(void)tabBarButtonTapped;
-(int)assetType:(id)arg1 ;
-(char)shouldAutoPlayVideo;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)pauseVideoPlayer;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(char)gridViewIsLoaded;
-(void)setShouldDelayStartCapture:(char)arg1 ;
-(void)startCapture;
-(char)hasStartedCapture;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)showCameraPermissionDeniedView;
-(void)stopVideoPlayer;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(float)cropOffsetY;
-(void)disableScrollingInChildViews;
-(void)enableDisabledScrollViews;
-(id)disableScrollViewsForViewController:(id)arg1 ;
-(void)setDisabledScrollViews:(NSArray *)arg1 ;
-(NSArray *)disabledScrollViews;
-(void)presentEditorWithBuffer:(id)arg1 isPreviewBuffer:(char)arg2 ;
-(char)wasPlayingVideo;
-(void)playVideoPlayer;
-(void)setCameraMode:(int)arg1 animated:(char)arg2 ;
-(char)shouldDelayStartCapture;
-(void)setVerticalOffset;
-(void)setNavigationBarButtons;
-(void)setWasPlayingVideo:(char)arg1 ;
-(id)fullResolutionCompletionBlock;
-(void)selectFirstAsset;
-(void)showSelectAlbumController:(char)arg1 ;
-(void)setShouldAutoPlayVideo:(char)arg1 ;
-(void)setCropAsset:(id)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)setFullResolutionSource:(id)arg1 ;
-(void)setFullResolutionCompletionBlock:(id)arg1 ;
-(UITapGestureRecognizer *)playTap;
-(void)hideLoadingViews;
-(void)expandCropWithVelocity:(float)arg1 expanding:(char)arg2 ;
-(id)previewAsset;
-(void)setPreviewAsset:(id)arg1 ;
-(void)showCouldNotLoadAlert:(int)arg1 ;
-(void)focusAndExpose:(CGPoint)arg1 ;
-(char)isPushingCropView;
-(void)setStartCropPanTouchInsetY:(float)arg1 ;
-(float)startCropPanTouchInsetY;
-(float)startCropMaxY;
-(void)updateCropOffsetY:(float)arg1 expanding:(char)arg2 ;
-(void)cropViewDraggingEndedWithVelocity:(float)arg1 ;
-(int)cropState;
-(void)minimizeCropWithVelocity:(float)arg1 ;
-(void)setCropState:(int)arg1 ;
-(id)cropOffsetYAnimationExpanding:(char)arg1 ;
-(float)minCropOffsetY;
-(void)setIsPushingCropView:(char)arg1 ;
-(void)setCropOffsetY:(float)arg1 ;
-(id)selectedAssetIdentifier;
-(void)continueWithAsset;
-(void)maybeShowAudioPermissionsDialog;
-(void)setChangingModes:(char)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(int)imageBufferCameraMode;
-(void)cameraDidTakePhotoWithBuffer:(id)arg1 ;
-(id)fullResolutionSource;
-(char)layoutButtonVisible;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)setImageBufferCameraMode:(int)arg1 ;
-(void)cameraWillTakePhotoWithPreviewBuffer:(id)arg1 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)setPlayTap:(UITapGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)cropPanMinimize;
-(void)setCropPanMinimize:(UIPanGestureRecognizer *)arg1 ;
-(void)setFlashMode:(int)arg1 ;
-(CGSize)previewImageSize;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(void)takePhoto;
-(IGEditorViewController *)currentEditor;
-(void)setCurrentEditor:(IGEditorViewController *)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(IGGridViewController *)gridViewController;
-(void)dealloc;
-(void)setDelegate:(id<IGMediaCaptureViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGMediaCaptureViewControllerDelegate>)delegate;
-(int)state;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)isBackgrounded;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(IGPagingScrollView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGPagingScrollView *)scrollView;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(void)setCameraMode:(int)arg1 ;
-(int)cameraMode;
-(void)setFlashButton:(IGTapButton *)arg1 ;
-(char)isChangingModes;
-(IGTapButton *)flashButton;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(void)startRecording;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(IGVideoPlayButton *)playButton;
@end

