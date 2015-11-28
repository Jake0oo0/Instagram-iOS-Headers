
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIScrollViewDelegate.h>

@class IGVideoClip, IGTrimView, IGFilmStripView, IGTimeRulerView, UIScrollView, UIView, NSString;

@interface IGVideoTrimView : UIControl <UIScrollViewDelegate> {

	char _scrubbing;
	char _scrubbingFrames;
	IGVideoClip* _clip;
	IGTrimView* _trimView;
	IGFilmStripView* _filmStrip;
	IGTimeRulerView* _rulerView;
	UIScrollView* _scrollView;
	float _currentAssetDuration;
	float _pixelsPerSecond;
	UIView* _trackheadView;
	SCD_Struct_IG43 _scrubTime;
	SCD_Struct_IG43 _playbackTime;
	SCD_Struct_IG43 _beforeTrimStartTime;
	SCD_Struct_IG43 _beforeTrimEndTime;

}

@property (nonatomic,retain) IGVideoClip * clip;                               //@synthesize clip=_clip - In the implementation block
@property (nonatomic,readonly) unsigned draggingMode; 
@property (nonatomic,readonly) SCD_Struct_IG43 startTime; 
@property (nonatomic,readonly) SCD_Struct_IG43 endTime; 
@property (assign,nonatomic) SCD_Struct_IG43 scrubTime;                        //@synthesize scrubTime=_scrubTime - In the implementation block
@property (assign,nonatomic) char scrubbing;                                   //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG43 playbackTime;                     //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG43 beforeTrimStartTime;              //@synthesize beforeTrimStartTime=_beforeTrimStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG43 beforeTrimEndTime;                //@synthesize beforeTrimEndTime=_beforeTrimEndTime - In the implementation block
@property (nonatomic,retain) IGTrimView * trimView;                            //@synthesize trimView=_trimView - In the implementation block
@property (nonatomic,retain) IGFilmStripView * filmStrip;                      //@synthesize filmStrip=_filmStrip - In the implementation block
@property (nonatomic,retain) IGTimeRulerView * rulerView;                      //@synthesize rulerView=_rulerView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float currentAssetDuration;                       //@synthesize currentAssetDuration=_currentAssetDuration - In the implementation block
@property (assign,nonatomic) float pixelsPerSecond;                            //@synthesize pixelsPerSecond=_pixelsPerSecond - In the implementation block
@property (nonatomic,retain) UIView * trackheadView;                           //@synthesize trackheadView=_trackheadView - In the implementation block
@property (assign,nonatomic) char scrubbingFrames;                             //@synthesize scrubbingFrames=_scrubbingFrames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)pixelsPerSecond;
-(void)setPixelsPerSecond:(float)arg1 ;
-(unsigned)draggingMode;
-(void)setClip:(id)arg1 isMulticlip:(char)arg2 ;
-(IGTrimView *)trimView;
-(SCD_Struct_IG43)beforeTrimStartTime;
-(SCD_Struct_IG43)beforeTrimEndTime;
-(SCD_Struct_IG43)scrubTime;
-(char)scrubbing;
-(void)setTrimView:(IGTrimView *)arg1 ;
-(void)trimRangeChanged:(id)arg1 ;
-(void)postEditDidBegin;
-(void)trimViewEditingDidEnd;
-(UIView *)trackheadView;
-(void)postEditDidEnd;
-(void)setScrubTime:(SCD_Struct_IG43)arg1 ;
-(void)setPlaybackTime:(SCD_Struct_IG43)arg1 forceUpdate:(char)arg2 ;
-(void)setScrubbingFrames:(char)arg1 ;
-(void)setBeforeTrimStartTime:(SCD_Struct_IG43)arg1 ;
-(void)setBeforeTrimEndTime:(SCD_Struct_IG43)arg1 ;
-(float)dynamicPixelsPerSecond;
-(IGFilmStripView *)filmStrip;
-(void)setFilmStrip:(IGFilmStripView *)arg1 ;
-(IGTimeRulerView *)rulerView;
-(void)setRulerView:(IGTimeRulerView *)arg1 ;
-(float)currentAssetDuration;
-(void)setCurrentAssetDuration:(float)arg1 ;
-(void)setTrackheadView:(UIView *)arg1 ;
-(char)scrubbingFrames;
-(void)setScrubbing:(char)arg1 ;
-(SCD_Struct_IG43)playbackTime;
-(void)setPlaybackTime:(SCD_Struct_IG43)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(IGVideoClip *)clip;
-(SCD_Struct_IG43)startTime;
-(void)setClip:(IGVideoClip *)arg1 ;
-(SCD_Struct_IG43)endTime;
@end

