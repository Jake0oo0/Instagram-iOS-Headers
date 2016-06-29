

@protocol IGFeedReshareNUXManagerDatasource;
@class IGListAdapter, UICollectionView;

@interface IGFeedReshareNUXManager : NSObject {

	id<IGFeedReshareNUXManagerDatasource> _feedItemDatasource;
	IGListAdapter* _listAdapter;
	UICollectionView* _collectionView;
	int _maxNuxQuota;
	double _minNUXReshowInterval;
	double _minNUXReactivationIntervalAfterReshareAction;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) int maxNuxQuota;                                                            //@synthesize maxNuxQuota=_maxNuxQuota - In the implementation block
@property (nonatomic,readonly) double minNUXReshowInterval;                                                //@synthesize minNUXReshowInterval=_minNUXReshowInterval - In the implementation block
@property (nonatomic,readonly) double minNUXReactivationIntervalAfterReshareAction;                        //@synthesize minNUXReactivationIntervalAfterReshareAction=_minNUXReactivationIntervalAfterReshareAction - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedReshareNUXManagerDatasource> feedItemDatasource;              //@synthesize feedItemDatasource=_feedItemDatasource - In the implementation block
@property (assign,nonatomic,__weak) IGListAdapter * listAdapter;                                           //@synthesize listAdapter=_listAdapter - In the implementation block
-(IGListAdapter *)listAdapter;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)hideAndCancelScheduledReshareNUX;
-(void)showReshareNUXNowIfNeeded;
-(int)maxNuxQuota;
-(double)minNUXReactivationIntervalAfterReshareAction;
-(double)minNUXReshowInterval;
-(void)showReshareNUXOnNewFeed;
-(void)showReshareNUXOnOldFeed;
-(char)showReshareNUXForFeedItem:(id)arg1 visibleActionCell:(id)arg2 ;
-(id<IGFeedReshareNUXManagerDatasource>)feedItemDatasource;
-(void)setFeedItemDatasource:(id<IGFeedReshareNUXManagerDatasource>)arg1 ;
-(void)scheduleShowingReshareNUX;
-(void)markNUXAction;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

