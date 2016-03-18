
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextInputTraits.h>

@protocol IGNavSearchBarDelegate;
@class IGTextField, IGButton, UIButton, UIView, UIImage, NSString, NSAttributedString;

@interface IGNavSearchBar : UIView <UITextFieldDelegate, UITextInputTraits> {

	char _editing;
	char _hasCalculatedFrames;
	char _showCancelButton;
	char _showPeopleIcon;
	char _showDirectIcon;
	id<IGNavSearchBarDelegate> _delegate;
	IGTextField* _searchTextField;
	IGButton* _cancelButton;
	UIButton* _backgroundButton;
	UIView* _searchLabelView;
	UIImage* _searchIcon;
	UIImage* _searchIconOn;
	UIButton* _peopleIconButton;
	UIButton* _directIconButton;
	double _searchBarAnimationDuration;
	CGRect _backgroundButtonFrameInactive;
	CGRect _backgroundButtonFrameActive;
	CGRect _cancelButtonFrameInactive;
	CGRect _cancelButtonFrameActive;
	CGRect _searchTextFieldFrameInactive;
	CGRect _searchTextFieldFrameActive;
	CGRect _searchLabelViewFrameInactive;
	CGRect _searchLabelViewFrameActive;

}

@property (assign,nonatomic,__weak) id<IGNavSearchBarDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                              //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double searchBarAnimationDuration;                          //@synthesize searchBarAnimationDuration=_searchBarAnimationDuration - In the implementation block
@property (nonatomic,retain) IGTextField * searchTextField;                              //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) IGButton * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * backgroundButton;                                //@synthesize backgroundButton=_backgroundButton - In the implementation block
@property (nonatomic,retain) UIView * searchLabelView;                                   //@synthesize searchLabelView=_searchLabelView - In the implementation block
@property (nonatomic,retain) UIImage * searchIcon;                                       //@synthesize searchIcon=_searchIcon - In the implementation block
@property (nonatomic,retain) UIImage * searchIconOn;                                     //@synthesize searchIconOn=_searchIconOn - In the implementation block
@property (nonatomic,retain) UIButton * peopleIconButton;                                //@synthesize peopleIconButton=_peopleIconButton - In the implementation block
@property (nonatomic,retain) UIButton * directIconButton;                                //@synthesize directIconButton=_directIconButton - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameInactive;                       //@synthesize backgroundButtonFrameInactive=_backgroundButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameActive;                         //@synthesize backgroundButtonFrameActive=_backgroundButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameInactive;                           //@synthesize cancelButtonFrameInactive=_cancelButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameActive;                             //@synthesize cancelButtonFrameActive=_cancelButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameInactive;                        //@synthesize searchTextFieldFrameInactive=_searchTextFieldFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameActive;                          //@synthesize searchTextFieldFrameActive=_searchTextFieldFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameInactive;                        //@synthesize searchLabelViewFrameInactive=_searchLabelViewFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameActive;                          //@synthesize searchLabelViewFrameActive=_searchLabelViewFrameActive - In the implementation block
@property (assign,nonatomic) char hasCalculatedFrames;                                   //@synthesize hasCalculatedFrames=_hasCalculatedFrames - In the implementation block
@property (assign,nonatomic) char showCancelButton;                                      //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) char showPeopleIcon;                                        //@synthesize showPeopleIcon=_showPeopleIcon - In the implementation block
@property (assign,nonatomic) char showDirectIcon;                                        //@synthesize showDirectIcon=_showDirectIcon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(id)initWithFrame:(CGRect)arg1 showPeopleIcon:(char)arg2 showCancelButton:(char)arg3 showDirectIcon:(char)arg4 ;
-(void)setSearchIcon:(UIImage *)arg1 ;
-(void)setSearchIconOn:(UIImage *)arg1 ;
-(UIButton *)backgroundButton;
-(UIView *)searchLabelView;
-(IGTextField *)searchTextField;
-(UIButton *)directIconButton;
-(UIButton *)peopleIconButton;
-(UIImage *)searchIconOn;
-(UIImage *)searchIcon;
-(void)searchBarTapped;
-(void)peopleIconButtonTapped;
-(void)directIconButtonTapped;
-(void)setHasCalculatedFrames:(char)arg1 ;
-(char)hasCalculatedFrames;
-(char)showDirectIcon;
-(void)setBackgroundButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameInactive:(CGRect)arg1 ;
-(void)setCancelButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameInactive:(CGRect)arg1 ;
-(void)calculateAnimationFrames;
-(void)setBackgroundButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameActive:(CGRect)arg1 ;
-(void)setCancelButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameActive:(CGRect)arg1 ;
-(CGRect)searchLabelViewFrameActive;
-(CGRect)backgroundButtonFrameActive;
-(CGRect)cancelButtonFrameActive;
-(CGRect)searchTextFieldFrameActive;
-(CGRect)backgroundButtonFrameInactive;
-(CGRect)cancelButtonFrameInactive;
-(double)searchBarAnimationDuration;
-(void)addSpringAnimations:(/*^block*/id)arg1 duration:(double)arg2 complete:(/*^block*/id)arg3 ;
-(CGRect)searchLabelViewFrameInactive;
-(CGRect)searchTextFieldFrameInactive;
-(void)setSearchBarAnimationDuration:(double)arg1 ;
-(void)setSearchTextField:(IGTextField *)arg1 ;
-(void)setBackgroundButton:(UIButton *)arg1 ;
-(void)setSearchLabelView:(UIView *)arg1 ;
-(void)setPeopleIconButton:(UIButton *)arg1 ;
-(void)setDirectIconButton:(UIButton *)arg1 ;
-(void)setShowCancelButton:(char)arg1 ;
-(char)showPeopleIcon;
-(void)setShowPeopleIcon:(char)arg1 ;
-(void)setShowDirectIcon:(char)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)makeInactive:(char)arg1 ;
-(void)makeActive:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGNavSearchBarDelegate>)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(id<IGNavSearchBarDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(int)keyboardAppearance;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGButton *)cancelButton;
-(void)setCancelButton:(IGButton *)arg1 ;
-(char)canResignFirstResponder;
-(char)showCancelButton;
-(NSString *)placeholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)cancelButtonTapped;
@end

