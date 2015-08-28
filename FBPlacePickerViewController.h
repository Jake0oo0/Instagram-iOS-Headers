/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBViewController.h>
#import <Instagram/FBGraphObjectSelectionChangedDelegate.h>
#import <Instagram/FBGraphObjectViewControllerDelegate.h>
#import <Instagram/FBGraphObjectPagingLoaderDelegate.h>

@class UIActivityIndicatorView, UITableView, NSSet, NSString, FBSession, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBGraphObjectPagingLoader, NSTimer;

@interface FBPlacePickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectViewControllerDelegate, FBGraphObjectPagingLoaderDelegate> {

	char _hasSearchTextChangedSinceLastQuery;
	char _trackActiveSession;
	UIActivityIndicatorView* _spinner;
	UITableView* _tableView;
	NSSet* _fieldsForRequest;
	int _radiusInMeters;
	int _resultsLimit;
	NSString* _searchText;
	FBSession* _session;
	FBGraphObjectTableDataSource* _dataSource;
	FBGraphObjectTableSelection* _selectionManager;
	FBGraphObjectPagingLoader* _loader;
	NSTimer* _searchTextChangedTimer;
	SCD_Struct_IG40 _locationCoordinate;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSSet * fieldsForRequest;                                      //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (assign,nonatomic) char itemPicturesEnabled; 
@property (assign,nonatomic) SCD_Struct_IG40 locationCoordinate;                          //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) int radiusInMeters;                                          //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) int resultsLimit;                                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                         //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) FBSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain,readonly) id<FBGraphPlace> selection; 
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableSelection * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;                          //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) NSTimer * searchTextChangedTimer;                            //@synthesize searchTextChangedTimer=_searchTextChangedTimer - In the implementation block
@property (assign,nonatomic) char trackActiveSession;                                     //@synthesize trackActiveSession=_trackActiveSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForPlacesSearchAtCoordinate:(SCD_Struct_IG40)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 fields:(id)arg5 datasource:(id)arg6 session:(id)arg7 ;
+(id)cacheDescriptorWithLocationCoordinate:(SCD_Struct_IG40)arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5 ;
-(char)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2 ;
-(char)itemPicturesEnabled;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2 ;
-(void)setItemPicturesEnabled:(char)arg1 ;
-(void)setSelectionManager:(FBGraphObjectTableSelection *)arg1 ;
-(void)setTrackActiveSession:(char)arg1 ;
-(FBGraphObjectTableSelection *)selectionManager;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(char)trackActiveSession;
-(void)centerAndStartSpinner;
-(void)graphObjectTableSelectionDidChange:(id)arg1 ;
-(void)pagingLoader:(id)arg1 willLoadURL:(id)arg2 ;
-(void)pagingLoader:(id)arg1 didLoadData:(id)arg2 ;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)pagingLoader:(id)arg1 handleError:(id)arg2 ;
-(void)pagingLoaderWasCancelled:(id)arg1 ;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(char)arg1 ;
-(void)setRadiusInMeters:(int)arg1 ;
-(NSTimer *)searchTextChangedTimer;
-(id)createSearchTextChangedTimer;
-(void)setSearchTextChangedTimer:(NSTimer *)arg1 ;
-(void)loadDataPostThrottleSkippingRoundTripIfCached:(id)arg1 ;
-(int)radiusInMeters;
-(void)searchTextChangedTimerFired:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(id)init;
-(FBGraphObjectTableDataSource *)dataSource;
-(void)initialize;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<FBGraphPlace>)selection;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)clearSelection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateView;
-(UITableView *)tableView;
-(NSString *)searchText;
-(UIActivityIndicatorView *)spinner;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(FBSession *)session;
-(void)setResultsLimit:(int)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
-(int)resultsLimit;
-(void)setLocationCoordinate:(SCD_Struct_IG40)arg1 ;
-(void)loadData;
-(void)addSessionObserver:(id)arg1 ;
-(void)removeSessionObserver:(id)arg1 ;
-(void)clearData;
-(FBGraphObjectPagingLoader *)loader;
-(SCD_Struct_IG40)locationCoordinate;
@end

