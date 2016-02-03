/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:16 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, CAShapeLayer;

@interface IGEventViewerLoadingView : UIView {

	UIActivityIndicatorView* _spinner;
	CAShapeLayer* _spinnerBackgroundLayer;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * spinner;                  //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * spinnerBackgroundLayer;              //@synthesize spinnerBackgroundLayer=_spinnerBackgroundLayer - In the implementation block
-(void)setupSpinnerBackgroundLayer;
-(void)setupSpinner;
-(CAShapeLayer *)spinnerBackgroundLayer;
-(void)setSpinnerBackgroundLayer:(CAShapeLayer *)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setupSubviews;
@end

