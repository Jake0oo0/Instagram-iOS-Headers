
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGFindUsersViewDataSourceDelegate.h>

@protocol IGFindUsersViewDelegate, IGRaindropAnalyticsDelegate;
@class IGGroupedTableView, UIView, IGFindUsersViewDataSource, UIColor, IGFollowAllUsersView, NSArray, NSMutableDictionary, NSString;

@interface IGFindUsersView : UIView <UITableViewDataSource, UITableViewDelegate, IGFindUsersViewDataSourceDelegate> {

	char _showSuggestionSourceInfo;
	char _hideBioInfo;
	char _hideTopSeparator;
	char _allowsTapOnPhotos;
	char _showStandardFollowButton;
	char _showPhotoGrid;
	id<IGFindUsersViewDelegate> _delegate;
	IGGroupedTableView* _tableView;
	UIView* _headerContentView;
	IGFindUsersViewDataSource* _dataSource;
	UIColor* _cellBackgroundColor;
	Class _preferredUserCellClass;
	UIView* _headerView;
	IGFollowAllUsersView* _followAllUsersView;
	int _followAllRowType;
	NSArray* _userList;
	unsigned _lastThumbnailFetchOffset;
	int _photoLayout;
	NSMutableDictionary* _userInfoCellHeightCache;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	NSArray* _allUserIDs;
	UIEdgeInsets _separatorEdgeInsets;

}

@property (nonatomic,retain) IGGroupedTableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGFollowAllUsersView * followAllUsersView;                             //@synthesize followAllUsersView=_followAllUsersView - In the implementation block
@property (assign,nonatomic) int followAllRowType;                                                  //@synthesize followAllRowType=_followAllRowType - In the implementation block
@property (nonatomic,retain) NSArray * userList;                                                    //@synthesize userList=_userList - In the implementation block
@property (assign,nonatomic) unsigned lastThumbnailFetchOffset;                                     //@synthesize lastThumbnailFetchOffset=_lastThumbnailFetchOffset - In the implementation block
@property (assign,nonatomic) int photoLayout;                                                       //@synthesize photoLayout=_photoLayout - In the implementation block
@property (nonatomic,readonly) Class userCellClass; 
@property (nonatomic,readonly) char showingFollowAllRow; 
@property (nonatomic,retain) NSMutableDictionary * userInfoCellHeightCache;                         //@synthesize userInfoCellHeightCache=_userInfoCellHeightCache - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) NSArray * allUserIDs;                                                  //@synthesize allUserIDs=_allUserIDs - In the implementation block
@property (assign,nonatomic,__weak) id<IGFindUsersViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerContentView;                                            //@synthesize headerContentView=_headerContentView - In the implementation block
@property (assign,nonatomic,__weak) IGFindUsersViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char showSuggestionSourceInfo;                                         //@synthesize showSuggestionSourceInfo=_showSuggestionSourceInfo - In the implementation block
@property (assign,nonatomic) char hideBioInfo;                                                      //@synthesize hideBioInfo=_hideBioInfo - In the implementation block
@property (assign,nonatomic) char hideTopSeparator;                                                 //@synthesize hideTopSeparator=_hideTopSeparator - In the implementation block
@property (assign,nonatomic) char allowsTapOnPhotos;                                                //@synthesize allowsTapOnPhotos=_allowsTapOnPhotos - In the implementation block
@property (nonatomic,retain) UIColor * cellBackgroundColor;                                         //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (assign,nonatomic) char showStandardFollowButton;                                         //@synthesize showStandardFollowButton=_showStandardFollowButton - In the implementation block
@property (assign,nonatomic) Class preferredUserCellClass;                                          //@synthesize preferredUserCellClass=_preferredUserCellClass - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorEdgeInsets;                                      //@synthesize separatorEdgeInsets=_separatorEdgeInsets - In the implementation block
@property (assign,nonatomic) char showPhotoGrid;                                                    //@synthesize showPhotoGrid=_showPhotoGrid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)thumbnailSizeForLayout:(int)arg1 ;
-(void)onImageTapped:(id)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 followAllRowType:(int)arg2 headerHeight:(float)arg3 photoLayout:(int)arg4 analyticsDelegate:(id)arg5 ;
-(void)setShowSuggestionSourceInfo:(char)arg1 ;
-(void)setAllowsTapOnPhotos:(char)arg1 ;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setFollowAllRowType:(int)arg1 ;
-(char)showSuggestionSourceInfo;
-(Class)userCellClass;
-(char)hideTopSeparator;
-(UIEdgeInsets)separatorEdgeInsets;
-(char)showStandardFollowButton;
-(id)privateUserCellForTableView:(id)arg1 ;
-(id)userBioInfoCellForTableView:(id)arg1 atUserIndex:(int)arg2 ;
-(int)photoLayout;
-(char)allowsTapOnPhotos;
-(char)hideBioInfo;
-(int)followAllRowType;
-(char)showingFollowAllRow;
-(char)showBioInfo;
-(char)showPhotoGrid;
-(char)hasPhotosForUserAtUserIndex:(int)arg1 ;
-(id)userCellForTableView:(id)arg1 atUserIndex:(int)arg2 ;
-(id)userInfoCellForTableView:(id)arg1 atUserIndex:(int)arg2 ;
-(id)photoGridCellForTableView:(id)arg1 atUserIndex:(int)arg2 ;
-(NSMutableDictionary *)userInfoCellHeightCache;
-(float)bioHeightForUser:(id)arg1 ;
-(void)onScrollViewDidEndScrolling:(id)arg1 ;
-(Class)preferredUserCellClass;
-(NSArray *)allUserIDs;
-(void)setAllUserIDs:(NSArray *)arg1 ;
-(void)setDataSource:(id)arg1 lazilyReloadView:(char)arg2 ;
-(void)followAll:(id)arg1 ;
-(UIView *)headerContentView;
-(void)setHideTopSeparator:(char)arg1 ;
-(void)setShowStandardFollowButton:(char)arg1 ;
-(void)setFollowAllUsersView:(IGFollowAllUsersView *)arg1 ;
-(void)setPhotoLayout:(int)arg1 ;
-(void)setUserInfoCellHeightCache:(NSMutableDictionary *)arg1 ;
-(unsigned)lastThumbnailFetchOffset;
-(void)fetchThumbnailURLsIfNeeded;
-(void)setUserList:(NSArray *)arg1 ;
-(NSArray *)userList;
-(char)hasViewPermissionForUser:(id)arg1 ;
-(char)shouldFetchThumbnailURLsForUserInfo:(id)arg1 ;
-(void)setLastThumbnailFetchOffset:(unsigned)arg1 ;
-(IGFollowAllUsersView *)followAllUsersView;
-(void)setShowPhotoGrid:(char)arg1 ;
-(void)setPreferredUserCellClass:(Class)arg1 ;
-(void)setHideBioInfo:(char)arg1 ;
-(void)setSeparatorEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)doFollowAll;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cellBackgroundColor;
-(void)setDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)setDelegate:(id<IGFindUsersViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGFindUsersViewDataSource *)dataSource;
-(id<IGFindUsersViewDelegate>)delegate;
-(IGGroupedTableView *)tableView;
-(void)setTableView:(IGGroupedTableView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

