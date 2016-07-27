
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGFacebookPagesDataSourceDelegate.h>

@protocol IGFacebookPagesViewControllerDelegate;
@class NSMutableDictionary, NSArray, NSDictionary, IGFacebookPagesDataSource, UIActivityIndicatorView, NSString;

@interface IGFacebookPagesViewController : IGGroupedTableViewController <IGFacebookPagesDataSourceDelegate> {

	NSMutableDictionary* _accounts;
	NSArray* _sortedAccounts;
	NSDictionary* _selectedAccount;
	IGFacebookPagesDataSource* _pagesDataSource;
	struct {
		unsigned hasManageablePages : 1;
		unsigned anUnknownErrorOccurred : 1;
		unsigned deniedManagePagesAccess : 1;
		unsigned updating : 1;
		unsigned requestingPermissions : 1;
	}  _flags;
	id<IGFacebookPagesViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                             //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<IGFacebookPagesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)displayUnknownError;
-(void)pagesDataSource:(id)arg1 didReceiveError:(id)arg2 ;
-(void)pagesDataSource:(id)arg1 didLoadPages:(id)arg2 ;
-(void)fetchAccounts;
-(void)configureWallSectionCell:(id)arg1 forRow:(int)arg2 ;
-(void)configurePagesSectionCell:(id)arg1 forRow:(int)arg2 ;
-(void)markCellAsChecked:(id)arg1 ;
-(char)isDuplicatedAccountName:(id)arg1 ;
-(void)clearFacebookAccount:(char)arg1 ;
-(void)storeFacebookPostingAccount:(id)arg1 ;
-(void)didSelectWallSectionRow:(int)arg1 ;
-(void)didSelectPagesSectionRow:(int)arg1 ;
-(void)authorizeForManagePages;
-(void)facebookAuthDidFinish;
-(void)facebookAuthDidCancel;
-(void)storeFacebookPostingAccountName:(id)arg1 ;
-(void)storeFacebookPostingAccountAccessToken:(id)arg1 ;
-(void)handleLoadedPages:(id)arg1 ;
-(void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)setDelegate:(id<IGFacebookPagesViewControllerDelegate>)arg1 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGFacebookPagesViewControllerDelegate>)delegate;
-(void)viewDidAppear:(char)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
@end

