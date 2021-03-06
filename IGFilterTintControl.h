
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITabBarDelegate.h>
#import <Instagram/IGFilterTintColorPickerDelegate.h>

@protocol IGFilterTintControlDelegate;
@class UITabBar, UITabBarItem, UIView, IGFilterTintColorPicker, IGSloppyTouchSlider, UILabel, NSString;

@interface IGFilterTintControl : UIControl <UITabBarDelegate, IGFilterTintColorPickerDelegate> {

	char _hasAdjustHintShown;
	id<IGFilterTintControlDelegate> _delegate;
	unsigned _currentState;
	UITabBar* _tintTypeTabBar;
	UITabBarItem* _shadowTab;
	UITabBarItem* _highlightTab;
	UIView* _lineSeparator;
	IGFilterTintColorPicker* _colorPicker;
	IGSloppyTouchSlider* _controlSlider;
	UILabel* _valueLabel;
	UILabel* _adjustHintLabel;
	unsigned _tintShadowsColorIndex;
	unsigned _tintHighlightsColorIndex;
	float _tintShadowsIntensity;
	float _tintHighlighsIntensity;

}

@property (nonatomic,retain) UITabBar * tintTypeTabBar;                                    //@synthesize tintTypeTabBar=_tintTypeTabBar - In the implementation block
@property (nonatomic,retain) UITabBarItem * shadowTab;                                     //@synthesize shadowTab=_shadowTab - In the implementation block
@property (nonatomic,retain) UITabBarItem * highlightTab;                                  //@synthesize highlightTab=_highlightTab - In the implementation block
@property (nonatomic,retain) UIView * lineSeparator;                                       //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,retain) IGFilterTintColorPicker * colorPicker;                        //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,retain) IGSloppyTouchSlider * controlSlider;                          //@synthesize controlSlider=_controlSlider - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                         //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * adjustHintLabel;                                    //@synthesize adjustHintLabel=_adjustHintLabel - In the implementation block
@property (assign,nonatomic) char hasAdjustHintShown;                                      //@synthesize hasAdjustHintShown=_hasAdjustHintShown - In the implementation block
@property (assign,nonatomic) char isTintTypeShadow; 
@property (assign,nonatomic) unsigned tintShadowsColorIndex;                               //@synthesize tintShadowsColorIndex=_tintShadowsColorIndex - In the implementation block
@property (assign,nonatomic) unsigned tintHighlightsColorIndex;                            //@synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex - In the implementation block
@property (assign,nonatomic) float tintShadowsIntensity;                                   //@synthesize tintShadowsIntensity=_tintShadowsIntensity - In the implementation block
@property (assign,nonatomic) float tintHighlighsIntensity;                                 //@synthesize tintHighlighsIntensity=_tintHighlighsIntensity - In the implementation block
@property (assign,nonatomic) float priorValue; 
@property (assign,nonatomic,__weak) id<IGFilterTintControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned currentState;                                        //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) float value; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onSliderChange:(id)arg1 ;
-(CGRect)labelRect;
-(void)setTintShadowsIntensity:(float)arg1 ;
-(void)setValuesForTintShadowsColor:(unsigned)arg1 tintHighlightsColor:(unsigned)arg2 tintShadowsIntensity:(float)arg3 tintHighlightsIntensity:(float)arg4 ;
-(float)tintShadowsIntensity;
-(IGSloppyTouchSlider *)controlSlider;
-(void)setControlSlider:(IGSloppyTouchSlider *)arg1 ;
-(UITabBar *)tintTypeTabBar;
-(UIView *)lineSeparator;
-(IGFilterTintColorPicker *)colorPicker;
-(UILabel *)adjustHintLabel;
-(char)hasAdjustHintShown;
-(void)setHasAdjustHintShown:(char)arg1 ;
-(void)hideSliderShowPicker;
-(UITabBarItem *)shadowTab;
-(char)isTintTypeShadow;
-(UITabBarItem *)highlightTab;
-(void)setTintHighlightsColorIndex:(unsigned)arg1 ;
-(void)setTintHighlighsIntensity:(float)arg1 ;
-(void)setIsTintTypeShadow:(char)arg1 ;
-(unsigned)tintShadowsColorIndex;
-(void)setTintShadowsColorIndex:(unsigned)arg1 ;
-(unsigned)tintHighlightsColorIndex;
-(char)isAnyColorSelected;
-(void)showAdjustHintLabel;
-(void)hidePickerShowSlider;
-(float)tintHighlighsIntensity;
-(void)colorPicker:(id)arg1 didChangeColorFrom:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)colorPickerShouldPresentIntensitySlider:(id)arg1 ;
-(void)applyIntensityAdjust;
-(void)cancelIntensityAdjust;
-(void)setTintTypeTabBar:(UITabBar *)arg1 ;
-(void)setShadowTab:(UITabBarItem *)arg1 ;
-(void)setHighlightTab:(UITabBarItem *)arg1 ;
-(void)setLineSeparator:(UIView *)arg1 ;
-(void)setColorPicker:(IGFilterTintColorPicker *)arg1 ;
-(void)setAdjustHintLabel:(UILabel *)arg1 ;
-(void)setPriorValue:(float)arg1 ;
-(float)priorValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFilterTintControlDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFilterTintControlDelegate>)delegate;
-(unsigned)currentState;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setCurrentState:(unsigned)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)updateValueLabel;
-(UILabel *)valueLabel;
@end

