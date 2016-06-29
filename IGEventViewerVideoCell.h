
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@protocol IGEventViewerMediaCellDelegate;
@class UIActivityIndicatorView, UITapGestureRecognizer, NSString;

@interface IGEventViewerVideoCell : IGFeedItemVideoCell <IGEventViewerCellType> {

	id<IGEventViewerMediaCellDelegate> _tapDelegate;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _singleTap;
	UITapGestureRecognizer* _doubleTap;

}

@property (nonatomic,retain) UITapGestureRecognizer * singleTap;                                 //@synthesize singleTap=_singleTap - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTap;                                 //@synthesize doubleTap=_doubleTap - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIActivityIndicatorView * spinner;                         //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShadowHidden:(char)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(void)configureSingleTap;
-(void)didReceiveSingleTap:(id)arg1 ;
-(void)setSingleTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTap;
-(void)setDoubleTap:(UITapGestureRecognizer *)arg1 ;
-(void)didReceiveDoubleTap:(id)arg1 ;
-(UITapGestureRecognizer *)singleTap;
-(void)configureVideoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTapDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(id<IGEventViewerMediaCellDelegate>)tapDelegate;
-(void)prepareForReuse;
-(void)setDoubleTapEnabled:(char)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

