
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGQuickCamControlBarDelegate;
@class IGTapButton, IGQuickCamCaptureButton, UIView;

@interface IGQuickCamControlBar : UIView {

	char _startCrop;
	int _state;
	id<IGQuickCamControlBarDelegate> _delegate;
	IGTapButton* _boomerangButton;
	IGTapButton* _switchCameraButton;
	IGQuickCamCaptureButton* _captureButton;
	IGTapButton* _backButton;
	IGTapButton* _cropButton;
	UIView* _overlay;

}

@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTapButton * boomerangButton;                                 //@synthesize boomerangButton=_boomerangButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                              //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                       //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * backButton;                                      //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) IGTapButton * cropButton;                                      //@synthesize cropButton=_cropButton - In the implementation block
@property (assign,nonatomic) char startCrop;                                                //@synthesize startCrop=_startCrop - In the implementation block
@property (nonatomic,retain) UIView * overlay;                                              //@synthesize overlay=_overlay - In the implementation block
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)setBoomerangButton:(IGTapButton *)arg1 ;
-(IGTapButton *)boomerangButton;
-(void)onBoomerangButtonTapped;
-(void)onBackButtonTapped;
-(void)setCropButton:(IGTapButton *)arg1 ;
-(IGTapButton *)cropButton;
-(void)onCropButtonTapped;
-(void)setStartCrop:(char)arg1 ;
-(void)toggleCropButtonColor;
-(char)startCrop;
-(void)toggleOverlay;
-(void)setCaptureButtonState:(int)arg1 ;
-(void)enableCaptureButton:(char)arg1 ;
-(char)captureButtonEnabled;
-(void)setCaptureButtonVideoRecordProgress:(float)arg1 ;
-(void)setSwitchCameraButtonAccessibilityValue:(id)arg1 ;
-(void)enableSwitchCameraButton:(char)arg1 ;
-(void)setCaptureButtonDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGQuickCamControlBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGQuickCamControlBarDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIView *)overlay;
-(void)setBackButton:(IGTapButton *)arg1 ;
-(void)setOverlay:(UIView *)arg1 ;
-(IGTapButton *)backButton;
@end
