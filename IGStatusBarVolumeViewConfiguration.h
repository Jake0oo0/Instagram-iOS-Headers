

@class UIColor;

@interface IGStatusBarVolumeViewConfiguration : NSObject {

	UIColor* _trackTintColor;
	UIColor* _trackValueTintColor;
	UIColor* _backgroundColor;
	float _volumeViewHeight;

}

@property (nonatomic,retain) UIColor * trackTintColor;                   //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackValueTintColor;              //@synthesize trackValueTintColor=_trackValueTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float volumeViewHeight;                     //@synthesize volumeViewHeight=_volumeViewHeight - In the implementation block
+(id)darkBackground;
+(id)defaultConfiguration;
-(void)setTrackValueTintColor:(UIColor *)arg1 ;
-(void)setVolumeViewHeight:(float)arg1 ;
-(UIColor *)trackValueTintColor;
-(float)volumeViewHeight;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)trackTintColor;
-(void)setTrackTintColor:(UIColor *)arg1 ;
@end

