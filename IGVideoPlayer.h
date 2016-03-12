
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol IGVideoPlayerDelegate, OS_dispatch_queue;
@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSObject, NSString;

@interface IGVideoPlayer : NSObject <AVPlayerItemOutputPullDelegate> {

	id _displayLinkTarget;
	char _looping;
	char _seeking;
	AVAsset* _asset;
	id<IGVideoPlayerDelegate> _delegate;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	AVPlayerItemVideoOutput* _videoOutput;
	CADisplayLink* _displayLink;
	NSObject*<OS_dispatch_queue> _videoOutputQueue;
	SCD_Struct_IG44 _startTime;
	SCD_Struct_IG44 _endTime;
	SCD_Struct_IG44 _seekTime;

}

@property (nonatomic,retain) AVAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (assign,nonatomic) SCD_Struct_IG44 startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG44 endTime;                                    //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IG44 currentTime; 
@property (nonatomic,readonly) SCD_Struct_IG44 duration; 
@property (assign,getter=isMuted,nonatomic) char muted; 
@property (assign,getter=isLooping,nonatomic) char looping;                              //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlayerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVPlayerItem * playerItem;                                  //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItemVideoOutput * videoOutput;                      //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoOutputQueue;              //@synthesize videoOutputQueue=_videoOutputQueue - In the implementation block
@property (assign,getter=isSeeking,nonatomic) char seeking;                              //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG44 seekTime;                                   //@synthesize seekTime=_seekTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playFromStart;
-(void)playFromTime:(SCD_Struct_IG44)arg1 ;
-(void)stopWithoutAnimation;
-(void)itemDidFinishPlaying;
-(NSObject*<OS_dispatch_queue>)videoOutputQueue;
-(void)displayLinkCallback:(id)arg1 ;
-(void)loadBufferAtItemTime:(SCD_Struct_IG44)arg1 ;
-(void)stopHelperAnimated:(char)arg1 ;
-(void)setVideoOutputQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)setLooping:(char)arg1 ;
-(char)isSeeking;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_IG44)arg1 ;
-(void)setMuted:(char)arg1 ;
-(void)setSeeking:(char)arg1 ;
-(SCD_Struct_IG44)currentTime;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)playerItem;
-(SCD_Struct_IG44)seekTime;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setSeekTime:(SCD_Struct_IG44)arg1 ;
-(AVPlayer *)player;
-(void)setDelegate:(id<IGVideoPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGVideoPlayerDelegate>)delegate;
-(SCD_Struct_IG44)duration;
-(void)setStartTime:(SCD_Struct_IG44)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(float)progress;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_IG44)startTime;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setVideoOutput:(AVPlayerItemVideoOutput *)arg1 ;
-(AVPlayerItemVideoOutput *)videoOutput;
-(SCD_Struct_IG44)endTime;
-(void)setEndTime:(SCD_Struct_IG44)arg1 ;
-(char)isMuted;
-(char)isLooping;
@end

