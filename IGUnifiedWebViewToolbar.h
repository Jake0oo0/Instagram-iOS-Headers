
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGUnifiedWebViewToolbarDelegate;
@class UIToolbar, UIBarButtonItem;

@interface IGUnifiedWebViewToolbar : UIView {

	id<IGUnifiedWebViewToolbarDelegate> _delegate;
	UIToolbar* _toolbar;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _backItem;

}

@property (nonatomic,retain) UIToolbar * toolbar;                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * forwardItem;                                    //@synthesize forwardItem=_forwardItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backItem;                                       //@synthesize backItem=_backItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGUnifiedWebViewToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateNavigationButtonsForWebView:(id)arg1 ;
-(void)backNavigationButtonTapped;
-(void)forwardNavigationButtonTapped;
-(void)setForwardItem:(UIBarButtonItem *)arg1 ;
-(void)setBackItem:(UIBarButtonItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGUnifiedWebViewToolbarDelegate>)arg1 ;
-(id<IGUnifiedWebViewToolbarDelegate>)delegate;
-(UIBarButtonItem *)backItem;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(UIBarButtonItem *)forwardItem;
@end

