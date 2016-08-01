
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UIImageView, NSString;

@interface IGMediaOverlayIndicator : UIView {

	UIView* _iconView;
	float _maxWidth;
	UILabel* _label;
	UIImageView* _backgroundImage;

}

@property (nonatomic,retain) UILabel * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIView * iconView;                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) float maxWidth;                             //@synthesize maxWidth=_maxWidth - In the implementation block
-(void)showIndicatorWithIcon:(id)arg1 animated:(char)arg2 ;
-(void)showTextLabel;
-(void)showIndicatorWithString:(id)arg1 iconName:(id)arg2 willContract:(char)arg3 animated:(char)arg4 ;
-(void)shrinkToIconWithDuration:(float)arg1 delay:(float)arg2 ;
-(void)hideAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)removeAllAnimations;
-(UIImageView *)backgroundImage;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setBackgroundImage:(UIImageView *)arg1 ;
-(float)maxWidth;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setMaxWidth:(float)arg1 ;
@end

