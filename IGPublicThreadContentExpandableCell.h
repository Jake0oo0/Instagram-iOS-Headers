
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIView, IGHeartView;

@interface IGPublicThreadContentExpandableCell : IGPublicThreadContentCell <IGDirectContentUploadCell> {

	char _isAnimating;
	char _expanded;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIView* _contentImageView;
	float _cornerRadius;
	float _currentUsernameXOffset;
	float _expansionProgress;
	IGHeartView* _heartView;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (nonatomic,retain) UIView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic) char isAnimating;                                                  //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char expanded;                                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize expandedPhotoSize;                                          //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                                        //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) float currentUsernameXOffset;                                      //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
@property (assign,nonatomic) float expansionProgress;                                           //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) IGHeartView * heartView;                                           //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(float)photoExpandedHeightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(float)heightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(CGSize)contractedOffsetForUploadSpinner;
+(CGSize)expandedOffsetForUploadSpinner;
-(void)completeAnimation;
-(void)performDelete;
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
-(float)usernameXOffset;
-(void)setIsSameUserContent:(char)arg1 ;
-(UIView *)contentImageView;
-(float)expandedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(float)arg1 ;
-(void)updateProfileAlpha;
-(float)currentUsernameXOffset;
-(float)contractedUsernameXOffset;
-(void)setExpansionProgress:(float)arg1 ;
-(IGHeartView *)heartView;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(float)expansionProgress;
-(float)expandedCornerRadius;
-(float)contractedCornerRadius;
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(void)animateLikeAction;
-(void)animateExpanded:(char)arg1 withProgress:(float)arg2 ;
-(void)setContentImageView:(UIView *)arg1 ;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(CGSize)photoSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)prepareForReuse;
-(char)isAnimating;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)setContent:(id)arg1 ;
-(void)beginAnimation;
@end
