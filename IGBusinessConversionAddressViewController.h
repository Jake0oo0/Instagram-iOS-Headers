
#import <Instagram/IGViewController.h>
#import <Instagram/IGBusinessConversionCityViewControllerDelegate.h>
#import <Instagram/IGBusinessConversionEditableProfileCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGBusinessConversionAddressViewControllerDelegate;
@class IGFacebookPageInfo, UIView, UITableView, NSString;

@interface IGBusinessConversionAddressViewController : IGViewController <IGBusinessConversionCityViewControllerDelegate, IGBusinessConversionEditableProfileCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	char _showStatusBar;
	char _isEditing;
	id<IGBusinessConversionAddressViewControllerDelegate> _delegate;
	IGFacebookPageInfo* _pageInfo;
	UIView* _headerView;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionAddressViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showStatusBar;                                                                 //@synthesize showStatusBar=_showStatusBar - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;                                                      //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char isEditing;                                                                     //@synthesize isEditing=_isEditing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsEditing:(char)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(void)setShowStatusBar:(char)arg1 ;
-(void)removeAddress;
-(void)cityViewController:(id)arg1 dismissWithCity:(id)arg2 ;
-(void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3 ;
-(void)editableProfileCellDidBeginEditing:(id)arg1 ;
-(char)editableProfileCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(id)initWithPageInfo:(id)arg1 ;
-(void)editableProfileCell:(id)arg1 toggledBoolValue:(char)arg2 forKey:(id)arg3 ;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)saveChanges;
-(void)setDelegate:(id<IGBusinessConversionAddressViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGBusinessConversionAddressViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(char)isEditing;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)dismiss;
-(id)footerString;
-(void)updateButtonState;
-(char)showStatusBar;
@end

