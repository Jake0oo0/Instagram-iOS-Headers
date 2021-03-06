
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGDirectLinkPreviewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGDirectKeyboardTextViewControllerDelegate;
@class IGChevronTitleButton, NSString, IGDirectLinkPreviewManager, IGDirectKeyboardTextView, IGButton, IGTapButton, UIControl, IGGradientView, UILabel, UIFont, IGDirectLinkPreview;

@interface IGDirectKeyboardTextViewController : UIViewController <UITextViewDelegate, IGDirectLinkPreviewDelegate, IGAutocompleteControllerTextInput> {

	char _shouldHoldFirstResponder;
	char _hideLikeButton;
	char _shouldPreviewLink;
	char _showLinkPreview;
	IGChevronTitleButton* _chevronTitleButton;
	id<IGDirectKeyboardTextViewControllerDelegate> _delegate;
	int _state;
	NSString* _unfinishedMessage;
	IGDirectLinkPreviewManager* _linkPreviewManager;
	IGDirectKeyboardTextView* _textView;
	IGButton* _sendButton;
	IGTapButton* _likeButton;
	IGTapButton* _cameraButton;
	UIControl* _textViewContainer;
	IGGradientView* _bottomGradientView;
	UILabel* _placeholderLabel;
	IGTapButton* _dismissButton;
	IGTapButton* _backButton;
	UIFont* _textFont;
	UILabel* _warningView;
	IGDirectLinkPreview* _linkPreview;

}

@property (nonatomic,retain) IGDirectKeyboardTextView * textView;                                         //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) IGButton * sendButton;                                                       //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) IGTapButton * likeButton;                                                    //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * cameraButton;                                                  //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,retain) UIControl * textViewContainer;                                               //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) IGGradientView * bottomGradientView;                                         //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                                 //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGTapButton * backButton;                                                    //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                                                           //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,retain) UILabel * warningView;                                                       //@synthesize warningView=_warningView - In the implementation block
@property (nonatomic,retain) IGDirectLinkPreview * linkPreview;                                           //@synthesize linkPreview=_linkPreview - In the implementation block
@property (nonatomic,retain) IGDirectLinkPreviewManager * linkPreviewManager;                             //@synthesize linkPreviewManager=_linkPreviewManager - In the implementation block
@property (assign,nonatomic) char showLinkPreview;                                                        //@synthesize showLinkPreview=_showLinkPreview - In the implementation block
@property (nonatomic,readonly) char isEditingText; 
@property (nonatomic,readonly) float textContentLayoutHeight; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                                   //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectKeyboardTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state;                                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char shouldHoldFirstResponder;                                               //@synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder - In the implementation block
@property (assign,nonatomic) char hideLikeButton;                                                         //@synthesize hideLikeButton=_hideLikeButton - In the implementation block
@property (nonatomic,copy) NSString * unfinishedMessage;                                                  //@synthesize unfinishedMessage=_unfinishedMessage - In the implementation block
@property (assign,nonatomic) char shouldPreviewLink;                                                      //@synthesize shouldPreviewLink=_shouldPreviewLink - In the implementation block
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
+(float)defaultHeight;
-(IGTapButton *)cameraButton;
-(char)deviceHasCamera;
-(IGGradientView *)bottomGradientView;
-(void)dismissButtonTapped;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(void)setLinkPreview:(IGDirectLinkPreview *)arg1 ;
-(IGDirectLinkPreview *)linkPreview;
-(NSString *)unfinishedMessage;
-(char)hideLikeButton;
-(id)createLikeButton;
-(void)setLikeButton:(IGTapButton *)arg1 ;
-(UILabel *)warningView;
-(float)layoutLinkPreview;
-(void)sendAction:(id)arg1 ;
-(void)likeAction:(id)arg1 ;
-(void)cameraAction:(id)arg1 ;
-(void)updateLikeButtonAndSendButton;
-(float)maxTextHeight;
-(float)getLinkPreviewHeight;
-(void)setUnfinishedMessage:(NSString *)arg1 ;
-(char)shouldPreviewLink;
-(IGDirectLinkPreviewManager *)linkPreviewManager;
-(void)createLinkPreview;
-(void)setLinkPreviewManager:(IGDirectLinkPreviewManager *)arg1 ;
-(void)onTapLinkPreview;
-(void)setPlaceHolderText:(id)arg1 ;
-(void)setTextViewAccessibilityLabel:(id)arg1 ;
-(void)setShouldPreviewLink:(char)arg1 ;
-(void)showPickDisabledAssetAnimation;
-(void)setHideLikeButton:(char)arg1 ;
-(void)setCameraButton:(IGTapButton *)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setWarningView:(UILabel *)arg1 ;
-(char)showLinkPreview;
-(void)setShowLinkPreview:(char)arg1 ;
-(void)linkPreviewDidUpdateHeight:(id)arg1 showLink:(char)arg2 ;
-(void)setShouldHoldFirstResponder:(char)arg1 ;
-(char)shouldHoldFirstResponder;
-(float)textContentLayoutHeight;
-(UIControl *)textViewContainer;
-(void)setTextViewContainer:(UIControl *)arg1 ;
-(void)setBottomGradientView:(IGGradientView *)arg1 ;
-(void)onChevronTitleButtonTapped;
-(void)setDelegate:(id<IGDirectKeyboardTextViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGDirectKeyboardTextViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTextView:(IGDirectKeyboardTextView *)arg1 ;
-(NSRange)selectedRange;
-(void)beginEditing;
-(void)endEditing;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)clearText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(float)textHeight;
-(IGDirectKeyboardTextView *)textView;
-(UIFont *)textFont;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setBackButton:(IGTapButton *)arg1 ;
-(char)isEditingText;
-(IGButton *)sendButton;
-(void)setSendButton:(IGButton *)arg1 ;
-(IGTapButton *)dismissButton;
-(void)backButtonTapped;
-(IGTapButton *)likeButton;
-(void)setDismissButton:(IGTapButton *)arg1 ;
-(IGTapButton *)backButton;
@end

