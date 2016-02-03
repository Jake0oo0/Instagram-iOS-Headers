/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:19 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, IGVideoPlayerTargetViewDelegate;
@class NSObject, IGKVOHandle, AVQueuePlayer;

@interface IGVideoPlayerTargetView : UIView {

	NSObject*<OS_dispatch_queue> _workingQueue;
	id<IGVideoPlayerTargetViewDelegate> _delegate;
	IGKVOHandle* _readyToDisplayObserver;
	IGKVOHandle* _playerRateObserver;
	id _playerPlaybackObserver;

}

@property (nonatomic,retain) AVQueuePlayer * player; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workingQueue;                        //@synthesize workingQueue=_workingQueue - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlayerTargetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGKVOHandle * readyToDisplayObserver;                             //@synthesize readyToDisplayObserver=_readyToDisplayObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * playerRateObserver;                                 //@synthesize playerRateObserver=_playerRateObserver - In the implementation block
@property (nonatomic,retain) id playerPlaybackObserver;                                        //@synthesize playerPlaybackObserver=_playerPlaybackObserver - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 workingQueue:(id)arg2 ;
-(void)setWorkingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(IGKVOHandle *)playerRateObserver;
-(id)playerPlaybackObserver;
-(void)setPlayerRateObserver:(IGKVOHandle *)arg1 ;
-(void)setPlayerPlaybackObserver:(id)arg1 ;
-(IGKVOHandle *)readyToDisplayObserver;
-(void)setReadyToDisplayObserver:(IGKVOHandle *)arg1 ;
-(void)setPlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)player;
-(void)setDelegate:(id<IGVideoPlayerTargetViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGVideoPlayerTargetViewDelegate>)delegate;
@end

