
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedPhotoViewDelegate, IGUserInTagDisplayDelegate;
@class IGUserInTagDisplayView, UILabel, IGImageProgressView, IGUsertagGroup, NSURL, UITapGestureRecognizer, IGFeedItemPhotoCell, NSString;

@interface IGFeedPhotoView : IGFeedMediaView <IGImageProgressViewDelegate, UIGestureRecognizerDelegate> {

	IGUserInTagDisplayView* _inTagView;
	char _isShowingUsertagsIndicator;
	UILabel* _imageSpecLabel;
	char _isShowingUsertags;
	IGImageProgressView* _photoImageView;
	IGUsertagGroup* _usertags;
	NSURL* _imageURL;
	id<IGFeedPhotoViewDelegate> _delegate;
	id<IGUserInTagDisplayDelegate> _tagViewDelegate;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                          //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) char isShowingUsertags;                                           //@synthesize isShowingUsertags=_isShowingUsertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedPhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> tagViewDelegate;              //@synthesize tagViewDelegate=_tagViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) IGFeedItemPhotoCell * parentCellView; 
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                     //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                     //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageSpecLabelForURLString:(id)arg1 imageWidth:(float)arg2 imageHeight:(float)arg3 dataLength:(unsigned)arg4 ;
+(id)valueInString:(id)arg1 forPattern:(id)arg2 ;
-(IGUsertagGroup *)usertags;
-(void)onTap:(id)arg1 ;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)onDoubleTap:(id)arg1 ;
-(void)updateSingleTapRecognizer;
-(void)showUsertags:(char)arg1 animated:(char)arg2 ;
-(char)hasUsertags;
-(void)onUsertagGroupWasEdited;
-(void)toggleImageInfoDisplay;
-(void)showUsertagsIndicator:(char)arg1 animated:(char)arg2 ;
-(void)onTagIndicatorTapped;
-(CGRect)userTagIndicatorFrame;
-(void)updateImageSpecLabel:(id)arg1 withDataLength:(unsigned)arg2 ;
-(char)isShowingUsertags;
-(id<IGUserInTagDisplayDelegate>)tagViewDelegate;
-(void)setTagViewDelegate:(id<IGUserInTagDisplayDelegate>)arg1 ;
-(id)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedPhotoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

