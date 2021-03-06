

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
-(void)showLibraryAccessDeniedView;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(void)showAudioPermissionsDeniedAlertView;
-(id)initWithContentContainerView:(id)arg1 ;
-(void)showDiscardEditsAlertViewWithDiscardBlock:(/*^block*/id)arg1 keepBlock:(/*^block*/id)arg2 ;
-(void)showPickDisabledAssetAnimation:(id)arg1 ;
-(UIView *)contentContainerView;
-(void)setContentContainerView:(UIView *)arg1 ;
@end

