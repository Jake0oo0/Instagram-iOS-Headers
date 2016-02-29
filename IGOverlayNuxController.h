/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:35 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGOverlayNuxControllerDelegate;
#import <Instagram/Instagram-Structs.h>
@class UIView;

@interface IGOverlayNuxController : NSObject {

	id<IGOverlayNuxControllerDelegate> _delegate;
	UIView* _NUXView;

}

@property (assign,nonatomic,__weak) id<IGOverlayNuxControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * NUXView;                                                //@synthesize NUXView=_NUXView - In the implementation block
-(UIView *)NUXView;
-(void)setNUXView:(UIView *)arg1 ;
-(void)hideNUX;
-(void)showOverlayNux:(CGRect)arg1 highlightedElement:(id)arg2 withParent:(id)arg3 withHeader:(id)arg4 withBody:(id)arg5 ;
-(void)setDelegate:(id<IGOverlayNuxControllerDelegate>)arg1 ;
-(id<IGOverlayNuxControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

