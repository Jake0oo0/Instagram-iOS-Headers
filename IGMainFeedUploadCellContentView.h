
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGMainFeedUploadCellContentViewDelegate;
@class NSDate, IGUploadModel, UIButton, UILabel, UIImageView, UIProgressView, NSString;

@interface IGMainFeedUploadCellContentView : UIView <IGActionSheetDelegate> {

	char _hasRenderedImage;
	id<IGMainFeedUploadCellContentViewDelegate> _delegate;
	NSDate* _uploadStart;
	IGUploadModel* _activePost;
	UIButton* _retryButton;
	UIButton* _removeButton;
	UILabel* _statusLabel;
	UIImageView* _imageView;
	UIImageView* _imageOverlayView;
	UIProgressView* _progressView;

}

@property (assign,nonatomic,__weak) id<IGMainFeedUploadCellContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * uploadStart;                                                     //@synthesize uploadStart=_uploadStart - In the implementation block
@property (nonatomic,retain) IGUploadModel * activePost;                                               //@synthesize activePost=_activePost - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                                                   //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIButton * removeButton;                                                  //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                                           //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)setActivePost:(IGUploadModel *)arg1 ;
-(IGUploadModel *)activePost;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(void)removeUpload:(id)arg1 ;
-(void)retryUpload:(id)arg1 ;
-(void)onMediaUploadCompleted:(id)arg1 ;
-(NSDate *)uploadStart;
-(void)setUploadStart:(NSDate *)arg1 ;
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(UIImageView *)imageOverlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMainFeedUploadCellContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedUploadCellContentViewDelegate>)delegate;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)updateContent;
-(UIButton *)removeButton;
@end

