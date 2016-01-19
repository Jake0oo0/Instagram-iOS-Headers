/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:44 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

