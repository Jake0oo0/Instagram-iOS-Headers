
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol IGSelectAlbumDelegate, OS_dispatch_queue;
@class UITableView, UIActivityIndicatorView, NSObject, PHAssetCollection, PHFetchResult, NSMutableDictionary, PHCachingImageManager, PHImageRequestOptions, ALAssetsLibrary, NSArray, UIView, NSString;

@interface IGSelectAlbumController : UIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver> {

	char _needsSetPhotoLibraryOptions;
	id<IGSelectAlbumDelegate> _delegate;
	unsigned _assetFilterType;
	int _selectAlbumAppearanceType;
	float _tableViewViewHeight;
	UITableView* _tableView;
	UIActivityIndicatorView* _activityIndicator;
	NSObject*<OS_dispatch_queue> _queue;
	PHAssetCollection* _userLibrary;
	PHFetchResult* _unfilteredSmartAlbums;
	PHFetchResult* _smartAlbums;
	PHFetchResult* _albums;
	NSMutableDictionary* _keyImageFetchResults;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _options;
	ALAssetsLibrary* _assetsLibrary;
	NSArray* _assetGroups;
	NSArray* _filteredAssetGroups;
	UIView* _topSeparatorLine;
	CGSize _thumbnailSize;
	CGRect _previousPreheatRect;

}

@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PHAssetCollection * userLibrary;                          //@synthesize userLibrary=_userLibrary - In the implementation block
@property (nonatomic,retain) PHFetchResult * unfilteredSmartAlbums;                    //@synthesize unfilteredSmartAlbums=_unfilteredSmartAlbums - In the implementation block
@property (nonatomic,retain) PHFetchResult * smartAlbums;                              //@synthesize smartAlbums=_smartAlbums - In the implementation block
@property (nonatomic,retain) PHFetchResult * albums;                                   //@synthesize albums=_albums - In the implementation block
@property (retain) NSMutableDictionary * keyImageFetchResults;                         //@synthesize keyImageFetchResults=_keyImageFetchResults - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                     //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char needsSetPhotoLibraryOptions;                         //@synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                          //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) NSArray * assetGroups;                                    //@synthesize assetGroups=_assetGroups - In the implementation block
@property (nonatomic,retain) NSArray * filteredAssetGroups;                            //@synthesize filteredAssetGroups=_filteredAssetGroups - In the implementation block
@property (assign,nonatomic) CGRect previousPreheatRect;                               //@synthesize previousPreheatRect=_previousPreheatRect - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorLine;                                //@synthesize topSeparatorLine=_topSeparatorLine - In the implementation block
@property (assign,nonatomic,__weak) id<IGSelectAlbumDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned assetFilterType;                                 //@synthesize assetFilterType=_assetFilterType - In the implementation block
@property (nonatomic,readonly) int selectAlbumAppearanceType;                          //@synthesize selectAlbumAppearanceType=_selectAlbumAppearanceType - In the implementation block
@property (assign,nonatomic) float tableViewViewHeight;                                //@synthesize tableViewViewHeight=_tableViewViewHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allAlbumTitle;
-(void)setNeedsSetPhotoLibraryOptions:(char)arg1 ;
-(void)setPhotosLibraryOptions;
-(void)resetCachedAssets;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(void)filterAssetsGroup:(id)arg1 ;
-(void)updateCachedAssets;
-(void)setPreviousPreheatRect:(CGRect)arg1 ;
-(CGRect)previousPreheatRect;
-(void)computeDifferenceBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 removedHandler:(/*^block*/id)arg3 addedHandler:(/*^block*/id)arg4 ;
-(char)needsSetPhotoLibraryOptions;
-(unsigned)assetFilterType;
-(void)setAssetFilterType:(unsigned)arg1 ;
-(id)initWithAppearanceType:(int)arg1 ;
-(void)viewDidOpen;
-(void)setTopSeparatorLine:(UIView *)arg1 ;
-(UIView *)topSeparatorLine;
-(int)selectAlbumAppearanceType;
-(void)setKeyImageFetchResults:(NSMutableDictionary *)arg1 ;
-(void)configureForAppearanceType:(int)arg1 ;
-(id)filterSmartAlbums:(id)arg1 ;
-(void)setSmartAlbums:(PHFetchResult *)arg1 ;
-(PHFetchResult *)smartAlbums;
-(void)setUserLibrary:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)userLibrary;
-(id)keyImageFetchResultForAssetCollection:(id)arg1 ;
-(void)enumerateCollections:(/*^block*/id)arg1 ;
-(void)setAssetGroups:(NSArray *)arg1 ;
-(id)filterALResults:(id)arg1 ;
-(void)setFilteredAssetGroups:(NSArray *)arg1 ;
-(NSArray *)assetGroups;
-(NSMutableDictionary *)keyImageFetchResults;
-(id)indexPathsFromIndexes:(id)arg1 section:(int)arg2 ;
-(id)assetsAtIndexPaths:(id)arg1 ;
-(NSArray *)filteredAssetGroups;
-(id)collectionFetchResultAtIndexPath:(id)arg1 ;
-(id)imageForEmptyAlbum;
-(float)tableViewViewHeight;
-(void)setTableViewViewHeight:(float)arg1 ;
-(PHFetchResult *)unfilteredSmartAlbums;
-(void)setUnfilteredSmartAlbums:(PHFetchResult *)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)fetchOptions;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PHFetchResult *)albums;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)setDelegate:(id<IGSelectAlbumDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGSelectAlbumDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)options;
-(CGSize)thumbnailSize;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)scrollToTop;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
-(void)setAlbums:(PHFetchResult *)arg1 ;
-(void)loadData;
@end

