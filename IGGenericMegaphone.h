

@class NSString, NSURL, UIColor, IGMegaphoneButton;

@interface IGGenericMegaphone : NSObject {

	char _dismissible;
	NSString* _type;
	NSURL* _iconURL;
	UIColor* _backgroundColor;
	UIColor* _dismissButtonColor;
	NSString* _title;
	UIColor* _titleColor;
	NSString* _message;
	UIColor* _messageColor;
	IGMegaphoneButton* _buttonOne;
	IGMegaphoneButton* _buttonTwo;

}

@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                              //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) char dismissible;                           //@synthesize dismissible=_dismissible - In the implementation block
@property (nonatomic,retain) UIColor * dismissButtonColor;               //@synthesize dismissButtonColor=_dismissButtonColor - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                       //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIColor * messageColor;                     //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,retain) IGMegaphoneButton * buttonOne;              //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) IGMegaphoneButton * buttonTwo;              //@synthesize buttonTwo=_buttonTwo - In the implementation block
+(id)megaphoneFromDictionary:(id)arg1 ;
+(id)colorFromString:(id)arg1 ;
-(void)setDismissible:(char)arg1 ;
-(void)setButtonOne:(IGMegaphoneButton *)arg1 ;
-(void)setDismissButtonColor:(UIColor *)arg1 ;
-(void)setButtonTwo:(IGMegaphoneButton *)arg1 ;
-(char)dismissible;
-(UIColor *)dismissButtonColor;
-(IGMegaphoneButton *)buttonOne;
-(IGMegaphoneButton *)buttonTwo;
-(void)setMessageColor:(UIColor *)arg1 ;
-(UIColor *)messageColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSURL *)iconURL;
@end

