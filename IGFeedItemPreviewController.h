
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGPreviewingAction.h>

@class UINavigationController, IGPreviewEventManager, IGFeedItem, IGFeedItemPreviewView, UIImage, NSArray, IGFeedVideoPlayer, NSString;

@interface IGFeedItemPreviewController : IGViewController <IGPreviewingAction> {

	float _previewWidth;
	UINavigationController* _navigationControllerForPushing;
	IGPreviewEventManager* _logger;
	IGFeedItem* _feedItem;
	IGFeedItemPreviewView* _thumbnailView;
	UIImage* _placeholderImage;
	NSArray* _previewItems;
	IGFeedVideoPlayer* _videoPlayer;

}

@property (assign,nonatomic) float previewWidth;                                                   //@synthesize previewWidth=_previewWidth - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationControllerForPushing;              //@synthesize navigationControllerForPushing=_navigationControllerForPushing - In the implementation block
@property (nonatomic,retain) IGPreviewEventManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewView * thumbnailView;                                //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                                         //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) NSArray * previewItems;                                             //@synthesize previewItems=_previewItems - In the implementation block
@property (nonatomic,readonly) IGFeedVideoPlayer * videoPlayer;                                    //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)analyticsModule;
-(id)previewActionBarItems;
-(void)postUpdated:(id)arg1 ;
-(void)showDirectShare;
-(void)viewProfile;
-(void)showCommentController;
-(float)previewWidth;
-(void)playVideo;
-(UINavigationController *)navigationControllerForPushing;
-(id)initWithFeedItem:(id)arg1 placeholderImage:(id)arg2 showViewProfileAction:(char)arg3 ;
-(void)setPreviewWidth:(float)arg1 ;
-(void)setNavigationControllerForPushing:(UINavigationController *)arg1 ;
-(IGPreviewEventManager *)logger;
-(void)setLogger:(IGPreviewEventManager *)arg1 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)previewActionItems;
-(void)setThumbnailView:(IGFeedItemPreviewView *)arg1 ;
-(IGFeedItemPreviewView *)thumbnailView;
-(UIImage *)placeholderImage;
-(NSArray *)previewItems;
@end
