/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol IGDimmedOverlayViewControllerDelegate;
@class UIView;

@interface IGDimmedOverlayViewController : UIViewController {

	id<IGDimmedOverlayViewControllerDelegate> _delegate;
	int _statusBarStyle;
	UIView* _grayOverlayView;

}

@property (assign,nonatomic,__weak) id<IGDimmedOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                                     //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,retain) UIView * grayOverlayView;                                               //@synthesize grayOverlayView=_grayOverlayView - In the implementation block
-(void)grayOverlayViewTapped;
-(UIView *)grayOverlayView;
-(void)setDimmedOverlayAlpha:(float)arg1 ;
-(void)setGrayOverlayView:(UIView *)arg1 ;
-(void)setDelegate:(id<IGDimmedOverlayViewControllerDelegate>)arg1 ;
-(id<IGDimmedOverlayViewControllerDelegate>)delegate;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end

