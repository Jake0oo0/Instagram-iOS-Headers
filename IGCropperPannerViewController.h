
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGBaseCameraViewController.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>

@class IGMediaMetadata, UIImage, UIView, IGCropView, IGTapButton, IGCameraGuideView, UIBarButtonItem, NSString;

@interface IGCropperPannerViewController : IGBaseCameraViewController <IGCropViewUserInteractionDelegate> {

	IGMediaMetadata* _mediaMetadata;
	UIImage* _fullSizeImage;
	int _cropMode;
	UIView* _cropContainer;
	UIView* _cropContentsContainer;
	IGCropView* _cropView;
	IGTapButton* _longcatButton;
	IGCameraGuideView* _guideView;
	UIBarButtonItem* _dismissButtonItem;
	UIBarButtonItem* _nextButtonItem;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                  //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) UIImage * fullSizeImage;                          //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (assign,nonatomic) int cropMode;                                     //@synthesize cropMode=_cropMode - In the implementation block
@property (nonatomic,retain) UIView * cropContainer;                           //@synthesize cropContainer=_cropContainer - In the implementation block
@property (nonatomic,retain) UIView * cropContentsContainer;                   //@synthesize cropContentsContainer=_cropContentsContainer - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                            //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGTapButton * longcatButton;                      //@synthesize longcatButton=_longcatButton - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                    //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * dismissButtonItem;              //@synthesize dismissButtonItem=_dismissButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButtonItem;                 //@synthesize nextButtonItem=_nextButtonItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCropView *)cropView;
-(char)overlayIsOpaque;
-(char)prefersToolbarHidden;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)setCropContainer:(UIView *)arg1 ;
-(UIView *)cropContainer;
-(void)setCropContentsContainer:(UIView *)arg1 ;
-(UIView *)cropContentsContainer;
-(void)setCropView:(IGCropView *)arg1 ;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(void)toggleCropperCropMode;
-(void)setLongcatButton:(IGTapButton *)arg1 ;
-(IGTapButton *)longcatButton;
-(void)toggleCropperCropModeFromButton;
-(void)onCancelButtonTapped;
-(void)onLibraryNextButtonTapped;
-(UIImage *)fullSizeImage;
-(id)initWithImage:(id)arg1 mediaMetadata:(id)arg2 ;
-(UIBarButtonItem *)dismissButtonItem;
-(void)setDismissButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)nextButtonItem;
-(void)setNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)viewDidLoad;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
@end
