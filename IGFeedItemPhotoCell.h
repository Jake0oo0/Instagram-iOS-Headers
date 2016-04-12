/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGDirectResponseOverlayViewDelegate.h>
#import <Instagram/IGOverlayable.h>

@protocol IGFeedItemPhotoCellDelegate, IGDirectResponseOverlayable;
@class IGPost, IGFeedPhotoView, UIView, NSString;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell <IGFeedPhotoViewDelegate, IGDirectResponseOverlayViewDelegate, IGOverlayable> {

	IGPost* _post;
	IGFeedPhotoView* _photoView;
	id<IGFeedItemPhotoCellDelegate> _delegate;
	UIView*<IGDirectResponseOverlayable> _overlayView;

}

@property (nonatomic,retain) IGFeedPhotoView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPhotoCellDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<IGDirectResponseOverlayable> overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)post;
-(void)setPost:(id)arg1 ;
-(void)associateAsPhotoViewDelegate;
-(id)accessibleElements;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)showOverlayForDirectResponseInfo:(id)arg1 animated:(char)arg2 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)hideUsertagsIndicatorForPost:(id)arg1 ;
-(void)overlayViewDidTap:(id)arg1 ;
-(void)overlayViewDidTapOnButton:(id)arg1 ;
-(void)peekUsertagsIndicator;
-(IGFeedPhotoView *)photoView;
-(void)setPhotoView:(IGFeedPhotoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPhotoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPhotoCellDelegate>)delegate;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setOverlayView:(UIView*<IGDirectResponseOverlayable>)arg1 ;
-(UIView*<IGDirectResponseOverlayable>)overlayView;
@end

