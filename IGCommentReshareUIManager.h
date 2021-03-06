
#import <Instagram/IGCommentReshareBannerDelegate.h>

@protocol IGCommentReshareUIManagerDelegate, IGCommentTextViewWithReshareProtocol;
@class UIView, IGCommentReshareBanner, UIImageView, NSSet, NSString;

@interface IGCommentReshareUIManager : NSObject <IGCommentReshareBannerDelegate> {

	id<IGCommentReshareUIManagerDelegate> _delegate;
	UIView* _view;
	UIView* _commentView;
	UIView* _autoCompletionView;
	UIView*<IGCommentTextViewWithReshareProtocol> _textView;
	IGCommentReshareBanner* _reshareBanner;
	UIImageView* _carrot;
	UIView* _commentsOverlay;

}

@property (nonatomic,readonly) UIView * view;                                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIView * commentView;                                                //@synthesize commentView=_commentView - In the implementation block
@property (nonatomic,readonly) UIView * autoCompletionView;                                         //@synthesize autoCompletionView=_autoCompletionView - In the implementation block
@property (nonatomic,readonly) UIView*<IGCommentTextViewWithReshareProtocol> textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) IGCommentReshareBanner * reshareBanner;                              //@synthesize reshareBanner=_reshareBanner - In the implementation block
@property (nonatomic,readonly) UIImageView * carrot;                                                //@synthesize carrot=_carrot - In the implementation block
@property (nonatomic,readonly) UIView * commentsOverlay;                                            //@synthesize commentsOverlay=_commentsOverlay - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentReshareUIManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * viewsToMoveWithKeyboard; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)commentView;
-(IGCommentReshareBanner *)reshareBanner;
-(UIImageView *)carrot;
-(UIView *)commentsOverlay;
-(void)setFramesForReshareStatus:(int)arg1 ;
-(UIView *)autoCompletionView;
-(void)didDismissCommentReshareBanner:(id)arg1 ;
-(id)initWithContainerView:(id)arg1 commentView:(id)arg2 autoCompletionView:(id)arg3 textView:(id)arg4 ;
-(NSSet *)viewsToMoveWithKeyboard;
-(void)updateUIForReshareStatus:(int)arg1 inTransition:(char)arg2 ;
-(void)setDelegate:(id<IGCommentReshareUIManagerDelegate>)arg1 ;
-(id<IGCommentReshareUIManagerDelegate>)delegate;
-(UIView *)view;
-(UIView*<IGCommentTextViewWithReshareProtocol>)textView;
@end

