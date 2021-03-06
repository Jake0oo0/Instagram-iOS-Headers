
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPassthroughView.h>

@class UIImage, UIColor, NSString, UILabel, UIImageView;

@interface IGSimpleButton : IGPassthroughView {

	id _target;
	SEL _action;
	char _animatesDeselection;
	char _delaysSelection;
	char _forwardsContentTouches;
	char _enabled;
	char _highlighted;
	char _selected;
	UIImage* _defaultBackgroundImage;
	UIColor* _defaultBackgroundColor;
	UIColor* _defaultTitleLabelColor;
	UIColor* _defaultTitleLabelShadowColor;
	float _defaultTitleLabelShadowOffset;
	NSString* _defaultTitleLabelText;
	UIImage* _highlightedBackgroundImage;
	UIColor* _highlightedBackgroundColor;
	UIColor* _highlightedTitleLabelColor;
	UIColor* _highlightedTitleLabelShadowColor;
	float _highlightedTitleLabelShadowOffset;
	UIImage* _selectedBackgroundImage;
	UIColor* _selectedBackgroundColor;
	UIColor* _selectedTitleLabelColor;
	UIColor* _selectedTitleLabelShadowColor;
	float _selectedTitleLabelShadowOffset;
	NSString* _selectedTitleLabelText;
	UIImage* _disabledBackgroundImage;
	UIColor* _disabledBackgroundColor;
	UIColor* _disabledTitleLabelColor;
	UIColor* _disabledTitleLabelShadowColor;
	float _disabledTitleLabelShadowOffset;
	UILabel* _titleLabel;
	UIImageView* _backgroundImageView;
	UIImageView* _highlightedBackgroundImageView;
	UIOffset _tapPadding;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                         //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedBackgroundImageView;              //@synthesize highlightedBackgroundImageView=_highlightedBackgroundImageView - In the implementation block
@property (nonatomic,retain) UIImage * defaultBackgroundImage;                          //@synthesize defaultBackgroundImage=_defaultBackgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                          //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * defaultTitleLabelColor;                          //@synthesize defaultTitleLabelColor=_defaultTitleLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * defaultTitleLabelShadowColor;                    //@synthesize defaultTitleLabelShadowColor=_defaultTitleLabelShadowColor - In the implementation block
@property (assign,nonatomic) float defaultTitleLabelShadowOffset;                       //@synthesize defaultTitleLabelShadowOffset=_defaultTitleLabelShadowOffset - In the implementation block
@property (nonatomic,copy) NSString * defaultTitleLabelText;                            //@synthesize defaultTitleLabelText=_defaultTitleLabelText - In the implementation block
@property (nonatomic,retain) UIImage * highlightedBackgroundImage;                      //@synthesize highlightedBackgroundImage=_highlightedBackgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;                      //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTitleLabelColor;                      //@synthesize highlightedTitleLabelColor=_highlightedTitleLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTitleLabelShadowColor;                //@synthesize highlightedTitleLabelShadowColor=_highlightedTitleLabelShadowColor - In the implementation block
@property (assign,nonatomic) float highlightedTitleLabelShadowOffset;                   //@synthesize highlightedTitleLabelShadowOffset=_highlightedTitleLabelShadowOffset - In the implementation block
@property (nonatomic,retain) UIImage * selectedBackgroundImage;                         //@synthesize selectedBackgroundImage=_selectedBackgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                         //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTitleLabelColor;                         //@synthesize selectedTitleLabelColor=_selectedTitleLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTitleLabelShadowColor;                   //@synthesize selectedTitleLabelShadowColor=_selectedTitleLabelShadowColor - In the implementation block
@property (assign,nonatomic) float selectedTitleLabelShadowOffset;                      //@synthesize selectedTitleLabelShadowOffset=_selectedTitleLabelShadowOffset - In the implementation block
@property (nonatomic,copy) NSString * selectedTitleLabelText;                           //@synthesize selectedTitleLabelText=_selectedTitleLabelText - In the implementation block
@property (nonatomic,retain) UIImage * disabledBackgroundImage;                         //@synthesize disabledBackgroundImage=_disabledBackgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * disabledBackgroundColor;                         //@synthesize disabledBackgroundColor=_disabledBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTitleLabelColor;                         //@synthesize disabledTitleLabelColor=_disabledTitleLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTitleLabelShadowColor;                   //@synthesize disabledTitleLabelShadowColor=_disabledTitleLabelShadowColor - In the implementation block
@property (assign,nonatomic) float disabledTitleLabelShadowOffset;                      //@synthesize disabledTitleLabelShadowOffset=_disabledTitleLabelShadowOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                 //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char animatesDeselection;                                  //@synthesize animatesDeselection=_animatesDeselection - In the implementation block
@property (assign,nonatomic) char delaysSelection;                                      //@synthesize delaysSelection=_delaysSelection - In the implementation block
@property (assign,nonatomic) char forwardsContentTouches;                               //@synthesize forwardsContentTouches=_forwardsContentTouches - In the implementation block
@property (assign,nonatomic) UIOffset tapPadding;                                       //@synthesize tapPadding=_tapPadding - In the implementation block
@property (assign,nonatomic) char enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char highlighted;                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) char selected;                                             //@synthesize selected=_selected - In the implementation block
-(void)setTapPadding:(UIOffset)arg1 ;
-(void)setDefaultTitleLabelText:(NSString *)arg1 ;
-(void)setSelectedTitleLabelText:(NSString *)arg1 ;
-(NSString *)defaultTitleLabelText;
-(NSString *)selectedTitleLabelText;
-(void)setDefaultBackgroundImage:(UIImage *)arg1 ;
-(void)setHighlightedBackgroundImage:(UIImage *)arg1 ;
-(void)setSelectedBackgroundImage:(UIImage *)arg1 ;
-(void)setDefaultTitleLabelColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleLabelColor:(UIColor *)arg1 ;
-(void)setSelectedTitleLabelColor:(UIColor *)arg1 ;
-(void)setDisabledTitleLabelColor:(UIColor *)arg1 ;
-(void)setDefaultTitleLabelShadowColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleLabelShadowColor:(UIColor *)arg1 ;
-(void)setSelectedTitleLabelShadowColor:(UIColor *)arg1 ;
-(void)setAccessibilityTraitsEnabled:(char)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(UIColor *)selectedBackgroundColor;
-(UIImage *)disabledBackgroundImage;
-(UIImage *)selectedBackgroundImage;
-(UIImage *)defaultBackgroundImage;
-(UIImageView *)highlightedBackgroundImageView;
-(UIImage *)highlightedBackgroundImage;
-(UIColor *)selectedTitleLabelColor;
-(UIColor *)selectedTitleLabelShadowColor;
-(float)selectedTitleLabelShadowOffset;
-(UIColor *)highlightedTitleLabelColor;
-(UIColor *)highlightedTitleLabelShadowColor;
-(float)highlightedTitleLabelShadowOffset;
-(UIColor *)disabledTitleLabelColor;
-(UIColor *)disabledTitleLabelShadowColor;
-(float)disabledTitleLabelShadowOffset;
-(UIColor *)defaultTitleLabelColor;
-(UIColor *)defaultTitleLabelShadowColor;
-(float)defaultTitleLabelShadowOffset;
-(void)updateBackground;
-(void)doHighlight:(char)arg1 ;
-(void)doHighlightYES;
-(void)highlight:(char)arg1 ;
-(void)doHighlightNO;
-(UIOffset)tapPadding;
-(UIColor *)disabledBackgroundColor;
-(void)sizeToFitLabel;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setDefaultTitleLabelShadowOffset:(float)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleLabelShadowOffset:(float)arg1 ;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectedTitleLabelShadowOffset:(float)arg1 ;
-(void)setDisabledBackgroundImage:(UIImage *)arg1 ;
-(void)setDisabledBackgroundColor:(UIColor *)arg1 ;
-(void)setDisabledTitleLabelShadowColor:(UIColor *)arg1 ;
-(void)setDisabledTitleLabelShadowOffset:(float)arg1 ;
-(char)animatesDeselection;
-(void)setAnimatesDeselection:(char)arg1 ;
-(char)delaysSelection;
-(void)setDelaysSelection:(char)arg1 ;
-(char)forwardsContentTouches;
-(void)setForwardsContentTouches:(char)arg1 ;
-(void)setHighlightedBackgroundImageView:(UIImageView *)arg1 ;
-(void)updateTitleLabel;
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setContentMode:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)didMoveToSuperview;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIImageView *)backgroundImageView;
-(UILabel *)titleLabel;
-(void)setSelected:(char)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(char)highlighted;
-(char)selected;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(UIColor *)defaultBackgroundColor;
@end

