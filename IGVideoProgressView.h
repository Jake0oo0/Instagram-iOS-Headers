
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoInfo, UIView, NSMutableArray, CADisplayLink;

@interface IGVideoProgressView : UIView {

	char _lastClipIsSelected;
	char _videoRecordingEnabled;
	char _isLive;
	char _shouldExpandLastClipToFillAllWidth;
	/*^block*/id _progressBlock;
	IGVideoInfo* _videoInfo;
	float _maxVideoDuration;
	UIView* _minDurationView;
	NSMutableArray* _clipBarViews;
	UIView* _runningTimeBarView;
	UIView* _blinkerView;
	CADisplayLink* _displayLink;
	int _counter;
	float _runningTime;

}

@property (nonatomic,retain) UIView * minDurationView;                             //@synthesize minDurationView=_minDurationView - In the implementation block
@property (nonatomic,retain) NSMutableArray * clipBarViews;                        //@synthesize clipBarViews=_clipBarViews - In the implementation block
@property (nonatomic,retain) UIView * runningTimeBarView;                          //@synthesize runningTimeBarView=_runningTimeBarView - In the implementation block
@property (nonatomic,retain) UIView * blinkerView;                                 //@synthesize blinkerView=_blinkerView - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                          //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) int counter;                                          //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) float runningTime;                                    //@synthesize runningTime=_runningTime - In the implementation block
@property (nonatomic,copy) id progressBlock;                                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) char lastClipIsSelected;                              //@synthesize lastClipIsSelected=_lastClipIsSelected - In the implementation block
@property (assign,nonatomic) char videoRecordingEnabled;                           //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) char isLive;                                          //@synthesize isLive=_isLive - In the implementation block
@property (assign,nonatomic) char shouldExpandLastClipToFillAllWidth;              //@synthesize shouldExpandLastClipToFillAllWidth=_shouldExpandLastClipToFillAllWidth - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                              //@synthesize videoInfo=_videoInfo - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                               //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
+(float)defaultHeight;
-(void)addClip:(id)arg1 ;
-(void)removeLastClip;
-(IGVideoInfo *)videoInfo;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(float)runningTime;
-(void)setMaxVideoDuration:(float)arg1 ;
-(void)setIsLive:(char)arg1 ;
-(void)setVideoRecordingEnabled:(char)arg1 ;
-(char)lastClipIsSelected;
-(void)setLastClipIsSelected:(char)arg1 ;
-(CGPoint)blinkerCenter;
-(float)maxVideoDuration;
-(UIView *)minDurationView;
-(void)onClipAdded:(id)arg1 ;
-(void)reloadAllClips;
-(UIView *)blinkerView;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(void)setRunningTime:(float)arg1 ;
-(void)updateBlinker;
-(NSMutableArray *)clipBarViews;
-(UIView *)runningTimeBarView;
-(char)videoRecordingEnabled;
-(char)shouldExpandLastClipToFillAllWidth;
-(void)setShouldExpandLastClipToFillAllWidth:(char)arg1 ;
-(void)setMinDurationView:(UIView *)arg1 ;
-(void)setClipBarViews:(NSMutableArray *)arg1 ;
-(void)setRunningTimeBarView:(UIView *)arg1 ;
-(void)setBlinkerView:(UIView *)arg1 ;
-(char)isLive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(int)counter;
-(void)setCounter:(int)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

