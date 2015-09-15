/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:44 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoWriterDelegate.h>

@protocol IGVideoRendererDelegate;
@class IGVideoComposition, IGMediaMetadata, IGVideoReader, IGVideoWriter, IGRenderer, IGSurface, IGStabilizationFilter, NSString;

@interface IGVideoRenderer : NSObject <IGVideoWriterDelegate> {

	double _prevTime;
	char _finished;
	char _saveWhenDone;
	char _canceled;
	IGVideoComposition* _video;
	IGMediaMetadata* _metadata;
	unsigned _retryCount;
	id<IGVideoRendererDelegate> _delegate;
	IGVideoReader* _videoReader;
	IGVideoWriter* _videoWriter;
	IGRenderer* _renderer;
	IGSurface* _stabilizedFrame;
	IGStabilizationFilter* _stabilizationFilter;

}

@property (nonatomic,retain) IGVideoComposition * video;                               //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * metadata;                               //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (assign) char finished;                                                      //@synthesize finished=_finished - In the implementation block
@property (assign) char saveWhenDone;                                                  //@synthesize saveWhenDone=_saveWhenDone - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGVideoReader * videoReader;                              //@synthesize videoReader=_videoReader - In the implementation block
@property (nonatomic,retain) IGVideoWriter * videoWriter;                              //@synthesize videoWriter=_videoWriter - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                    //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurface * stabilizedFrame;                              //@synthesize stabilizedFrame=_stabilizedFrame - In the implementation block
@property (nonatomic,retain) IGStabilizationFilter * stabilizationFilter;              //@synthesize stabilizationFilter=_stabilizationFilter - In the implementation block
@property (assign,nonatomic) char canceled;                                            //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideo:(id)arg1 ;
-(void)renderVideoWithMetadata:(id)arg1 ;
-(IGSurface *)stabilizedFrame;
-(void)setStabilizedFrame:(IGSurface *)arg1 ;
-(IGStabilizationFilter *)stabilizationFilter;
-(void)setStabilizationFilter:(IGStabilizationFilter *)arg1 ;
-(char)saveWhenDone;
-(void)setSaveWhenDone:(char)arg1 ;
-(IGVideoReader *)videoReader;
-(IGVideoWriter *)videoWriter;
-(CVBufferRef)nextRenderedPixelBufferForVideoWriter:(id)arg1 withAdaptor:(id)arg2 getPresentationTime:(SCD_Struct_IG57*)arg3 ;
-(opaqueCMSampleBufferRef)nextAudioSampleBufferForVideoWriter:(id)arg1 ;
-(void)videoWriter:(id)arg1 didFinishWritingVideoToURL:(id)arg2 ;
-(void)videoWriter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setVideoReader:(IGVideoReader *)arg1 ;
-(void)setVideoWriter:(IGVideoWriter *)arg1 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<IGVideoRendererDelegate>)arg1 ;
-(id<IGVideoRendererDelegate>)delegate;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(char)canceled;
-(void)setFinished:(char)arg1 ;
-(unsigned)retryCount;
-(char)finished;
-(IGVideoComposition *)video;
-(void)setMetadata:(IGMediaMetadata *)arg1 ;
-(IGMediaMetadata *)metadata;
-(void)setRetryCount:(unsigned)arg1 ;
-(IGRenderer *)renderer;
@end

