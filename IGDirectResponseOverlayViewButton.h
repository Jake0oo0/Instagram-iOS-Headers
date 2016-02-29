/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDirectResponseOverlayable.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGDirectResponseOverlayViewDelegate;
@class IGDirectResponseOverlayViewButtonContentView, IGTapButton, NSString;

@interface IGDirectResponseOverlayViewButton : UIView <IGDirectResponseOverlayable, IGImageViewDelegate> {

	id<IGDirectResponseOverlayViewDelegate> _delegate;
	IGDirectResponseOverlayViewButtonContentView* _overlayContentView;
	IGTapButton* _overlayTappableElement;

}

@property (nonatomic,readonly) IGDirectResponseOverlayViewButtonContentView * overlayContentView;              //@synthesize overlayContentView=_overlayContentView - In the implementation block
@property (nonatomic,readonly) IGTapButton * overlayTappableElement;                                           //@synthesize overlayTappableElement=_overlayTappableElement - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectResponseOverlayViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)transparentViewTapped:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(CGRect)arg3 ;
-(void)setupSubviewsWithDirectResponseInfo:(id)arg1 ;
-(void)overlayContentViewTapped:(id)arg1 ;
-(IGDirectResponseOverlayViewButtonContentView *)overlayContentView;
-(IGTapButton *)overlayTappableElement;
-(void)showOverlayAnimated:(char)arg1 ;
-(void)setDelegate:(id<IGDirectResponseOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectResponseOverlayViewDelegate>)delegate;
@end

