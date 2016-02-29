/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:43 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGInlineGalleryViewDelegate;
@class IGInlineGalleryView, NSString;

@interface IGInlineGalleryHostingView : UIView <UIGestureRecognizerDelegate> {

	id<IGInlineGalleryViewDelegate> _delegate;
	IGInlineGalleryView* _inlineGalleryView;

}

@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGInlineGalleryView * inlineGalleryView;                      //@synthesize inlineGalleryView=_inlineGalleryView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didInteractOutsideWhenOpen;
-(IGInlineGalleryView *)inlineGalleryView;
-(id)initWithInlineGallery:(id)arg1 ;
-(void)setInlineGalleryView:(IGInlineGalleryView *)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

