
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGSignInFormViewDelegate;
@class IGGroupedTableView, IGTextField, IGUser, NSString;

@interface IGSignInFormView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, IGCoreTextLinkHandler> {

	IGGroupedTableView* _tableView;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	int _currentField;
	char _submitting;
	char _fromReg;
	id<IGSignInFormViewDelegate> _delegate;
	IGUser* _user;

}

@property (assign,nonatomic,__weak) id<IGSignInFormViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) IGUser * user;                                             //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)validateAndSubmit;
-(char)clockIsIncorrect;
-(void)showMissingError:(id)arg1 ;
-(void)doFormSubmit;
-(void)configureFieldCell:(id)arg1 forRow:(int)arg2 ;
-(void)selectFieldAtRow:(int)arg1 ;
-(void)validateAndSubmitFromReg:(char)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setDelegate:(id<IGSignInFormViewDelegate>)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSignInFormViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)clearFields;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

