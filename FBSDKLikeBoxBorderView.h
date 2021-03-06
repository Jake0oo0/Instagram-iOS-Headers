
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface FBSDKLikeBoxBorderView : UIView {

	float _borderCornerRadius;
	float _borderWidth;
	unsigned _caretPosition;
	UIView* _contentView;
	UIColor* _fillColor;
	UIColor* _foregroundColor;

}

@property (assign,nonatomic) float borderCornerRadius;                  //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (assign,nonatomic) float borderWidth;                         //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) unsigned caretPosition;                    //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,retain) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                       //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
-(void)_initializeContent;
-(UIEdgeInsets)_borderInsets;
-(void)setCaretPosition:(unsigned)arg1 ;
-(unsigned)caretPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setBorderWidth:(float)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(float)borderWidth;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(float)borderCornerRadius;
-(void)setBorderCornerRadius:(float)arg1 ;
@end

