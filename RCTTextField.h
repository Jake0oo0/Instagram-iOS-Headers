/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITextField.h>

@class RCTEventDispatcher, NSMutableArray, UITextRange, UIColor, NSNumber;

@interface RCTTextField : UITextField {

	RCTEventDispatcher* _eventDispatcher;
	NSMutableArray* _reactSubviews;
	char _jsRequestingFirstResponder;
	int _nativeEventCount;
	char _submitted;
	UITextRange* _previousSelectionRange;
	char _caretHidden;
	char _selectTextOnFocus;
	char _blurOnSubmit;
	char _textWasPasted;
	UIColor* _placeholderTextColor;
	int _mostRecentEventCount;
	NSNumber* _maxLength;
	/*^block*/id _onSelectionChange;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) char caretHidden;                            //@synthesize caretHidden=_caretHidden - In the implementation block
@property (assign,nonatomic) char autoCorrect; 
@property (assign,nonatomic) char selectTextOnFocus;                      //@synthesize selectTextOnFocus=_selectTextOnFocus - In the implementation block
@property (assign,nonatomic) char blurOnSubmit;                           //@synthesize blurOnSubmit=_blurOnSubmit - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                   //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;              //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (assign,nonatomic) int mostRecentEventCount;                    //@synthesize mostRecentEventCount=_mostRecentEventCount - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                        //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) char textWasPasted;                          //@synthesize textWasPasted=_textWasPasted - In the implementation block
@property (nonatomic,copy) id onSelectionChange;                          //@synthesize onSelectionChange=_onSelectionChange - In the implementation block
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(id)initWithEventDispatcher:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(void)textFieldDidChange;
-(void)textFieldBeginEditing;
-(void)textFieldEndEditing;
-(void)textFieldSubmitEditing;
-(void)sendSelectionEvent;
-(void)sendKeyValueForString:(id)arg1 ;
-(void)setAutoCorrect:(char)arg1 ;
-(char)autoCorrect;
-(char)caretHidden;
-(void)setCaretHidden:(char)arg1 ;
-(char)selectTextOnFocus;
-(void)setSelectTextOnFocus:(char)arg1 ;
-(char)blurOnSubmit;
-(void)setBlurOnSubmit:(char)arg1 ;
-(int)mostRecentEventCount;
-(void)setMostRecentEventCount:(int)arg1 ;
-(char)textWasPasted;
-(void)setTextWasPasted:(char)arg1 ;
-(id)onSelectionChange;
-(void)setOnSelectionChange:(id)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)resignFirstResponder;
-(UIEdgeInsets)contentInset;
-(void)setText:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSNumber *)maxLength;
@end

