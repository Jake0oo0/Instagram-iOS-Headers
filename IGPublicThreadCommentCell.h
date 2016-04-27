
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, IGCoreTextView, NSString;

@interface IGPublicThreadCommentCell : IGPublicThreadContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell> {

	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	IGCoreTextView* _commentTextView;

}

@property (nonatomic,retain) IGCoreTextView * commentTextView;                                  //@synthesize commentTextView=_commentTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(float)cellTopPadding:(int)arg1 ;
+(id)emojiCommentStyle;
+(id)commentStyle;
+(char)handlesExternalURLs;
+(float)cellBottomPadding:(int)arg1 ;
+(float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2 ;
+(char)shouldAddTopSeparatorLineWithCurrentContent:(id)arg1 prevContent:(id)arg2 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)performDelete;
-(IGCoreTextView *)commentTextView;
-(id)createCommentTextView;
-(void)setCommentTextView:(IGCoreTextView *)arg1 ;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(id)timestampText;
-(void)setCellDecorator:(id)arg1 ;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(CGRect)tapTargetFrame;
-(id)cellDecorator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end
