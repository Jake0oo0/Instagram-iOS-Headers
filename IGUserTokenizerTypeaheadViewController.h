
#import <Instagram/IGViewController.h>
#import <Instagram/IGUsertagTableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGTokenFieldDelegate.h>

@protocol IGUserTokenizerTypeaheadViewControllerDelegate;
@class NSSet, IGTokenField, IGUsertagTableView, IGSimpleFrameButton, NSString;

@interface IGUserTokenizerTypeaheadViewController : IGViewController <IGUsertagTableViewDelegate, UITextFieldDelegate, IGTokenFieldDelegate> {

	id<IGUserTokenizerTypeaheadViewControllerDelegate> _delegate;
	NSSet* _initialUserExcludes;
	IGTokenField* _tokenField;
	IGUsertagTableView* _usertagTableView;
	IGSimpleFrameButton* _inviteButton;
	float _tokenizerHeight;
	float _keyboardHeight;

}

@property (nonatomic,copy) NSSet * initialUserExcludes;                                                       //@synthesize initialUserExcludes=_initialUserExcludes - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                                       //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) IGUsertagTableView * usertagTableView;                                           //@synthesize usertagTableView=_usertagTableView - In the implementation block
@property (nonatomic,retain) IGSimpleFrameButton * inviteButton;                                              //@synthesize inviteButton=_inviteButton - In the implementation block
@property (assign,nonatomic) float tokenizerHeight;                                                           //@synthesize tokenizerHeight=_tokenizerHeight - In the implementation block
@property (assign,nonatomic) float keyboardHeight;                                                            //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserTokenizerTypeaheadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)keyboardWillChange:(id)arg1 ;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(void)setUsertagTableView:(IGUsertagTableView *)arg1 ;
-(IGUsertagTableView *)usertagTableView;
-(void)didTapInvite;
-(void)setInviteButton:(IGSimpleFrameButton *)arg1 ;
-(IGSimpleFrameButton *)inviteButton;
-(void)updateExcludedUsers;
-(float)keyboardHeight;
-(NSSet *)initialUserExcludes;
-(void)tagTableViewDidSelectUser:(id)arg1 ;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)tokenFieldWillBeginEditing:(id)arg1 ;
-(id)initWithUserExcludes:(id)arg1 ;
-(void)setInitialUserExcludes:(NSSet *)arg1 ;
-(float)tokenizerHeight;
-(void)setTokenizerHeight:(float)arg1 ;
-(void)setKeyboardHeight:(float)arg1 ;
-(void)setDelegate:(id<IGUserTokenizerTypeaheadViewControllerDelegate>)arg1 ;
-(id<IGUserTokenizerTypeaheadViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(id)titleView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

