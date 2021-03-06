
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGGrowingTextViewDelegate;
@class UIImageView, UITextView, NSString, UILabel, UIFont, UIColor;

@interface IGGrowingTextView : UIView <UITextViewDelegate, IGAutocompleteControllerTextInput> {

	float _minHeight;
	float _maxHeight;
	CGPoint _contentOffset;
	char _allowScroll;
	char _needsToUpdateConstraints;
	id<IGGrowingTextViewDelegate> _delegate;
	UIImageView* _imageView;
	UITextView* _internalTextView;
	int _maxNumberOfLines;
	NSString* _placeholderText;
	UILabel* _placeholder;

}

@property (nonatomic,retain) UILabel * placeholder;                                      //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic,__weak) id<IGGrowingTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UITextView * internalTextView;                              //@synthesize internalTextView=_internalTextView - In the implementation block
@property (assign,nonatomic) int maxNumberOfLines;                                       //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                   //@synthesize placeholderText=_placeholderText - In the implementation block
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
-(UITextView *)internalTextView;
-(void)setMaxNumberOfLines:(int)arg1 ;
-(float)heightForText:(id)arg1 inWidth:(float)arg2 ;
-(float)heightForText:(id)arg1 ;
-(void)updateSizeConstraints;
-(void)setInternalTextView:(UITextView *)arg1 ;
-(int)maxNumberOfLines;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGGrowingTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGrowingTextViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)isFirstResponder;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSRange)selectedRange;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)tokenizer;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setPlaceholder:(UILabel *)arg1 ;
-(UIImageView *)imageView;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UILabel *)placeholder;
-(id)accessibilityValue;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)updateTextView;
@end

