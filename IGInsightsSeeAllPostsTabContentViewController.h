/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGInsightsInsightsDataOrderingSelectorViewDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewControllerDelegate;
@class IGInsightsCollectionViewComponent, IGInsightsDataProvider, IGListAdapter, NSArray, IGListCollectionView, IGInsightsMediaFeedListItemController, IGInsightsInsightsDataOrderingSelectorView, UIActivityIndicatorView, NSDictionary, NSString;

@interface IGInsightsSeeAllPostsTabContentViewController : UIViewController <IGFeedNetworkSourceDelegate, IGInsightsDataProviderDelegate, IGListAdapterDataSource, UICollectionViewDelegate, IGInsightsInsightsDataOrderingSelectorViewDelegate> {

	id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> _delegate;
	IGInsightsCollectionViewComponent* _collectionViewComponent;
	IGInsightsDataProvider* _insightsDataProvider;
	IGInsightsDataProvider* _mediaBundleDataProvider;
	IGListAdapter* _listAdapter;
	NSArray* _objects;
	IGListCollectionView* _collectionView;
	IGInsightsMediaFeedListItemController* _feedListItemController;
	NSArray* _mediaBundles;
	int _mediaCellCategory;
	IGInsightsInsightsDataOrderingSelectorView* _orderingSelectorView;
	UIActivityIndicatorView* _spinner;
	NSDictionary* _buttonToMediaCellCategoryMapping;
	NSArray* _mediaOrderSelectorTabs;
	NSDictionary* _queryItems;

}

@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewComponent * collectionViewComponent;                            //@synthesize collectionViewComponent=_collectionViewComponent - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * insightsDataProvider;                                          //@synthesize insightsDataProvider=_insightsDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                       //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) NSArray * objects;                                                                      //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGInsightsMediaFeedListItemController * feedListItemController;                         //@synthesize feedListItemController=_feedListItemController - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                                                   //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (assign,nonatomic) int mediaCellCategory;                                                                  //@synthesize mediaCellCategory=_mediaCellCategory - In the implementation block
@property (nonatomic,retain) IGInsightsInsightsDataOrderingSelectorView * orderingSelectorView;                      //@synthesize orderingSelectorView=_orderingSelectorView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) NSDictionary * buttonToMediaCellCategoryMapping;                                          //@synthesize buttonToMediaCellCategoryMapping=_buttonToMediaCellCategoryMapping - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                                         //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,copy) NSDictionary * queryItems;                                                                //@synthesize queryItems=_queryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(NSArray *)mediaBundles;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(int)mediaCellCategory;
-(void)setMediaCellCategory:(int)arg1 ;
-(void)fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)_initializeButtonToMediaCellCategoryMapping;
-(char)shouldFetchOnInit;
-(void)requestInsightsDataForQueryItems:(id)arg1 ;
-(void)setButtonToMediaCellCategoryMapping:(NSDictionary *)arg1 ;
-(char)shouldFetchOnViewDidLoad;
-(void)setOrderingSelectorView:(IGInsightsInsightsDataOrderingSelectorView *)arg1 ;
-(IGInsightsInsightsDataOrderingSelectorView *)orderingSelectorView;
-(NSArray *)mediaOrderSelectorTabs;
-(id)getOrderingStringArrayFromTabDictionary:(id)arg1 ;
-(void)initializeSpinner;
-(NSDictionary *)buttonToMediaCellCategoryMapping;
-(IGInsightsMediaFeedListItemController *)feedListItemController;
-(IGInsightsDataProvider *)insightsDataProvider;
-(void)didGetMediaIDsFromDataProvider:(id)arg1 ;
-(void)didGetMediaBundleFromDataProvider:(id)arg1 ;
-(IGInsightsCollectionViewComponent *)collectionViewComponent;
-(void)setInsightsDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(void)setCollectionViewComponent:(IGInsightsCollectionViewComponent *)arg1 ;
-(void)updateViewWithMediaBundle:(id)arg1 ;
-(void)didTapOrderingSelectorView:(id)arg1 index:(unsigned*)arg2 ;
-(id)initWithCollectionViewComponent:(id)arg1 mediaOrderSelectorTabs:(id)arg2 ;
-(id)initWithQueryItems:(id)arg1 ;
-(void)setFeedListItemController:(IGInsightsMediaFeedListItemController *)arg1 ;
-(NSArray *)objects;
-(void)setDelegate:(id<IGInsightsSeeAllPostsTabContentViewControllerDelegate>)arg1 ;
-(id<IGInsightsSeeAllPostsTabContentViewControllerDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(void)setQueryItems:(NSDictionary *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(NSDictionary *)queryItems;
-(void)setObjects:(NSArray *)arg1 ;
@end

