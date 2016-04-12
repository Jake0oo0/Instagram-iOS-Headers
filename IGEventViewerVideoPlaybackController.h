/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedVideoPlayerPlaybackDelegate.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGEventViewerVideoPlaybackControllerDelegate;
@class IGFeedVideoManager, IGEventViewerAnalyticsLogger, IGEventViewerPlaybackItem, IGFeedVideoPlayer, NSString;

@interface IGEventViewerVideoPlaybackController : NSObject <IGFeedVideoPlayerPlaybackDelegate, IGFeedItemVideoViewDelegate> {

	char _audioEnabled;
	char _currentVideoDidPlayToEnd;
	id<IGEventViewerVideoPlaybackControllerDelegate> _delegate;
	IGFeedVideoManager* _feedVideoManager;
	IGEventViewerAnalyticsLogger* _logger;
	IGEventViewerPlaybackItem* _playbackItem;
	unsigned _videoRetryCount;
	float _currentVideoStartTime;

}

@property (assign,nonatomic,__weak) id<IGEventViewerVideoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,readonly) float currentDuration; 
@property (assign,nonatomic) char audioEnabled;                                                             //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                                       //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGEventViewerPlaybackItem * playbackItem;                                      //@synthesize playbackItem=_playbackItem - In the implementation block
@property (nonatomic,readonly) IGFeedVideoPlayer * currentPlayer; 
@property (assign,nonatomic) char currentVideoDidPlayToEnd;                                                 //@synthesize currentVideoDidPlayToEnd=_currentVideoDidPlayToEnd - In the implementation block
@property (assign,nonatomic) unsigned videoRetryCount;                                                      //@synthesize videoRetryCount=_videoRetryCount - In the implementation block
@property (assign,nonatomic) float currentVideoStartTime;                                                   //@synthesize currentVideoStartTime=_currentVideoStartTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedVideoManager *)feedVideoManager;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlay:(id)arg1 ;
-(void)feedItemVideoViewDidPauseWithEmptyBuffer:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2 ;
-(char)audioEnabled;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(void)playVideoForItem:(id)arg1 startTime:(float)arg2 ;
-(void)stopCurrentlyPlayingVideo;
-(char)isCurrentlyPlayingVideo;
-(IGEventViewerPlaybackItem *)playbackItem;
-(void)setPlaybackItem:(IGEventViewerPlaybackItem *)arg1 ;
-(id)initWithFeedVideoManager:(id)arg1 logger:(id)arg2 ;
-(void)setCurrentVideoStartTime:(float)arg1 ;
-(char)currentVideoDidPlayToEnd;
-(float)currentVideoStartTime;
-(void)setVideoRetryCount:(unsigned)arg1 ;
-(void)setCurrentVideoDidPlayToEnd:(char)arg1 ;
-(unsigned)videoRetryCount;
-(void)videoPlayerDidStartPlaying:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 isWaitingForBuffer:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(float)currentProgress;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGEventViewerVideoPlaybackControllerDelegate>)arg1 ;
-(id<IGEventViewerVideoPlaybackControllerDelegate>)delegate;
-(IGFeedVideoPlayer *)currentPlayer;
-(float)currentDuration;
@end

