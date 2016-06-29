
#import <Instagram/IGGroupedTableViewController.h>

@class IGViewControllerTitleDetailTitleView, IGAdViewModel, IGAdsManagerDataProvider, IGAdsManagerDeleteAdHandler, IGAdsManagerLogger;

@interface IGAdsManagerAdViewController : IGGroupedTableViewController {

	char _isDeleting;
	char _isShowingPreview;
	IGViewControllerTitleDetailTitleView* _titleView;
	IGAdViewModel* _adViewModel;
	IGAdsManagerDataProvider* _dataProvider;
	IGAdsManagerDeleteAdHandler* _deleteHandler;
	IGAdsManagerLogger* _logger;

}

@property (nonatomic,readonly) IGViewControllerTitleDetailTitleView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) IGAdViewModel * adViewModel;                                   //@synthesize adViewModel=_adViewModel - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDataProvider * dataProvider;                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDeleteAdHandler * deleteHandler;                   //@synthesize deleteHandler=_deleteHandler - In the implementation block
@property (nonatomic,readonly) IGAdsManagerLogger * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) char isDeleting;                                                 //@synthesize isDeleting=_isDeleting - In the implementation block
@property (assign,nonatomic) char isShowingPreview;                                           //@synthesize isShowingPreview=_isShowingPreview - In the implementation block
-(id)analyticsModule;
-(void)setUpTitleView;
-(IGAdViewModel *)adViewModel;
-(void)showAdPreviewForFeedItem:(id)arg1 ;
-(char)isDeleting;
-(void)didTapDeleteFromCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didConfirmDeleteCurrentAdFromCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setIsDeleting:(char)arg1 ;
-(IGAdsManagerDeleteAdHandler *)deleteHandler;
-(id)previewAdViewControllerWithFeedItem:(id)arg1 ;
-(id)cellForPreviewSection;
-(id)cellForInformationSectionAtRow:(int)arg1 ;
-(id)paymentCell;
-(id)actionCell;
-(id)standardCellWithText:(id)arg1 detailedText:(id)arg2 ;
-(id)headerForErrorStatus:(id)arg1 ;
-(id)initWithAdViewModel:(id)arg1 logger:(id)arg2 ;
-(IGAdsManagerLogger *)logger;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGViewControllerTitleDetailTitleView *)titleView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGAdsManagerDataProvider *)dataProvider;
-(char)isShowingPreview;
-(void)setIsShowingPreview:(char)arg1 ;
@end

