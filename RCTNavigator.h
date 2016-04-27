
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/RCTWrapperViewControllerNavigationListener.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Instagram/RCTFrameUpdateObserver.h>

@class RCTBridge, UIView, NSArray, NSMutableArray, RCTNavigationController, NSTimer, NSString;

@interface RCTNavigator : UIView <RCTWrapperViewControllerNavigationListener, UINavigationControllerDelegate, RCTFrameUpdateObserver> {

	RCTBridge* _bridge;
	int _numberOfViewControllerMovesToIgnore;
	char _paused;
	/*^block*/id _pauseCallback;
	UIView* _reactNavSuperviewLink;
	int _requestedTopOfStack;
	/*^block*/id _onNavigationProgress;
	/*^block*/id _onNavigationComplete;
	int _previousRequestedTopOfStack;
	NSArray* _previousViews;
	NSMutableArray* _currentViews;
	RCTNavigationController* _navigationController;
	float _mostRecentProgress;
	NSTimer* _runTimer;
	int _currentlyTransitioningFrom;
	int _currentlyTransitioningTo;
	UIView* _dummyView;

}

@property (nonatomic,retain) UIView * reactNavSuperviewLink;                              //@synthesize reactNavSuperviewLink=_reactNavSuperviewLink - In the implementation block
@property (assign,nonatomic) int requestedTopOfStack;                                     //@synthesize requestedTopOfStack=_requestedTopOfStack - In the implementation block
@property (nonatomic,copy) id onNavigationProgress;                                       //@synthesize onNavigationProgress=_onNavigationProgress - In the implementation block
@property (nonatomic,copy) id onNavigationComplete;                                       //@synthesize onNavigationComplete=_onNavigationComplete - In the implementation block
@property (assign,nonatomic) int previousRequestedTopOfStack;                             //@synthesize previousRequestedTopOfStack=_previousRequestedTopOfStack - In the implementation block
@property (nonatomic,copy) NSArray * previousViews;                                       //@synthesize previousViews=_previousViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentViews;                               //@synthesize currentViews=_currentViews - In the implementation block
@property (nonatomic,retain) RCTNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) float mostRecentProgress;                                  //@synthesize mostRecentProgress=_mostRecentProgress - In the implementation block
@property (nonatomic,readonly) NSTimer * runTimer;                                        //@synthesize runTimer=_runTimer - In the implementation block
@property (nonatomic,readonly) int currentlyTransitioningFrom;                            //@synthesize currentlyTransitioningFrom=_currentlyTransitioningFrom - In the implementation block
@property (nonatomic,readonly) int currentlyTransitioningTo;                              //@synthesize currentlyTransitioningTo=_currentlyTransitioningTo - In the implementation block
@property (nonatomic,readonly) UIView * dummyView;                                        //@synthesize dummyView=_dummyView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPaused,nonatomic,readonly) char paused;                               //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) id pauseCallback;                                              //@synthesize pauseCallback=_pauseCallback - In the implementation block
-(id)reactViewController;
-(id)initWithBridge:(id)arg1 ;
-(void)didUpdateFrame:(id)arg1 ;
-(id)pauseCallback;
-(void)setPauseCallback:(id)arg1 ;
-(void)dispatchFakeScrollEvent;
-(void)freeLock;
-(UIView *)reactNavSuperviewLink;
-(void)handleTopOfStackChanged;
-(void)wrapperViewController:(id)arg1 didMoveToNavigationController:(id)arg2 ;
-(char)requestSchedulingJavaScriptNavigation;
-(void)setReactNavSuperviewLink:(UIView *)arg1 ;
-(int)requestedTopOfStack;
-(void)setRequestedTopOfStack:(int)arg1 ;
-(id)onNavigationProgress;
-(void)setOnNavigationProgress:(id)arg1 ;
-(id)onNavigationComplete;
-(void)setOnNavigationComplete:(id)arg1 ;
-(int)previousRequestedTopOfStack;
-(void)setPreviousRequestedTopOfStack:(int)arg1 ;
-(NSArray *)previousViews;
-(void)setPreviousViews:(NSArray *)arg1 ;
-(NSMutableArray *)currentViews;
-(void)setCurrentViews:(NSMutableArray *)arg1 ;
-(float)mostRecentProgress;
-(NSTimer *)runTimer;
-(int)currentlyTransitioningFrom;
-(int)currentlyTransitioningTo;
-(UIView *)dummyView;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(id)reactSuperview;
-(void)reactBridgeDidFinishTransaction;
-(char)isPaused;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(RCTNavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)setPaused:(char)arg1 ;
-(void)setNavigationController:(RCTNavigationController *)arg1 ;
@end
