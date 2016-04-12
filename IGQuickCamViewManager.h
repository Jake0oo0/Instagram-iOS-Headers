/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGCameraAccessPromptView, IGLibraryAccessPromptView, UIView;

@interface IGQuickCamViewManager : NSObject {

	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGLibraryAccessPromptView* _libraryAccessDeniedView;
	UIView* _contentContainerView;

}

@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;              //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentContainerView;                               //@synthesize contentContainerView=_contentContainerView - In the implementation block
-(void)showCameraPermissionDeniedView;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(void)showAudioPermissionsDeniedAlertView;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(id)initWithContentContainerView:(id)arg1 ;
-(void)showLibraryAccessDeniedView;
-(void)showDiscardEditsAlertViewWithDiscardBlock:(/*^block*/id)arg1 keepBlock:(/*^block*/id)arg2 ;
-(void)showPickDisabledAssetAnimation:(id)arg1 ;
-(UIView *)contentContainerView;
-(void)setContentContainerView:(UIView *)arg1 ;
@end

