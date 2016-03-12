
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class IGUser, IGSimpleButton, UIColor;

@interface IGProfilePictureImageView : IGImageView {

	char _buttonDisabled;
	IGUser* _user;
	IGSimpleButton* _profilePicButton;
	int _borderStyle;
	UIColor* _borderColor;
	float _borderWidth;

}

@property (nonatomic,retain) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGSimpleButton * profilePicButton;              //@synthesize profilePicButton=_profilePicButton - In the implementation block
@property (assign,nonatomic) int borderStyle;                                  //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) char buttonDisabled;                              //@synthesize buttonDisabled=_buttonDisabled - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                            //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                                //@synthesize borderWidth=_borderWidth - In the implementation block
-(IGSimpleButton *)profilePicButton;
-(id)initWithFrame:(CGRect)arg1 user:(id)arg2 ;
-(void)setButtonDisabled:(char)arg1 ;
-(void)tapped:(id)arg1 ;
-(void)userUpdated:(id)arg1 ;
-(char)buttonDisabled;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(void)updateImage;
-(int)borderStyle;
@end

