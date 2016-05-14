/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGEventViewerSoundStateListenerDelegate;
@interface IGEventViewerSoundStateListener : NSObject {

	char _shouldEnableAudio;
	id<IGEventViewerSoundStateListenerDelegate> _delegate;

}

@property (assign,nonatomic) char shouldEnableAudio;                                                   //@synthesize shouldEnableAudio=_shouldEnableAudio - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerSoundStateListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didReceiveMuteStateDidChangeNotification:(id)arg1 ;
-(void)didReceiveDidPressVolumeButtonNotification:(id)arg1 ;
-(void)setShouldEnableAudio:(char)arg1 ;
-(char)shouldEnableAudio;
-(void)setDelegate:(id<IGEventViewerSoundStateListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGEventViewerSoundStateListenerDelegate>)delegate;
@end

