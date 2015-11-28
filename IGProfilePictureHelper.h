
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGTwitterProfilePictureDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@protocol IGProfilePictureHelperDelegate;
@class UIViewController, NSString;

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate> {

	char _showLocalOptionsOnly;
	char _showTwitter;
	id<IGProfilePictureHelperDelegate> _delegate;
	UIViewController* _viewController;
	NSString* _twitterTokenString;
	NSString* _twitterUsername;

}

@property (assign,nonatomic,__weak) id<IGProfilePictureHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) NSString * twitterTokenString;                                     //@synthesize twitterTokenString=_twitterTokenString - In the implementation block
@property (nonatomic,copy) NSString * twitterUsername;                                        //@synthesize twitterUsername=_twitterUsername - In the implementation block
@property (assign,nonatomic) char showTwitter;                                                //@synthesize showTwitter=_showTwitter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)facebookAuthDidFinish;
-(void)onTwitterLoginCompleted:(id)arg1 ;
-(void)imageTicketDidFail;
-(void)imageTicketDidFinishWithData:(id)arg1 ;
-(void)loadFacebookProfilePicture;
-(void)showActionSheet;
-(void)twitterLoggedOut:(id)arg1 ;
-(void)delegateDidFinishDownloadingProfilePicture:(id)arg1 ;
-(void)dismissCamera;
-(void)delegateWillStartDownloadingProfilePicture;
-(void)delegateDidFailDownloadingProfilePicture;
-(void)removeFacebookObserver;
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
-(void)twitterProfilePictureFailed;
-(void)importProfilePictureWithOption:(int)arg1 ;
-(NSString *)twitterTokenString;
-(void)setTwitterTokenString:(NSString *)arg1 ;
-(NSString *)twitterUsername;
-(void)setTwitterUsername:(NSString *)arg1 ;
-(char)showTwitter;
-(void)setShowTwitter:(char)arg1 ;
-(void)setDelegate:(id<IGProfilePictureHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGProfilePictureHelperDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end

