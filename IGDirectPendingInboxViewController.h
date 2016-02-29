/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingThreadViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>

@protocol IGDirectPendingInboxDelegate;
@class NSNumber, UITableView, NSOrderedSet, NSString, IGPullToRefreshViewManager, UIView, NSSet, UIButton, UIBarButtonItem;

@interface IGDirectPendingInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingThreadViewDelegate, IGPullToRefreshProtocol> {

	char _loadingPreviousThreads;
	char _hasFakedPullToRefresh;
	char _hasPendingChanges;
	id<IGDirectPendingInboxDelegate> _delegate;
	NSNumber* _totalPending;
	UITableView* _tableView;
	NSOrderedSet* _threads;
	NSString* _nextMaxId;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	UIView* _headerLabel;
	UIView* _footerView;
	NSSet* _selectedThreads;
	UIButton* _declineButton;
	UIButton* _allowButton;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _spinnerButton;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * totalPending;                                            //@synthesize totalPending=_totalPending - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * threads;                                             //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                        //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,copy) NSString * nextMaxId;                                                 //@synthesize nextMaxId=_nextMaxId - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                         //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) UIView * headerLabel;                                               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSSet * selectedThreads;                                            //@synthesize selectedThreads=_selectedThreads - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;                                           //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,copy) UIButton * allowButton;                                               //@synthesize allowButton=_allowButton - In the implementation block
@property (assign,nonatomic) char hasPendingChanges;                                             //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButton;                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                                    //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersTabBarHidden;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(void)setTotalPending:(NSNumber *)arg1 ;
-(char)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(float)cellProfilePictureVerticalPadding;
-(void)loadMoreThreads;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)toggleEditMode;
-(void)updateRightButton;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)refreshDataWithNextMaxID:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)setSelectedThreads:(NSSet *)arg1 ;
-(NSSet *)selectedThreads;
-(void)allowTapped;
-(void)declineTapped;
-(NSNumber *)totalPending;
-(id)actionSheetHeaderLabelWithString:(id)arg1 ;
-(id)allowString;
-(void)setHasPendingChanges:(char)arg1 ;
-(id)declineString;
-(void)updateFooterView;
-(id)remainingInviterForThreads:(id)arg1 ;
-(NSString *)nextMaxId;
-(void)setNextMaxId:(NSString *)arg1 ;
-(UIButton *)allowButton;
-(UIBarButtonItem *)spinnerButton;
-(void)threadViewController:(id)arg1 didAcceptThread:(id)arg2 ;
-(void)threadViewController:(id)arg1 didDeclineThread:(id)arg2 ;
-(char)disableNonEdgeNavigationGesture;
-(void)setAllowButton:(UIButton *)arg1 ;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(char)hasPendingChanges;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setEditButton:(UIBarButtonItem *)arg1 ;
-(void)setHeaderLabel:(UIView *)arg1 ;
-(UIView *)headerLabel;
-(NSOrderedSet *)threads;
-(UIBarButtonItem *)editButton;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
@end

