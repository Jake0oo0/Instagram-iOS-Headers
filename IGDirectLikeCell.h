
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class UIImageView, UIImage, IGDirectContentCellUploadDecorator;

@interface IGDirectLikeCell : IGDirectContentCell <IGDirectContentUploadCell> {

	char _isPulsing;
	id<IGDirectContentUpoadCellDelegate> delegate;
	UIImageView* _likeImageView;
	UIImage* _likeImage;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	CGRect _defaultLikeFrame;

}

@property (nonatomic,retain) UIImageView * likeImageView;                                       //@synthesize likeImageView=_likeImageView - In the implementation block
@property (assign,nonatomic) CGRect defaultLikeFrame;                                           //@synthesize defaultLikeFrame=_defaultLikeFrame - In the implementation block
@property (assign,nonatomic) char isPulsing;                                                    //@synthesize isPulsing=_isPulsing - In the implementation block
@property (nonatomic,retain) UIImage * likeImage;                                               //@synthesize likeImage=_likeImage - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
+(id)likeImage;
+(float)likeCellHeight;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(id)timestampText;
-(void)setCellDecorator:(id)arg1 ;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(CGRect)tapTargetFrame;
-(id)cellDecorator;
-(UIImageView *)likeImageView;
-(UIImage *)likeImage;
-(void)setDefaultLikeFrame:(CGRect)arg1 ;
-(CGRect)defaultLikeFrame;
-(void)setIsPulsing:(char)arg1 ;
-(void)pulseLikeIcon;
-(void)setLikeImageView:(UIImageView *)arg1 ;
-(void)setLikeImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(char)isPulsing;
@end

