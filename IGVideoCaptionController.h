

@protocol IGVideoCaptionViewType;
@class UIView, NSArray;

@interface IGVideoCaptionController : NSObject {

	char _disableCaption;
	UIView*<IGVideoCaptionViewType> _captionView;
	NSArray* _captions;

}

@property (nonatomic,retain) NSArray * captions;                                              //@synthesize captions=_captions - In the implementation block
@property (assign,nonatomic) char disableCaption;                                             //@synthesize disableCaption=_disableCaption - In the implementation block
@property (assign,nonatomic,__weak) UIView*<IGVideoCaptionViewType> captionView;              //@synthesize captionView=_captionView - In the implementation block
-(UIView*<IGVideoCaptionViewType>)captionView;
-(void)setCaptionView:(UIView*<IGVideoCaptionViewType>)arg1 ;
-(void)setCaptions:(NSArray *)arg1 ;
-(char)disableCaption;
-(void)loadCaptionForURL:(id)arg1 ;
-(void)setDisableCaption:(char)arg1 ;
-(void)didChangePlaybackTime:(double)arg1 ;
-(void)didStopPlayback;
-(NSArray *)captions;
@end

