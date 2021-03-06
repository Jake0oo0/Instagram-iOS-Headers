
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGDirectGroupNamingViewControllerDelegate;
@class IGTextField, UIButton, NSString;

@interface IGDirectGroupNamingViewController : UIViewController <UITextFieldDelegate> {

	IGTextField* _nameTextField;
	id<IGDirectGroupNamingViewControllerDelegate> _delegate;
	UIButton* _closeButton;

}

@property (nonatomic,retain) IGTextField * nameTextField;                                                //@synthesize nameTextField=_nameTextField - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectGroupNamingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonTapped;
-(void)setNameTextField:(IGTextField *)arg1 ;
-(IGTextField *)nameTextField;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setDelegate:(id<IGDirectGroupNamingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGDirectGroupNamingViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(UIButton *)closeButton;
@end

