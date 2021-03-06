
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStatusBarWindowDelegate.h>

@protocol IGStatusBarWindowControllerDelegate;
@class NSObject, IGStatusBarWindow, NSString;

@interface IGStatusBarWindowController : NSObject <IGStatusBarWindowDelegate> {

	NSObject*<IGStatusBarWindowControllerDelegate> _delegate;
	IGStatusBarWindow* _statusBarWindow;

}

@property (nonatomic,retain) IGStatusBarWindow * statusBarWindow;                                         //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)statusBarViewFrameForStatusHidden:(char)arg1 ;
+(char)backToFacebookStatusBarVisible;
-(void)onAppDidEnterBackground:(id)arg1 ;
-(void)onWillPresentMediaFromFacebookApp:(id)arg1 ;
-(void)onTabChanged:(id)arg1 ;
-(void)onNavigationViewDidAppear:(id)arg1 ;
-(void)onCameraButtonTapped:(id)arg1 ;
-(void)showStatusBarView:(char)arg1 animated:(char)arg2 ;
-(void)statusBarWindowDidReceiveUserTap:(id)arg1 ;
-(void)setDelegate:(NSObject*<IGStatusBarWindowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGStatusBarWindowControllerDelegate>)delegate;
-(IGStatusBarWindow *)statusBarWindow;
-(void)setStatusBarWindow:(IGStatusBarWindow *)arg1 ;
@end

