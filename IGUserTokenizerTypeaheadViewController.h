
#import <Instagram/IGViewController.h>
#import <Instagram/IGUsertagTableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGTokenizerTextFieldDelegate.h>

@protocol IGUserTokenizerTypeaheadViewControllerDelegate;
@class UIView, CALayer, IGLabel, IGTokenizerTextField, IGUsertagTableView, IGSimpleFrameButton, NSString;

@interface IGUserTokenizerTypeaheadViewController : IGViewController <IGUsertagTableViewDelegate, UITextFieldDelegate, IGTokenizerTextFieldDelegate> {

	id<IGUserTokenizerTypeaheadViewControllerDelegate> _delegate;
	UIView* _topView;
	CALayer* _topViewBottomBorder;
	IGLabel* _toLabel;
	IGTokenizerTextField* _tokenizer;
	IGUsertagTableView* _usertagTableView;
	IGSimpleFrameButton* _inviteButton;
	float _tokenizerHeight;
	float _keyboardHeight;

}

@property (assign,nonatomic,__weak) id<IGUserTokenizerTypeaheadViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * topView;                                                                //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) CALayer * topViewBottomBorder;                                                   //@synthesize topViewBottomBorder=_topViewBottomBorder - In the implementation block
@property (nonatomic,retain) IGLabel * toLabel;                                                               //@synthesize toLabel=_toLabel - In the implementation block
@property (nonatomic,retain) IGTokenizerTextField * tokenizer;                                                //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,retain) IGUsertagTableView * usertagTableView;                                           //@synthesize usertagTableView=_usertagTableView - In the implementation block
@property (nonatomic,retain) IGSimpleFrameButton * inviteButton;                                              //@synthesize inviteButton=_inviteButton - In the implementation block
@property (assign,nonatomic) float tokenizerHeight;                                                           //@synthesize tokenizerHeight=_tokenizerHeight - In the implementation block
@property (assign,nonatomic) float keyboardHeight;                                                            //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardWillChange:(id)arg1 ;
-(void)setTopViewBottomBorder:(CALayer *)arg1 ;
-(CALayer *)topViewBottomBorder;
-(void)setToLabel:(IGLabel *)arg1 ;
-(IGLabel *)toLabel;
-(void)setUsertagTableView:(IGUsertagTableView *)arg1 ;
-(IGUsertagTableView *)usertagTableView;
-(void)didTapInvite;
-(void)setInviteButton:(IGSimpleFrameButton *)arg1 ;
-(IGSimpleFrameButton *)inviteButton;
-(id)usersFromTokens:(id)arg1 ;
-(float)keyboardHeight;
-(void)tagTableViewDidSelectUser:(id)arg1 ;
-(void)tokenizerTextFieldDidStartQuery;
-(void)tokenizerTextFieldDidUpdateQuery:(id)arg1 ;
-(void)tokenizerTextFieldDidEndQuery;
-(void)tokenizerTextFieldDidChangeHeight:(id)arg1 ;
-(void)tokenizerTextFieldDidRemoveToken;
-(float)tokenizerHeight;
-(void)setTokenizerHeight:(float)arg1 ;
-(void)setKeyboardHeight:(float)arg1 ;
-(void)setDelegate:(id<IGUserTokenizerTypeaheadViewControllerDelegate>)arg1 ;
-(id<IGUserTokenizerTypeaheadViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)titleView;
-(IGTokenizerTextField *)tokenizer;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIView *)topView;
-(void)setTokenizer:(IGTokenizerTextField *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
@end
