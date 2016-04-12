
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIActionSheetDelegate.h>

@class IGUser, UIView, UIButton, UIBarButtonItem, UIActionSheet, NSMutableSet, NSString;

@interface IGUsertagFeedViewController : IGFeedViewController_DEPRECATED <IGCoreTextLinkHandler, UIActionSheetDelegate> {

	int _photoCount;
	char _submitting;
	IGUser* _user;
	UIView* _headerView;
	UIButton* _hideFromProfileButton;
	UIBarButtonItem* _actionsButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _spinnerButton;
	UIActionSheet* _moreActionSheet;
	UIActionSheet* _settingsActionSheet;
	UIActionSheet* _hideActionSheet;
	NSMutableSet* _selectedItems;
	NSString* _viewingTitle;
	int _feedMode;

}

@property (nonatomic,retain) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIView * headerView;                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * hideFromProfileButton;                 //@synthesize hideFromProfileButton=_hideFromProfileButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionsButton;                  //@synthesize actionsButton=_actionsButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                  //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) UIActionSheet * moreActionSheet;                  //@synthesize moreActionSheet=_moreActionSheet - In the implementation block
@property (nonatomic,retain) UIActionSheet * settingsActionSheet;              //@synthesize settingsActionSheet=_settingsActionSheet - In the implementation block
@property (nonatomic,retain) UIActionSheet * hideActionSheet;                  //@synthesize hideActionSheet=_hideActionSheet - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedItems;                     //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,retain) NSString * viewingTitle;                          //@synthesize viewingTitle=_viewingTitle - In the implementation block
@property (assign,nonatomic) int feedMode;                                     //@synthesize feedMode=_feedMode - In the implementation block
@property (assign,nonatomic) char submitting;                                  //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)onCancelButtonTapped;
-(char)prefersTabBarHidden;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(UIBarButtonItem *)spinnerButton;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(UIBarButtonItem *)actionsButton;
-(void)setActionsButton:(UIBarButtonItem *)arg1 ;
-(void)setSubmitting:(char)arg1 ;
-(char)submitting;
-(void)updateNetworkSource;
-(void)setViewingTitle:(NSString *)arg1 ;
-(void)onMoreButtonTapped;
-(void)setHideActionSheet:(UIActionSheet *)arg1 ;
-(void)setSettingsActionSheet:(UIActionSheet *)arg1 ;
-(void)setMoreActionSheet:(UIActionSheet *)arg1 ;
-(void)setHideFromProfileButton:(UIButton *)arg1 ;
-(UIButton *)hideFromProfileButton;
-(void)onHideButtonTapped;
-(int)feedMode;
-(id)introPeriodHeaderViewWithExpirationDate:(id)arg1 ;
-(void)updateHideButton;
-(UIActionSheet *)moreActionSheet;
-(UIActionSheet *)settingsActionSheet;
-(void)setFeedMode:(int)arg1 ;
-(UIActionSheet *)hideActionSheet;
-(void)onSuccessfulTagAction:(id)arg1 ;
-(void)onFailedTagAction:(id)arg1 ;
-(void)onSettingsButtonTapped;
-(void)onEditTagsButtonTapped;
-(void)onHideActionTapped;
-(NSString *)viewingTitle;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)updateTitle;
-(void)dealloc;
-(id)init;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSMutableSet *)selectedItems;
-(void)setSelectedItems:(NSMutableSet *)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

