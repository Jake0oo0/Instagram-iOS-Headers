/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:18 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoPlayerTargetViewDelegate.h>

@protocol IGFeedVideoPlayerDelegate, IGFeedVideoPlayerPlaybackDelegate, OS_dispatch_queue;
@class AVPlayerItem, AVURLAsset, NSObject, IGVideoPlayerTargetView, NSURL, IGKVOHandle, NSString;

@interface IGFeedVideoPlayer : NSObject <IGVideoPlayerTargetViewDelegate> {

	char _audioEnabled;
	char _assetHasAudio;
	char _looping;
	char _hasError;
	char _requiresResetPlayer;
	char _readyToPlay;
	char _playedFirstFrame;
	float _duration;
	int _loopCount;
	id<IGFeedVideoPlayerDelegate> _delegate;
	id<IGFeedVideoPlayerPlaybackDelegate> _playbackDelegate;
	AVPlayerItem* _streamingPlayerItem;
	AVURLAsset* _asset;
	NSObject*<OS_dispatch_queue> _playerQueue;
	IGVideoPlayerTargetView* _videoTargetView;
	NSURL* _URL;
	NSURL* _loadingURL;
	float _rate;
	IGKVOHandle* _playerItemStatusObserver;
	IGKVOHandle* _playerItemPlaybackLikelyToKeepUpObserver;
	IGKVOHandle* _playerItemPlaybackBufferEmptyObserver;
	IGKVOHandle* _playerItemPlaybackBufferFullObserver;
	IGKVOHandle* _playerItemTimeRangeObserver;

}

@property (assign,nonatomic) float duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) char audioEnabled;                                    //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) char assetHasAudio;                                                         //@synthesize assetHasAudio=_assetHasAudio - In the implementation block
@property (assign,getter=isLooping,nonatomic) char looping;                                              //@synthesize looping=_looping - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (assign,nonatomic) char hasError;                                                              //@synthesize hasError=_hasError - In the implementation block
@property (assign,nonatomic) char requiresResetPlayer;                                                   //@synthesize requiresResetPlayer=_requiresResetPlayer - In the implementation block
@property (assign,nonatomic) int loopCount;                                                              //@synthesize loopCount=_loopCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoPlayerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoPlayerPlaybackDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (nonatomic,retain) AVPlayerItem * streamingPlayerItem;                                         //@synthesize streamingPlayerItem=_streamingPlayerItem - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playerQueue;                                   //@synthesize playerQueue=_playerQueue - In the implementation block
@property (nonatomic,retain) IGVideoPlayerTargetView * videoTargetView;                                  //@synthesize videoTargetView=_videoTargetView - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSURL * loadingURL;                                                         //@synthesize loadingURL=_loadingURL - In the implementation block
@property (assign,nonatomic) char readyToPlay;                                                           //@synthesize readyToPlay=_readyToPlay - In the implementation block
@property (assign,nonatomic) char playedFirstFrame;                                                      //@synthesize playedFirstFrame=_playedFirstFrame - In the implementation block
@property (assign,nonatomic) float rate;                                                                 //@synthesize rate=_rate - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemStatusObserver;                                     //@synthesize playerItemStatusObserver=_playerItemStatusObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackLikelyToKeepUpObserver;                     //@synthesize playerItemPlaybackLikelyToKeepUpObserver=_playerItemPlaybackLikelyToKeepUpObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackBufferEmptyObserver;                        //@synthesize playerItemPlaybackBufferEmptyObserver=_playerItemPlaybackBufferEmptyObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemPlaybackBufferFullObserver;                         //@synthesize playerItemPlaybackBufferFullObserver=_playerItemPlaybackBufferFullObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerItemTimeRangeObserver;                                  //@synthesize playerItemTimeRangeObserver=_playerItemTimeRangeObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_IG16)playbackEndTimeForAsset:(id)arg1 ;
-(void)loadVideoForURL:(id)arg1 ;
-(void)prepareForReuseWithCompletion:(/*^block*/id)arg1 ;
-(char)requiresResetPlayer;
-(void)loadVideoForURL:(id)arg1 resourceLoaderDelegate:(id)arg2 queue:(id)arg3 ;
-(void)assetFailedToPrepareForPlayback:(id)arg1 ;
-(void)removeStreamingPlayerItemObservers;
-(void)dispatchSyncOnPlayerQueueOrCurrent:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playerQueue;
-(IGVideoPlayerTargetView *)videoTargetView;
-(void)dispatchAsyncOnPlayerQueue:(/*^block*/id)arg1 ;
-(void)setReadyToPlay:(char)arg1 ;
-(void)setPlayerItemStatusObserver:(IGKVOHandle *)arg1 ;
-(void)playbackLikelyToKeepUp:(char)arg1 ;
-(void)setPlayerItemPlaybackLikelyToKeepUpObserver:(IGKVOHandle *)arg1 ;
-(void)playbackBufferEmpty:(char)arg1 ;
-(void)setPlayerItemPlaybackBufferEmptyObserver:(IGKVOHandle *)arg1 ;
-(void)playbackBufferFull:(char)arg1 ;
-(void)setPlayerItemPlaybackBufferFullObserver:(IGKVOHandle *)arg1 ;
-(int)loopCount;
-(void)setLoopCount:(int)arg1 ;
-(AVPlayerItem *)streamingPlayerItem;
-(void)setStreamingPlayerItem:(AVPlayerItem *)arg1 ;
-(id)newPlayerItemForAsset:(id)arg1 ;
-(void)setRequiresResetPlayer:(char)arg1 ;
-(void)setLoadingURL:(NSURL *)arg1 ;
-(void)setPlayedFirstFrame:(char)arg1 ;
-(NSURL *)loadingURL;
-(void)setAssetHasAudio:(char)arg1 ;
-(void)preparePlayerWithAsset:(id)arg1 ;
-(void)prepareToPlayURL:(id)arg1 resourceLoaderDelegate:(id)arg2 queue:(id)arg3 ;
-(char)playedFirstFrame;
-(char)readyToPlay;
-(void)onPlaybackTimeChanged:(SCD_Struct_IG16)arg1 ;
-(void)videoPlayerViewIsReadyToDisplay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didChangePlaybackRate:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didChangePlaybackTime:(SCD_Struct_IG16)arg2 ;
-(void)onTimeRangesUpdated:(id)arg1 ;
-(char)assetHasAudio;
-(void)setPlayerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVideoTargetView:(IGVideoPlayerTargetView *)arg1 ;
-(IGKVOHandle *)playerItemStatusObserver;
-(IGKVOHandle *)playerItemPlaybackLikelyToKeepUpObserver;
-(IGKVOHandle *)playerItemPlaybackBufferEmptyObserver;
-(IGKVOHandle *)playerItemPlaybackBufferFullObserver;
-(IGKVOHandle *)playerItemTimeRangeObserver;
-(void)setPlayerItemTimeRangeObserver:(IGKVOHandle *)arg1 ;
-(id<IGFeedVideoPlayerPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<IGFeedVideoPlayerPlaybackDelegate>)arg1 ;
-(void)setLooping:(char)arg1 ;
-(float)currentTime;
-(float)rate;
-(void)play;
-(char)isAudioEnabled;
-(void)setAudioEnabled:(char)arg1 ;
-(char)isPlaying;
-(id)player;
-(void)setDelegate:(id<IGFeedVideoPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFeedVideoPlayerDelegate>)delegate;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(void)pause;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(char)isLooping;
-(void)setRate:(float)arg1 ;
-(void)setHasError:(char)arg1 ;
-(char)hasError;
@end

