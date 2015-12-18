
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGNewsTableViewCellDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGWebViewTableViewCellDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGNewsTableViewControllerDelegate;
@class IGViewController, NSArray, IGPullToRefreshViewManager, IGTableViewInsetInfoView, NSMutableDictionary, IGNewsEmptyFeedView, UIView, IGActivityPreviewingHandler, NSString;

@interface IGNewsTableViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGNewsTableViewCellDelegate, IGPullToRefreshProtocol, IGWebViewTableViewCellDelegate, IGRaindropAnalyticsDelegate> {

	char _loading;
	id<IGNewsTableViewControllerDelegate> _delegate;
	int _segment;
	IGViewController* _containingViewController;
	NSArray* _sections;
	float _pullToRefreshYInset;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGTableViewInsetInfoView* _infoView;
	NSMutableDictionary* _webViewCellSizes;
	IGNewsEmptyFeedView* _emptyFeedView;
	UIView* _lineView;
	IGActivityPreviewingHandler* _previewDelegate;

}

@property (assign,nonatomic,__weak) id<IGNewsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int segment;                                                      //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic,__weak) IGViewController * containingViewController;                 //@synthesize containingViewController=_containingViewController - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                 //@synthesize sections=_sections - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                      //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) float pullToRefreshYInset;                                          //@synthesize pullToRefreshYInset=_pullToRefreshYInset - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webViewCellSizes;                             //@synthesize webViewCellSizes=_webViewCellSizes - In the implementation block
@property (nonatomic,retain) IGNewsEmptyFeedView * emptyFeedView;                                //@synthesize emptyFeedView=_emptyFeedView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                  //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) IGActivityPreviewingHandler * previewDelegate;                      //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storiesWithDictionaries:(id)arg1 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)setLineView:(UIView *)arg1 ;
-(float)pullToRefreshYInset;
-(void)setPullToRefreshYInset:(float)arg1 ;
-(void)newsCell:(id)arg1 openURL:(id)arg2 ;
-(void)webNewsCell:(id)arg1 didCalculateHeight:(float)arg2 ;
-(void)onFetchFailed:(id)arg1 ;
-(void)finishedLoadingData;
-(id)newEmptyFeedView;
-(void)onDataReceived:(id)arg1 ;
-(void)showNuxIfAppropriate;
-(void)refreshFromInfoView;
-(id)storyForRowAtIndexPath:(id)arg1 ;
-(NSMutableDictionary *)webViewCellSizes;
-(id)labelForHeaderInSection:(int)arg1 ;
-(IGNewsEmptyFeedView *)emptyFeedView;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setWebViewCellSizes:(NSMutableDictionary *)arg1 ;
-(void)setEmptyFeedView:(IGNewsEmptyFeedView *)arg1 ;
-(IGActivityPreviewingHandler *)previewDelegate;
-(void)setPreviewDelegate:(IGActivityPreviewingHandler *)arg1 ;
-(void)fetchData;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)setDelegate:(id<IGNewsTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGNewsTableViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(int)segment;
-(UIView *)lineView;
-(void)setContainingViewController:(IGViewController *)arg1 ;
-(IGViewController *)containingViewController;
-(void)setLoading:(char)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

