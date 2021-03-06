

#import <Instagram/Instagram-Structs.h>
@class IGVideoClipRecorder;

@interface IGVideoRecorder : NSObject {

	int _state;
	int _position;
	IGVideoClipRecorder* _clipRecorder;
	CGSize _videoSize;

}

@property (nonatomic,retain) IGVideoClipRecorder * clipRecorder;              //@synthesize clipRecorder=_clipRecorder - In the implementation block
@property (assign) int state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) float runningTime; 
@property (assign,nonatomic) CGSize videoSize;                                //@synthesize videoSize=_videoSize - In the implementation block
@property (assign) int position;                                              //@synthesize position=_position - In the implementation block
-(id)initWithCameraPosition:(int)arg1 ;
-(char)handleVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(float)runningTime;
-(void)handleAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(IGVideoClipRecorder *)clipRecorder;
-(void)setClipRecorder:(IGVideoClipRecorder *)arg1 ;
-(CGSize)videoSize;
-(void)setVideoSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)startRecording;
-(void)stopRecordingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

