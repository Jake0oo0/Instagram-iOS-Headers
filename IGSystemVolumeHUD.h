

@class MPVolumeView;

@interface IGSystemVolumeHUD : NSObject {

	MPVolumeView* _mediaPlayerVolumeView;

}

@property (nonatomic,retain) MPVolumeView * mediaPlayerVolumeView;              //@synthesize mediaPlayerVolumeView=_mediaPlayerVolumeView - In the implementation block
+(id)sharedHUD;
-(void)showSystemVolumeHUD:(char)arg1 ;
-(MPVolumeView *)mediaPlayerVolumeView;
-(void)setMediaPlayerVolumeView:(MPVolumeView *)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
@end

