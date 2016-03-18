
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGTwitterProfilePictureDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@protocol IGProfilePictureHelperDelegate, UIViewControllerTransitioningDelegate;
@class UIViewController, NSString;

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate> {

	char _showLocalOptionsOnly;
	id<IGProfilePictureHelperDelegate> _delegate;
	UIViewController* _viewController;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;

}

@property (assign,nonatomic,__weak) id<IGProfilePictureHelperDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                        //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char showLocalOptionsOnly;                                                       //@synthesize showLocalOptionsOnly=_showLocalOptionsOnly - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logProfilePictureUpdatedWithOption:(int)arg1 ;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)facebookAuthDidFinish;
-(void)imageTicketDidFail;
-(void)imageTicketDidFinishWithData:(id)arg1 ;
-(void)loadFacebookProfilePicture;
-(void)showActionSheet;
-(void)openCameraWithMode:(int)arg1 ;
-(id<UIViewControllerTransitioningDelegate>)cameraTransitionDelegate;
-(void)delegateDidFinishDownloadingProfilePicture:(id)arg1 fromOption:(int)arg2 ;
-(void)delegateDidFailDownloadingProfilePicture;
-(void)delegateWillStartDownloadingProfilePicture;
-(void)loadFacebookProfilePictureWithFacebookUserInfo:(id)arg1 ;
-(void)onTwitterLoginCompleted:(id)arg1 ;
-(void)twitterLoginCancelled;
-(void)removeTwitterObserver;
-(void)loadTwitterProfilePicture;
-(char)delegateShouldShowRemoveCurrentPicture;
-(void)delegateWillPerformAction:(int)arg1 ;
-(void)delegateRemovePictureButtonTapped;
-(void)presentCamera;
-(void)presentPhotoLibrary;
-(void)presentFacebookLogin;
-(void)presentTwitterLogin;
-(void)importProfilePictureWithOption:(int)arg1 ;
-(char)showLocalOptionsOnly;
-(void)setShowLocalOptionsOnly:(char)arg1 ;
-(void)setCameraTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(void)setDelegate:(id<IGProfilePictureHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGProfilePictureHelperDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end

