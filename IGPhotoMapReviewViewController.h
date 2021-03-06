
#import <Instagram/IGViewController.h>
#import <Instagram/IGPhotoMapDataSourceDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/IGPhotoMapEditManagerDelegate.h>

@protocol IGPhotoMapReviewDelegate;
@class IGUserPhotoMapDataSource, IGPhotoMapEditManager, IGQuadtree, IGPlainTableView, UIBarButtonItem, UIActivityIndicatorView, NSMutableArray, UIView, NSOperationQueue, UIWebView, NSString;

@interface IGPhotoMapReviewViewController : IGViewController <IGPhotoMapDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, UIWebViewDelegate, IGPhotoMapEditManagerDelegate> {

	IGUserPhotoMapDataSource* _dataSource;
	IGPhotoMapEditManager* _editManager;
	IGQuadtree* _quadtree;
	IGPlainTableView* _tableView;
	UIBarButtonItem* _doneButtonItem;
	UIActivityIndicatorView* _spinner;
	NSMutableArray* _clusters;
	UIView* _headerView;
	NSOperationQueue* _clusteringQueue;
	UIWebView* _webviewForNoticeLabel;
	char _loadReviewRequestFailed;
	id<IGPhotoMapReviewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGPhotoMapReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)onCancelModal;
-(void)onImageTapped:(id)arg1 ;
-(void)onQuadtreeRequestFailed:(id)arg1 ;
-(id)editManager;
-(void)setSelectedStateForAllPoints:(char)arg1 ;
-(void)updateSelectionControls;
-(void)deselectAllButtonTapped:(id)arg1 ;
-(void)selectAllButtonTapped:(id)arg1 ;
-(void)startReviewRequest;
-(void)clusterQuadtreeFinished;
-(void)onDoneTapped:(id)arg1 ;
-(void)cancelAndGoBack;
-(void)notifyDelegateThatReviewHasCompleted;
-(void)clusterQuadtreeAsyncronously;
-(void)onReviewRequestFailed;
-(void)onToggleSelectionTapped:(id)arg1 ;
-(id)locationNamesForCluster:(id)arg1 ;
-(void)selectAllInClusterButtonTapped:(id)arg1 ;
-(void)onQuadtreeReceived:(id)arg1 ;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestFinished:(id)arg2 ;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestFailed:(char)arg2 ;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestStarted:(int)arg2 ;
-(void)setDelegate:(id<IGPhotoMapReviewDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGPhotoMapReviewDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)headerView;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(id)spinner;
@end

