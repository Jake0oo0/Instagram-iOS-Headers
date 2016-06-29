
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGViewControllerType.h>
#import <Instagram/IGInlineGalleryHost.h>

@class UIBarButtonItem, IGAnalyticsMetadata, NSString, IGScreenshotObserver, IGKeyboardManager, UILongPressGestureRecognizer, NSMutableArray, IGNavigationController, IGTabBarController;

@interface IGViewController : UIViewController <IGAnalyticsModule, IGViewControllerType, IGInlineGalleryHost> {

	UIBarButtonItem* _backItem;
	IGAnalyticsMetadata* _analyticsMetadata;
	char _showsCancelButton;
	char _isInPopover;
	int _statusBarStyle;
	NSString* _clickPoint;
	NSString* _entityId;
	IGScreenshotObserver* _screenshotObserver;
	UIBarButtonItem* _loadingBarButtonItem;
	int _cancelButtonSide;
	IGKeyboardManager* _keyboardManager;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSMutableArray* _previewingContexts;

}

@property (nonatomic,retain) UIBarButtonItem * loadingBarButtonItem;                          //@synthesize loadingBarButtonItem=_loadingBarButtonItem - In the implementation block
@property (assign,nonatomic) int cancelButtonSide;                                            //@synthesize cancelButtonSide=_cancelButtonSide - In the implementation block
@property (nonatomic,__weak,readonly) IGKeyboardManager * keyboardManager;                    //@synthesize keyboardManager=_keyboardManager - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * previewingContexts;                             //@synthesize previewingContexts=_previewingContexts - In the implementation block
@property (assign,nonatomic) char showsCancelButton;                                          //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets preferredContentInsets; 
@property (nonatomic,readonly) IGNavigationController * navigationController; 
@property (nonatomic,readonly) IGTabBarController * tabBarController; 
@property (nonatomic,readonly) char disableNavigationGesture; 
@property (nonatomic,readonly) char disableNonEdgeNavigationGesture; 
@property (assign,nonatomic) char isInPopover;                                                //@synthesize isInPopover=_isInPopover - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                              //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,retain) NSString * clickPoint;                                           //@synthesize clickPoint=_clickPoint - In the implementation block
@property (nonatomic,retain) NSString * entityId;                                             //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) IGScreenshotObserver * screenshotObserver;                     //@synthesize screenshotObserver=_screenshotObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsMetadata;
-(char)enableNavState;
-(id)analyticsModule;
-(NSString *)entityId;
-(void)setEntityId:(NSString *)arg1 ;
-(void)showErrorMessage:(id)arg1 ;
-(void)onCancelModal;
-(char)prefersTabBarHidden;
-(UIBarButtonItem *)loadingBarButtonItem;
-(char)disableNavigationGesture;
-(char)disableNonEdgeNavigationGesture;
-(id)collectionViewWithStickyHeaders:(char)arg1 accessibilityIdentifier:(id)arg2 ;
-(void)adjustContentInsetsForCollectionView:(id)arg1 ;
-(IGScreenshotObserver *)screenshotObserver;
-(void)showModalDismissButtonWithTitle:(id)arg1 side:(int)arg2 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(IGKeyboardManager *)keyboardManager;
-(void)hideModalDismissButton;
-(int)cancelButtonSide;
-(void)didLongPress:(id)arg1 ;
-(NSMutableArray *)previewingContexts;
-(void)setPreviewingContexts:(NSMutableArray *)arg1 ;
-(char)shouldContinueUserActivity;
-(void)setLoadingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setCancelButtonSide:(int)arg1 ;
-(id)previewActionBarItems;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)updateAnalyticsMetadata:(id)arg1 ;
-(void)setIsInPopover:(char)arg1 ;
-(void)setClickPoint:(NSString *)arg1 ;
-(NSString *)clickPoint;
-(void)setTitle:(id)arg1 ;
-(id)navigationItem;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)setStatusBarStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)backItem;
-(IGNavigationController *)navigationController;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)extendedLayoutIncludesOpaqueBars;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)registerForPreviewingWithDelegate:(id)arg1 sourceView:(id)arg2 ;
-(void)unregisterForPreviewingWithContext:(id)arg1 ;
-(IGTabBarController *)tabBarController;
-(char)hidesBottomBarWhenPushed;
-(void)setHidesBottomBarWhenPushed:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 ;
-(char)isInPopover;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

