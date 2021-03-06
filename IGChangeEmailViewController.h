
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGChangeEmailViewControllerDelegate;
@class IGTextField, NSString, UIBarButtonItem;

@interface IGChangeEmailViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	id<IGChangeEmailViewControllerDelegate> _delegate;
	IGTextField* _changeEmailField;
	NSString* _email;
	int _source;
	UIBarButtonItem* _doneButtonItem;

}

@property (nonatomic,retain) IGTextField * changeEmailField;                                       //@synthesize changeEmailField=_changeEmailField - In the implementation block
@property (nonatomic,copy) NSString * email;                                                       //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) int source;                                                           //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                     //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGChangeEmailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(IGTextField *)changeEmailField;
-(id)initWithEmail:(id)arg1 fromSource:(int)arg2 ;
-(void)setChangeEmailField:(IGTextField *)arg1 ;
-(void)setupNavigationItems;
-(void)setDelegate:(id<IGChangeEmailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGChangeEmailViewControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(int)source;
-(void)setSource:(int)arg1 ;
-(char)showsCancelButton;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)backButtonTapped;
-(NSString *)email;
-(void)doneButtonTapped;
-(void)setEmail:(NSString *)arg1 ;
@end

