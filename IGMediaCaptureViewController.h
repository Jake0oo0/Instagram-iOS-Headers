/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
#import <Instagram/IGAppInstallAlertViewControllerDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGMediaCaptureViewControllerDelegate, OS_dispatch_queue;
@class IGMediaMetadata, IGGridViewController, IGMediaTabBar, IGPagingScrollView, NSArray, IGCameraAccessPromptView, IGSampleBuffer, UIView, NSOperationQueue, IGCaptureManager, IGVideoRecorder, NSObject, IGVideoInfo, IGCameraFocusIndicator, IGCameraModeTransitionOverlayView, IGMediaCaptureButton, IGVideoCaptureDeleteButton, IGTapButton, IGVideoProgressView, IGStabilizationSampler, IGDirectedNUXView, IGDeviceAngleSampler, IGAppInstallationsHelper, IGCropView, IGCircularProgressView, UIImageView, IGNuxButton, IGAssetPlayerView, IGVideoPlayButton, UITapGestureRecognizer, IGCameraGuideView, IGLabel, IGEmptyLibraryView, UIPanGestureRecognizer, NSMutableDictionary, NSDictionary, UIBarButtonItem, IGChevronTitleButton, IGSelectAlbumController, IGEditorViewController, IGAppInstallAlertViewController, NSString;

@interface IGMediaCaptureViewController : IGBaseCameraViewController <IGAssetPlayerViewDelegate, IGCaptureManagerDelegate, IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, IGMediaCaptureButtonDelegate, IGSelectAlbumDelegate, IGAppInstallAlertViewControllerDelegate, IGCropViewUserInteractionDelegate, UIScrollViewDelegate> {

	char _shouldCaptureFrames;
	char _isBackgrounded;
	char _gridViewIsLoaded;
	char _hasStartedCapture;
	char _shouldDelayStartCapture;
	char _changingModes;
	char _layoutButtonVisible;
	char _shouldShowDownloadLayoutNuxIfUnseen;
	char _shouldAutoPlayVideo;
	char _wasPlayingVideo;
	char _isPushingCropView;
	id<IGMediaCaptureViewControllerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	int _state;
	int _mode;
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
	UIView* _cropContentsContainer;
	IGCropView* _cropView;
	IGCropView* _videoCoverFrameImageView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	UIImageView* _loadingThumbnailView;
	id _previewAsset;
	IGTapButton* _layoutButton;
	IGNuxButton* _boomerangButton;
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
	unsigned _contentEditingInputRequestID;
	NSMutableDictionary* _pendingVideoRequests;
	NSDictionary* _metadata;
	id _fullResolutionSource;
	/*^block*/id _fullResolutionCompletionBlock;
	/*^block*/id _multiClipCompletionBlock;
	id _selectedAsset;
	NSMutableDictionary* _selectedVideos;
	UIBarButtonItem* _dismissButtonItem;
	UIBarButtonItem* _libraryNextButtonItem;
	UIBarButtonItem* _libraryLoadingNextButtonItem;
	UIBarButtonItem* _videoNextButtonItem;
	IGChevronTitleButton* _chevronTitleButton;
	IGSelectAlbumController* _selectAlbumVC;
	IGEditorViewController* _currentEditor;
	IGAppInstallAlertViewController* _layoutAlertViewController;
	IGAppInstallAlertViewController* _boomerangAlertViewController;
	CGSize _previewImageSize;

}

@property (assign,nonatomic,__weak) id<IGMediaCaptureViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                                  //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                              //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,nonatomic) int state;                                                                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int mode;                                                                         //@synthesize mode=_mode - In the implementation block
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
@property (nonatomic,retain) UIView * cropContentsContainer;                                                   //@synthesize cropContentsContainer=_cropContentsContainer - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                            //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCropView * videoCoverFrameImageView;                                            //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                                      //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                               //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id previewAsset;                                                                  //@synthesize previewAsset=_previewAsset - In the implementation block
@property (assign,nonatomic) char layoutButtonVisible;                                                         //@synthesize layoutButtonVisible=_layoutButtonVisible - In the implementation block
@property (assign,nonatomic) char shouldShowDownloadLayoutNuxIfUnseen;                                         //@synthesize shouldShowDownloadLayoutNuxIfUnseen=_shouldShowDownloadLayoutNuxIfUnseen - In the implementation block
@property (nonatomic,retain) IGTapButton * layoutButton;                                                       //@synthesize layoutButton=_layoutButton - In the implementation block
@property (nonatomic,retain) IGNuxButton * boomerangButton;                                                    //@synthesize boomerangButton=_boomerangButton - In the implementation block
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
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                            //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingVideoRequests;                                       //@synthesize pendingVideoRequests=_pendingVideoRequests - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) CGSize previewImageSize;                                                          //@synthesize previewImageSize=_previewImageSize - In the implementation block
@property (nonatomic,retain) id fullResolutionSource;                                                          //@synthesize fullResolutionSource=_fullResolutionSource - In the implementation block
@property (nonatomic,copy) id fullResolutionCompletionBlock;                                                   //@synthesize fullResolutionCompletionBlock=_fullResolutionCompletionBlock - In the implementation block
@property (nonatomic,copy) id multiClipCompletionBlock;                                                        //@synthesize multiClipCompletionBlock=_multiClipCompletionBlock - In the implementation block
@property (nonatomic,retain) id selectedAsset;                                                                 //@synthesize selectedAsset=_selectedAsset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedVideos;                                             //@synthesize selectedVideos=_selectedVideos - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * dismissButtonItem;                                              //@synthesize dismissButtonItem=_dismissButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryNextButtonItem;                                          //@synthesize libraryNextButtonItem=_libraryNextButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryLoadingNextButtonItem;                                   //@synthesize libraryLoadingNextButtonItem=_libraryLoadingNextButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * videoNextButtonItem;                                            //@synthesize videoNextButtonItem=_videoNextButtonItem - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                                        //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                                          //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (assign,nonatomic,__weak) IGEditorViewController * currentEditor;                                    //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,retain) IGAppInstallAlertViewController * layoutAlertViewController;                      //@synthesize layoutAlertViewController=_layoutAlertViewController - In the implementation block
@property (nonatomic,retain) IGAppInstallAlertViewController * boomerangAlertViewController;                   //@synthesize boomerangAlertViewController=_boomerangAlertViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appInstallAlertViewDidConfirm:(id)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(void)captureDeviceDidSatisfyFocusRequest;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionWillTakePhoto;
-(IGCropView *)cropView;
-(char)usePhotosFramework;
-(char)overlayIsOpaque;
-(IGDirectedNUXView *)NUXView;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(char)prefersToolbarHidden;
-(void)hideNUX;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(IGCaptureManager *)captureManager;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(char)gridViewController:(id)arg1 isAssetLoadedInPlayer:(id)arg2 ;
-(void)gridViewController:(id)arg1 didDeselectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerDidScroll:(id)arg1 ;
-(void)gridViewControllerDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)mediaCaptureButtonDidTakePicture;
-(void)mediaCaptureButtonDidEndRecording;
-(void)mediaCaptureButtonDidBeginRecording;
-(IGVideoProgressView *)videoProgressView;
-(NSMutableDictionary *)pendingVideoRequests;
-(void)assertModeIsValid;
-(int)preferredDevicePosition;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setDeviceAngleSampler:(IGDeviceAngleSampler *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)setCameraModeQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)cameraModeQueue;
-(void)onCancelButtonTapped;
-(void)onClipAdded:(id)arg1 ;
-(void)onClipRemoved;
-(IGDeviceAngleSampler *)deviceAngleSampler;
-(void)setPendingVideoRequests:(NSMutableDictionary *)arg1 ;
-(char)allowTabScrolling;
-(void)setCameraContainerView:(UIView *)arg1 ;
-(UIView *)cameraContainerView;
-(void)setCaptureView:(UIView *)arg1 ;
-(UIView *)captureView;
-(void)captureViewTap:(id)arg1 ;
-(void)captureViewLongPress:(id)arg1 ;
-(void)setDisabledOverlayView:(UIView *)arg1 ;
-(UIView *)disabledOverlayView;
-(void)setCameraModeTransitionOverlayView:(IGCameraModeTransitionOverlayView *)arg1 ;
-(IGCameraModeTransitionOverlayView *)cameraModeTransitionOverlayView;
-(void)onFlashButtonTapped;
-(void)setSwitchCamerasButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCamerasButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setFocusIndicator:(IGCameraFocusIndicator *)arg1 ;
-(IGCameraFocusIndicator *)focusIndicator;
-(void)onVideoNextButtonTapped;
-(void)setVideoNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(void)setVideoProgressView:(IGVideoProgressView *)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)setPhotoCaptureButton:(IGMediaCaptureButton *)arg1 ;
-(IGMediaCaptureButton *)photoCaptureButton;
-(CGRect)frameForCaptureButton:(id)arg1 pageIndex:(int)arg2 ;
-(void)setVideoCaptureButton:(IGMediaCaptureButton *)arg1 ;
-(IGMediaCaptureButton *)videoCaptureButton;
-(void)setVideoDeleteButton:(IGVideoCaptureDeleteButton *)arg1 ;
-(IGVideoCaptureDeleteButton *)videoDeleteButton;
-(void)onVideoDeleteButtonTapped;
-(void)onVideoDeleteButtonLongPressed:(id)arg1 ;
-(void)setDismissButtonItem:(UIBarButtonItem *)arg1 ;
-(void)showLibraryAccessDeniedDialog;
-(void)insertMediaTabBar;
-(unsigned)assetFilterTypeForMediaCaptureMode:(int)arg1 ;
-(IGAssetSelectionMechanic)assetSelectionMechanicForMediaCaptureMode:(int)arg1 ;
-(NSMutableDictionary *)selectedVideos;
-(void)setCropContainer:(UIView *)arg1 ;
-(UIView *)cropContainer;
-(void)setCropContentsContainer:(UIView *)arg1 ;
-(UIView *)cropContentsContainer;
-(void)setCropView:(IGCropView *)arg1 ;
-(void)panCrop:(id)arg1 ;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(void)onCropViewSingleTap;
-(void)toggleCropperCropMode;
-(void)setLongcatButton:(IGTapButton *)arg1 ;
-(IGTapButton *)longcatButton;
-(void)toggleCropperCropModeFromButton;
-(void)setLayoutButton:(IGTapButton *)arg1 ;
-(IGTapButton *)layoutButton;
-(void)layoutButtonTapped;
-(void)setLayoutButtonVisible:(char)arg1 ;
-(void)setShouldShowDownloadLayoutNuxIfUnseen:(char)arg1 ;
-(char)boomerangButtonEnabled;
-(void)setBoomerangButton:(IGNuxButton *)arg1 ;
-(IGNuxButton *)boomerangButton;
-(void)boomerangButtonTapped;
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
-(void)setNoMediaView:(IGEmptyLibraryView *)arg1 ;
-(IGEmptyLibraryView *)noMediaView;
-(void)setCropOverlayView:(UIView *)arg1 ;
-(UIView *)cropOverlayView;
-(void)setStartCropMaxY:(float)arg1 ;
-(float)tabBarHeight;
-(void)onLibraryNextButtonTapped;
-(void)setLibraryNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setLibraryLoadingNextButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryLoadingNextButtonItem;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(void)onAlbumTitleTapped;
-(IGSelectAlbumController *)selectAlbumVC;
-(id)selectedAsset;
-(int)assetType:(id)arg1 ;
-(char)shouldAutoPlayVideo;
-(void)pauseVideoPlayer;
-(char)inMultiClipMode;
-(IGMediaTabBar *)mediaTabBar;
-(void)updateVideoState;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(char)gridViewIsLoaded;
-(void)setShouldDelayStartCapture:(char)arg1 ;
-(char)hasStartedCapture;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)showCameraPermissionDeniedView;
-(void)onOrientationChange;
-(void)updateStabilizationSampler;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
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
-(char)showsMediaTabBar;
-(void)setMediaTabBar:(IGMediaTabBar *)arg1 ;
-(void)tabBarButtonTapped;
-(char)wasPlayingVideo;
-(void)playVideoPlayer;
-(void)setCameraMode:(int)arg1 animated:(char)arg2 ;
-(char)shouldDelayStartCapture;
-(void)setVerticalOffset;
-(void)setNavigationBarButtons;
-(void)setWasPlayingVideo:(char)arg1 ;
-(id)fullResolutionCompletionBlock;
-(id)multiClipCompletionBlock;
-(UIBarButtonItem *)libraryNextButtonItem;
-(UIBarButtonItem *)dismissButtonItem;
-(UIBarButtonItem *)videoNextButtonItem;
-(void)selectFirstAsset;
-(void)showSelectAlbumController:(char)arg1 ;
-(id)assetIdentifierForAsset:(id)arg1 ;
-(double)durationForAsset:(id)arg1 ;
-(char)allVideosCompatible;
-(char)videoTotalDurationValid;
-(void)setShouldAutoPlayVideo:(char)arg1 ;
-(void)setCropAsset:(id)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(void)expandCropWithVelocity:(float)arg1 expanding:(char)arg2 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(void)setSelectedVideos:(NSMutableDictionary *)arg1 ;
-(void)setFullResolutionSource:(id)arg1 ;
-(void)setFullResolutionCompletionBlock:(id)arg1 ;
-(void)setMultiClipCompletionBlock:(id)arg1 ;
-(UITapGestureRecognizer *)playTap;
-(void)setBoomerangButtonPositionForAsset:(id)arg1 ;
-(void)hideLoadingViews;
-(void)showDownloadLayoutNUX;
-(char)allVideosLoaded;
-(void)updateVideoLibraryNextButtonEnabled;
-(void)showMinDurationAssetNUX;
-(id)previewAsset;
-(void)setPreviewAsset:(id)arg1 ;
-(void)showCouldNotLoadAlert:(int)arg1 ;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(void)focusAndExpose:(CGPoint)arg1 ;
-(CGPoint)scaledPointAtTapLocation:(CGPoint)arg1 ;
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
-(void)showLayoutAppInstallAlertViewPopover;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)showBoomerangAppInstallAlertViewPopover;
-(void)continueWithAsset;
-(void)updateVideoSize;
-(void)showVideoTooShortNUX;
-(void)showHoldToRecordNUX;
-(void)maybeShowAudioPermissionsDialog;
-(void)setChangingModes:(char)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(int)imageBufferCameraMode;
-(IGStabilizationSampler *)stabilizer;
-(void)setPhotoDeviceOrientation:(int)arg1 ;
-(float)radianOffsetForCurrentOrientation;
-(void)setPhotoDeviceAngle:(float)arg1 ;
-(int)photoDeviceOrientation;
-(float)photoDeviceAngle;
-(void)cameraDidTakePhotoWithBuffer:(id)arg1 ;
-(char)shouldSaveToLibrary;
-(char)canCaptureAnotherClip;
-(void)showVideoNextNUX;
-(id)fullResolutionSource;
-(void)showInvalidVideoNUX;
-(void)showMinDurationVideoNUX;
-(void)updateClipCropRect;
-(void)proceedWithVideoComposition:(id)arg1 ;
-(char)layoutButtonVisible;
-(char)cameraIsReady;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)setImageBufferCameraMode:(int)arg1 ;
-(void)cameraWillTakePhotoWithPreviewBuffer:(id)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(char)shouldShowDownloadLayoutNuxIfUnseen;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG16)arg2 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(char)modeAllowsState:(int)arg1 ;
-(void)setPlayTap:(UITapGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)cropPanMinimize;
-(void)setCropPanMinimize:(UIPanGestureRecognizer *)arg1 ;
-(IGAppInstallAlertViewController *)layoutAlertViewController;
-(void)setLayoutAlertViewController:(IGAppInstallAlertViewController *)arg1 ;
-(IGAppInstallAlertViewController *)boomerangAlertViewController;
-(void)setBoomerangAlertViewController:(IGAppInstallAlertViewController *)arg1 ;
-(CGSize)previewImageSize;
-(void)takePhoto;
-(IGEditorViewController *)currentEditor;
-(void)setCurrentEditor:(IGEditorViewController *)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(IGGridViewController *)gridViewController;
-(void)setDelegate:(id<IGMediaCaptureViewControllerDelegate>)arg1 ;
-(void)dealloc;
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
-(char)isBackgrounded;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setScrollView:(IGPagingScrollView *)arg1 ;
-(IGPagingScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(id)initWithMode:(int)arg1 ;
-(char)isChangingModes;
-(void)setFlashButton:(IGTapButton *)arg1 ;
-(IGTapButton *)flashButton;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(void)setFlashMode:(int)arg1 ;
-(void)startRecording;
-(double)totalDuration;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setState:(int)arg1 animated:(char)arg2 ;
-(void)setCameraMode:(int)arg1 ;
-(int)cameraMode;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setPlayButton:(IGVideoPlayButton *)arg1 ;
-(IGVideoPlayButton *)playButton;
@end

