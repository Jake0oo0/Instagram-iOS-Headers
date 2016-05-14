/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGAudioNUXControllerDelegate;
@class IGMediaOverlayIndicator;

@interface IGAudioNUXController : NSObject {

	char _hasShownPlaybackNUX;
	id<IGAudioNUXControllerDelegate> _delegate;
	IGMediaOverlayIndicator* _indicator;

}

@property (assign,nonatomic) char hasShownPlaybackNUX;                                      //@synthesize hasShownPlaybackNUX=_hasShownPlaybackNUX - In the implementation block
@property (assign,nonatomic,__weak) id<IGAudioNUXControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGMediaOverlayIndicator * indicator;                           //@synthesize indicator=_indicator - In the implementation block
-(void)didPressVolumeButton:(id)arg1 ;
-(IGMediaOverlayIndicator *)indicator;
-(void)setIndicator:(IGMediaOverlayIndicator *)arg1 ;
-(void)didChangeMuteSwitch:(id)arg1 ;
-(void)updateIndicatorWithAudioEnabled:(char)arg1 ;
-(void)showNUXForHardwareVolumeControl;
-(char)hasShownPlaybackNUX;
-(void)setHasShownPlaybackNUX:(char)arg1 ;
-(id)iconNameForAudioEnabled:(char)arg1 ;
-(id)initWithIndicator:(id)arg1 ;
-(void)showOneTapIndicatorNUXAnimated:(char)arg1 ;
-(void)didTapOnVideo;
-(void)setDelegate:(id<IGAudioNUXControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAudioNUXControllerDelegate>)delegate;
@end

