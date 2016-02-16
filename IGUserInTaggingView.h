/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:59 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGUsertagViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGUserInTaggingViewDelegate;
@class NSMutableDictionary, UIScrollView, UIImageView, UIView, IGMediaOverlayIndicator, IGUsertagView, NSMutableSet, NSString;

@interface IGUserInTaggingView : UIView <UIScrollViewDelegate, IGUsertagViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableDictionary* _tagViews;
	UIScrollView* _scrollView;
	UIImageView* _imageView;
	UIView* _tagViewContainer;
	IGMediaOverlayIndicator* _indicator;
	IGUsertagView* _pendingUsertagView;
	char _isAddingTag;
	char _allowTagging;
	id<IGUserInTaggingViewDelegate> _delegate;
	NSMutableSet* _untaggedFaces;

}

@property (nonatomic,readonly) char isAddingTag;                                           //@synthesize isAddingTag=_isAddingTag - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTaggingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowTagging;                                            //@synthesize allowTagging=_allowTagging - In the implementation block
@property (nonatomic,retain) NSMutableSet * untaggedFaces;                                 //@synthesize untaggedFaces=_untaggedFaces - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(id)arg1 ;
-(void)tagViewWillMove:(id)arg1 ;
-(void)tagViewDidMove:(id)arg1 ;
-(void)tagViewDidEndMove:(id)arg1 ;
-(void)tagViewWasSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(void)hideAllTagsWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)allowTagging;
-(void)startTaggingAtPosition:(CGPoint)arg1 ;
-(void)addTag:(id)arg1 andNotifyDelegate:(char)arg2 ;
-(void)fixOverlapsWithViews:(id)arg1 ;
-(void)dismissWithUser:(id)arg1 ;
-(void)presentAllUsertags;
-(char)isAddingTag;
-(void)setAllowTagging:(char)arg1 ;
-(NSMutableSet *)untaggedFaces;
-(void)setUntaggedFaces:(NSMutableSet *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGUserInTaggingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGUserInTaggingViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setImageView:(id)arg1 ;
@end

