
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface IGRetroRegistrationNextButton : UIButton {

	char _isVerifying;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (assign,nonatomic) char isVerifying;                                        //@synthesize isVerifying=_isVerifying - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
-(void)setIsVerifying:(char)arg1 ;
-(char)isVerifying;
-(void)addLoadingIndicator;
-(void)removeLoadingIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
@end
