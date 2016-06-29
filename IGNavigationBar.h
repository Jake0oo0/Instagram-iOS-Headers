
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIView, UIColor;

@interface IGNavigationBar : UINavigationBar {

	float _overlayAlpha;
	UIView* _contentOverlayView;

}

@property (nonatomic,retain) UIView * contentOverlayView;              //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (nonatomic,retain) UIColor * overlayColor; 
@property (assign,nonatomic) float overlayAlpha;                       //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
-(void)_UIAppearance_setOverlayColor:(id)arg1 ;
-(float)overlayAlpha;
-(void)setOverlayAlpha:(float)arg1 ;
-(void)setContentOverlayView:(UIView *)arg1 ;
-(UIView *)contentOverlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
@end

