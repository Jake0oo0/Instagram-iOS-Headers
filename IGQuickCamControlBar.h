/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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

@property (nonatomic,retain) IGTapButton * boomerangButton;                                 //@synthesize boomerangButton=_boomerangButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                              //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                       //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * backButton;                                      //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) IGTapButton * cropButton;                                      //@synthesize cropButton=_cropButton - In the implementation block
@property (assign,nonatomic) char startCrop;                                                //@synthesize startCrop=_startCrop - In the implementation block
@property (nonatomic,retain) UIView * overlay;                                              //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setBoomerangButton:(IGTapButton *)arg1 ;
-(IGTapButton *)boomerangButton;
-(void)onBoomerangButtonTapped;
-(void)setStartCrop:(char)arg1 ;
-(IGTapButton *)cropButton;
-(void)toggleCropButtonColor;
-(void)setCropButton:(IGTapButton *)arg1 ;
-(void)onCropButtonTapped;
-(char)startCrop;
-(void)toggleOverlay;
-(void)enableCaptureButton:(char)arg1 ;
-(void)setCaptureButtonState:(int)arg1 ;
-(void)setSwitchCameraButtonAccessibilityValue:(id)arg1 ;
-(char)captureButtonEnabled;
-(void)setCaptureButtonVideoRecordProgress:(float)arg1 ;
-(void)setCaptureButtonDelegate:(id)arg1 ;
-(void)enableSwitchCameraButton:(char)arg1 ;
-(void)onBackButtonTapped;
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

