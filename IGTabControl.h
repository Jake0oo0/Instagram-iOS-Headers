
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGTabControlDelegate;
@class UIView, NSArray, UIScrollView, NSString, IGKVOHandle, CALayer, UILabel, UIFont;

@interface IGTabControl : UIView {

	char _shouldHideBottomSeparator;
	char _canUseFallbackIcons;
	char _scrollable;
	char _showButtonBorder;
	UIView* _inchwormView;
	NSArray* _buttons;
	id<IGTabControlDelegate> _delegate;
	UIScrollView* _connectedScrollView;
	NSString* _title;
	IGKVOHandle* _contentOffsetHandle;
	CALayer* _bottomSeparator;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UIFont* _font;

}

@property (nonatomic,retain) NSArray * buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id<IGTabControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIScrollView * connectedScrollView;                    //@synthesize connectedScrollView=_connectedScrollView - In the implementation block
@property (nonatomic,readonly) UIView * inchwormView;                               //@synthesize inchwormView=_inchwormView - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char shouldHideBottomSeparator;                        //@synthesize shouldHideBottomSeparator=_shouldHideBottomSeparator - In the implementation block
@property (nonatomic,retain) IGKVOHandle * contentOffsetHandle;                     //@synthesize contentOffsetHandle=_contentOffsetHandle - In the implementation block
@property (nonatomic,retain) CALayer * bottomSeparator;                             //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,readonly) char canUseFallbackIcons;                            //@synthesize canUseFallbackIcons=_canUseFallbackIcons - In the implementation block
@property (nonatomic,readonly) char scrollable;                                     //@synthesize scrollable=_scrollable - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIFont * font;                                         //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) char showButtonBorder;                               //@synthesize showButtonBorder=_showButtonBorder - In the implementation block
+(float)preferredHeight;
-(void)setConnectedScrollView:(UIScrollView *)arg1 ;
-(void)setShouldHideBottomSeparator:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 scrollable:(char)arg2 tabFont:(id)arg3 showButtonBorder:(char)arg4 ;
-(UIView *)inchwormView;
-(void)applyStyle;
-(IGKVOHandle *)contentOffsetHandle;
-(void)updateScrollViewPosition;
-(void)highlightVisibleSegment;
-(void)setContentOffsetHandle:(IGKVOHandle *)arg1 ;
-(IGTabControlLayoutParameters)layoutParametersForFrame:(CGRect)arg1 segmentCount:(unsigned)arg2 ;
-(CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 layoutParameters:(IGTabControlLayoutParameters)arg2 ;
-(CGRect)verticalPositionForScrollIndicatorBar:(CGRect)arg1 ;
-(UIScrollView *)connectedScrollView;
-(CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 ;
-(void)onSegmentTapped:(id)arg1 ;
-(char)scrollable;
-(char)showButtonBorder;
-(id)newSegmentWithTitle:(id)arg1 font:(id)arg2 fallbackIcon:(id)arg3 accessibilityIdentifier:(id)arg4 showLeftBorder:(char)arg5 showRightBorder:(char)arg6 ;
-(void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(int)arg2 ;
-(void)_stretchLayoutButtons;
-(char)canUseFallbackIcons;
-(CGRect)frameForSegment:(unsigned)arg1 withLayoutParameters:(IGTabControlLayoutParameters)arg2 ;
-(char)shouldHideBottomSeparator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTabControlDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGTabControlDelegate>)delegate;
-(NSString *)title;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setFont:(UIFont *)arg1 ;
-(UILabel *)titleLabel;
-(UIFont *)font;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)buttons;
-(void)setBottomSeparator:(CALayer *)arg1 ;
-(CALayer *)bottomSeparator;
-(void)setSegments:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

