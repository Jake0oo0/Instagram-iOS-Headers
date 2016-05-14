/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGInlineGalleryViewDelegate;
@class IGInlineGalleryView, UICollectionView, NSString;

@interface IGInlineGalleryHostingView : UIView <UIGestureRecognizerDelegate> {

	id<IGInlineGalleryViewDelegate> _delegate;
	IGInlineGalleryView* _galleryView;

}

@property (nonatomic,retain) IGInlineGalleryView * galleryView;                            //@synthesize galleryView=_galleryView - In the implementation block
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int style; 
@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didInteractOutsideWhenOpen;
-(id)initWithInlineGallery:(id)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(int)state;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UICollectionView *)collectionView;
-(void)setGalleryView:(IGInlineGalleryView *)arg1 ;
-(IGInlineGalleryView *)galleryView;
@end

