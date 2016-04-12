
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <Instagram/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, IGCaptureManagerDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, IGVideoSessionDelegate;
@class AVCaptureVideoPreviewLayer, NSObject, AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, AVCaptureStillImageOutput, IGKVOHandle, IGSampleBuffer, IGTargetBlock, NSString;

@interface IGCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {

	double _targetBrightness;
	char _isCapturingStillImage;
	char _audioEnabled;
	char _focusRequested;
	char _flashFired;
	char _sessionStarted;
	char _startSessionOnEnteringForeground;
	char _needsResume;
	AVCaptureVideoPreviewLayer* _previewLayer;
	NSObject*<OS_dispatch_queue> _videoBufferQueue;
	id<IGCaptureManagerDelegate> _delegate;
	id<IGVideoSampleBufferDelegate> _videoBufferDelegate;
	id<IGAudioSampleBufferDelegate> _audioBufferDelegate;
	id<IGVideoSessionDelegate> _videoSessionDelegate;
	int _sessionPreset;
	AVCaptureSession* _videoSession;
	AVCaptureSession* _audioSession;
	NSObject*<OS_dispatch_queue> _captureQueue;
	AVCaptureDevice* _videoDevice;
	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureVideoDataOutput* _videoDataOutput;
	AVCaptureDeviceInput* _audioDeviceInput;
	NSObject*<OS_dispatch_queue> _audioBufferQueue;
	AVCaptureAudioDataOutput* _audioDataOutput;
	AVCaptureStillImageOutput* _stillImageOutput;
	IGKVOHandle* _flashActiveObserver;
	IGKVOHandle* _adjustingFocusObserver;
	IGKVOHandle* _adjustingExposureObserver;
	IGSampleBuffer* _imageBuffer;
	IGTargetBlock* _exposureUpdateBlock;
	CGSize _videoSizeForCurrentSessionPreset;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                               //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) char isCapturingStillImage;                                              //@synthesize isCapturingStillImage=_isCapturingStillImage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoBufferQueue;                           //@synthesize videoBufferQueue=_videoBufferQueue - In the implementation block
@property (assign,nonatomic,__weak) id<IGCaptureManagerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoSampleBufferDelegate> videoBufferDelegate;              //@synthesize videoBufferDelegate=_videoBufferDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGAudioSampleBufferDelegate> audioBufferDelegate;              //@synthesize audioBufferDelegate=_audioBufferDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoSessionDelegate> videoSessionDelegate;                  //@synthesize videoSessionDelegate=_videoSessionDelegate - In the implementation block
@property (assign,nonatomic) int cameraPosition; 
@property (assign,nonatomic) int sessionPreset;                                                       //@synthesize sessionPreset=_sessionPreset - In the implementation block
@property (assign,nonatomic) CGSize videoSizeForCurrentSessionPreset;                                 //@synthesize videoSizeForCurrentSessionPreset=_videoSizeForCurrentSessionPreset - In the implementation block
@property (assign,nonatomic) int flashMode; 
@property (assign,nonatomic) char audioEnabled;                                                       //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,retain) AVCaptureSession * videoSession;                                         //@synthesize videoSession=_videoSession - In the implementation block
@property (nonatomic,retain) AVCaptureSession * audioSession;                                         //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> captureQueue;                               //@synthesize captureQueue=_captureQueue - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * videoDevice;                                           //@synthesize videoDevice=_videoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * videoDeviceInput;                                 //@synthesize videoDeviceInput=_videoDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * videoDataOutput;                              //@synthesize videoDataOutput=_videoDataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioDeviceInput;                                 //@synthesize audioDeviceInput=_audioDeviceInput - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioBufferQueue;                           //@synthesize audioBufferQueue=_audioBufferQueue - In the implementation block
@property (nonatomic,retain) AVCaptureAudioDataOutput * audioDataOutput;                              //@synthesize audioDataOutput=_audioDataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * stillImageOutput;                            //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (assign,nonatomic) char focusRequested;                                                     //@synthesize focusRequested=_focusRequested - In the implementation block
@property (assign,nonatomic) char flashFired;                                                         //@synthesize flashFired=_flashFired - In the implementation block
@property (assign,nonatomic) char sessionStarted;                                                     //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (assign,nonatomic) char startSessionOnEnteringForeground;                                   //@synthesize startSessionOnEnteringForeground=_startSessionOnEnteringForeground - In the implementation block
@property (assign,nonatomic) char needsResume;                                                        //@synthesize needsResume=_needsResume - In the implementation block
@property (nonatomic,retain) IGKVOHandle * flashActiveObserver;                                       //@synthesize flashActiveObserver=_flashActiveObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * adjustingFocusObserver;                                    //@synthesize adjustingFocusObserver=_adjustingFocusObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * adjustingExposureObserver;                                 //@synthesize adjustingExposureObserver=_adjustingExposureObserver - In the implementation block
@property (nonatomic,retain) IGSampleBuffer * imageBuffer;                                            //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,retain) IGTargetBlock * exposureUpdateBlock;                                     //@synthesize exposureUpdateBlock=_exposureUpdateBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)deviceHasDualCameras;
+(char)deviceHasCamera;
+(CGRect)cameraCropRectForSize:(CGSize)arg1 ;
+(CGRect)cameraCropRectForImage:(id)arg1 ;
-(void)setVideoBufferDelegate:(id<IGVideoSampleBufferDelegate>)arg1 ;
-(void)setAudioBufferDelegate:(id<IGAudioSampleBufferDelegate>)arg1 ;
-(id)initWithCameraPosition:(int)arg1 sessionPreset:(int)arg2 audioEnabled:(char)arg3 ;
-(char)currentDeviceHasFlash;
-(void)switchCameras;
-(CGSize)videoSizeForCurrentSessionPreset;
-(char)focusAtPoint:(CGPoint)arg1 ;
-(char)exposeAtPoint:(CGPoint)arg1 ;
-(NSObject*<OS_dispatch_queue>)videoBufferQueue;
-(void)sessionNotification:(id)arg1 ;
-(void)setNeedsResume:(char)arg1 ;
-(void)setStartSessionOnEnteringForeground:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)captureQueue;
-(void)internalStartSession;
-(AVCaptureSession *)videoSession;
-(id<IGVideoSessionDelegate>)videoSessionDelegate;
-(IGKVOHandle *)adjustingFocusObserver;
-(IGKVOHandle *)adjustingExposureObserver;
-(IGKVOHandle *)flashActiveObserver;
-(char)focusRequested;
-(void)setFocusRequested:(char)arg1 ;
-(void)setAdjustingFocusObserver:(IGKVOHandle *)arg1 ;
-(void)setFlashFired:(char)arg1 ;
-(void)setFlashActiveObserver:(IGKVOHandle *)arg1 ;
-(AVCaptureDevice *)videoDevice;
-(AVCaptureVideoDataOutput *)videoDataOutput;
-(AVCaptureAudioDataOutput *)audioDataOutput;
-(NSObject*<OS_dispatch_queue>)audioBufferQueue;
-(void)configureVideoDeviceInput;
-(void)configureAudioDeviceInput;
-(char)canStartAudio;
-(char)needsResume;
-(AVCaptureSession *)audioSession;
-(char)startSessionOnEnteringForeground;
-(id<IGVideoSampleBufferDelegate>)videoBufferDelegate;
-(id<IGAudioSampleBufferDelegate>)audioBufferDelegate;
-(char)isUsingVideoSessionPreset;
-(AVCaptureDeviceInput *)videoDeviceInput;
-(id)capturePreset;
-(char)isUsingPhotoSessionPreset;
-(char)audioEnabled;
-(char)isAudioSessionAuthorized;
-(void)setVideoDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setIsCapturingStillImage:(char)arg1 ;
-(id)stringForApplicationState;
-(char)isVideoSessionRunning;
-(void)adjustBrightnessForCinema;
-(void)takePictureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setVideoBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVideoSessionDelegate:(id<IGVideoSessionDelegate>)arg1 ;
-(void)setVideoSizeForCurrentSessionPreset:(CGSize)arg1 ;
-(void)setVideoSession:(AVCaptureSession *)arg1 ;
-(void)setAudioSession:(AVCaptureSession *)arg1 ;
-(void)setCaptureQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVideoDevice:(AVCaptureDevice *)arg1 ;
-(void)setVideoDataOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(void)setAudioDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setAudioBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioDataOutput:(AVCaptureAudioDataOutput *)arg1 ;
-(void)setAdjustingExposureObserver:(IGKVOHandle *)arg1 ;
-(IGTargetBlock *)exposureUpdateBlock;
-(void)setExposureUpdateBlock:(IGTargetBlock *)arg1 ;
-(char)isCapturingStillImage;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGCaptureManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCaptureManagerDelegate>)delegate;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(int)flashMode;
-(char)flashFired;
-(AVCaptureDeviceInput *)audioDeviceInput;
-(int)sessionPreset;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setSessionPreset:(int)arg1 ;
-(void)setStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(AVCaptureStillImageOutput *)stillImageOutput;
-(void)setFlashMode:(int)arg1 ;
-(void)setSessionStarted:(char)arg1 ;
-(char)sessionStarted;
-(void)stopSession;
-(void)startAudioSession;
-(void)stopAudioSession;
-(IGSampleBuffer *)imageBuffer;
-(void)setImageBuffer:(IGSampleBuffer *)arg1 ;
-(int)cameraPosition;
-(void)setCameraPosition:(int)arg1 ;
-(void)startSession;
-(char)lockFocus;
-(char)unlockFocus;
-(void)applicationWillEnterForeground;
-(void)setDevice:(id)arg1 ;
@end

