

@class UIView;

@interface IGKeyboardManager : NSObject {

	char _keyboardIsVisible;
	float _keyboardAnimationDuration;
	int _keyboardAnimationCurve;
	float _keyboardHeight;

}

@property (assign,nonatomic) float keyboardHeight;                         //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) float keyboardAnimationDuration;              //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
@property (assign,nonatomic) int keyboardAnimationCurve;                   //@synthesize keyboardAnimationCurve=_keyboardAnimationCurve - In the implementation block
@property (nonatomic,readonly) UIView * keyboard; 
@property (nonatomic,readonly) char keyboardIsVisible;                     //@synthesize keyboardIsVisible=_keyboardIsVisible - In the implementation block
+(id)sharedKeyboardManager;
-(void)setKeyboardAnimationCurve:(int)arg1 ;
-(void)setKeyboardAnimationDuration:(float)arg1 ;
-(char)keyboardIsVisible;
-(void)warmKeyboard;
-(void)setKeyboardHeight:(float)arg1 ;
-(float)keyboardHeight;
-(float)keyboardAnimationDuration;
-(int)keyboardAnimationCurve;
-(void)dealloc;
-(id)init;
-(UIView *)keyboard;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

