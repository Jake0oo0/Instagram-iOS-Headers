/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedPhotoViewDelegate, IGUserInTagDisplayDelegate;
@class IGImageProgressView, IGUsertagGroup, NSURL, UITapGestureRecognizer, UILabel, IGUserInTagDisplayView, NSString;

@interface IGFeedPhotoView : IGFeedMediaView <IGImageProgressViewDelegate, UIGestureRecognizerDelegate> {

	char _isShowingUsertags;
	char _isShowingUsertagsIndicator;
	IGImageProgressView* _photoImageView;
	IGUsertagGroup* _usertags;
	NSURL* _imageURL;
	id<IGFeedPhotoViewDelegate> _delegate;
	id<IGUserInTagDisplayDelegate> _tagViewDelegate;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILabel* _imageSpecLabel;
	IGUserInTagDisplayView* _inTagView;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                          //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) char isShowingUsertags;                                           //@synthesize isShowingUsertags=_isShowingUsertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedPhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> tagViewDelegate;              //@synthesize tagViewDelegate=_tagViewDelegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                     //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                     //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UILabel * imageSpecLabel;                                         //@synthesize imageSpecLabel=_imageSpecLabel - In the implementation block
@property (nonatomic,retain) IGUserInTagDisplayView * inTagView;                                 //@synthesize inTagView=_inTagView - In the implementation block
@property (assign,nonatomic) char isShowingUsertagsIndicator;                                    //@synthesize isShowingUsertagsIndicator=_isShowingUsertagsIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageSpecLabelForURLString:(id)arg1 imageWidth:(float)arg2 imageHeight:(float)arg3 dataLength:(unsigned)arg4 ;
+(id)valueInString:(id)arg1 forPattern:(id)arg2 ;
-(IGUsertagGroup *)usertags;
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(void)setTagViewDelegate:(id<IGUserInTagDisplayDelegate>)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)isShowingUsertags;
-(void)showUsertagsIndicator:(char)arg1 animated:(char)arg2 ;
-(char)hasUsertags;
-(void)onDoubleTap:(id)arg1 ;
-(void)updateSingleTapRecognizer;
-(void)showUsertags:(char)arg1 animated:(char)arg2 ;
-(void)onUsertagGroupWasEdited;
-(void)toggleImageInfoDisplay;
-(void)setIsShowingUsertagsIndicator:(char)arg1 ;
-(UILabel *)imageSpecLabel;
-(CGRect)userTagIndicatorFrame;
-(void)updateImageSpecLabel:(id)arg1 withDataLength:(unsigned)arg2 ;
-(id<IGUserInTagDisplayDelegate>)tagViewDelegate;
-(IGUserInTagDisplayView *)inTagView;
-(void)setInTagView:(IGUserInTagDisplayView *)arg1 ;
-(char)isShowingUsertagsIndicator;
-(id)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedPhotoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

