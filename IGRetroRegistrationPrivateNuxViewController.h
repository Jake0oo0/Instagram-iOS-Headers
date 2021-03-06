
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGRetroRegistrationPrivateNuxViewControllerDelegate;
@class IGRetroRegistrationPrivateNuxView, NSString;

@interface IGRetroRegistrationPrivateNuxViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<IGRetroRegistrationPrivateNuxViewControllerDelegate> _delegate;
	IGRetroRegistrationPrivateNuxView* _privateNuxView;
	int _currentNuxOption;

}

@property (nonatomic,retain) IGRetroRegistrationPrivateNuxView * privateNuxView;                                   //@synthesize privateNuxView=_privateNuxView - In the implementation block
@property (assign,nonatomic) int currentNuxOption;                                                                 //@synthesize currentNuxOption=_currentNuxOption - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationPrivateNuxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextButtonTapped;
-(void)setPrivateNuxView:(IGRetroRegistrationPrivateNuxView *)arg1 ;
-(IGRetroRegistrationPrivateNuxView *)privateNuxView;
-(int)currentNuxOption;
-(void)setCurrentNuxOption:(int)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationPrivateNuxViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGRetroRegistrationPrivateNuxViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(char)prefersNavigationBarHidden;
@end

