
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGTabControlDelegate;
@class UIView, NSArray, UIScrollView, NSString, IGKVOHandle, CALayer;

@interface IGTabControl : UIView {

	char _keyboardIsPresenting;
	char _canUseFallbackIcons;
	UIView* _inchwormView;
	NSArray* _buttons;
	id<IGTabControlDelegate> _delegate;
	UIScrollView* _connectedScrollView;
	NSString* _title;
	int _style;
	IGKVOHandle* _contentOffsetHandle;
	CALayer* _bottomSeparator;
	int _tappedIndex;

}

@property (nonatomic,retain) NSArray * buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) IGKVOHandle * contentOffsetHandle;                     //@synthesize contentOffsetHandle=_contentOffsetHandle - In the implementation block
@property (nonatomic,retain) CALayer * bottomSeparator;                             //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic) int tappedIndex;                                       //@synthesize tappedIndex=_tappedIndex - In the implementation block
@property (assign,nonatomic) char keyboardIsPresenting;                             //@synthesize keyboardIsPresenting=_keyboardIsPresenting - In the implementation block
@property (nonatomic,readonly) char canUseFallbackIcons;                            //@synthesize canUseFallbackIcons=_canUseFallbackIcons - In the implementation block
@property (assign,nonatomic,__weak) id<IGTabControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIScrollView * connectedScrollView;                    //@synthesize connectedScrollView=_connectedScrollView - In the implementation block
@property (nonatomic,readonly) UIView * inchwormView;                               //@synthesize inchwormView=_inchwormView - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
+(float)preferredHeight;
-(void)setConnectedScrollView:(UIScrollView *)arg1 ;
-(UIView *)inchwormView;
-(void)applyStyle;
-(id)tabSegmentFont;
-(IGKVOHandle *)contentOffsetHandle;
-(void)updateScrollViewPosition;
-(void)highlightVisibleSegment;
-(void)setContentOffsetHandle:(IGKVOHandle *)arg1 ;
-(UIScrollView *)connectedScrollView;
-(CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 ;
-(void)onSegmentTapped:(id)arg1 ;
-(void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(int)arg2 ;
-(char)keyboardIsPresenting;
-(void)setTappedIndex:(int)arg1 ;
-(char)canUseFallbackIcons;
-(void)setKeyboardIsPresenting:(char)arg1 ;
-(int)tappedIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTabControlDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGTabControlDelegate>)delegate;
-(NSString *)title;
-(UIEdgeInsets)contentInsets;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(NSArray *)buttons;
-(void)setBottomSeparator:(CALayer *)arg1 ;
-(CALayer *)bottomSeparator;
-(void)setSegments:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

