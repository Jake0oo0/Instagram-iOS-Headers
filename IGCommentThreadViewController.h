
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGCommentReshareBannerDelegate.h>
#import <Instagram/IGCommentReshareHelperDelegate.h>
#import <Instagram/IGCommentThreadTableSourceDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class IGFeedItem, IGCommentThreadTableSource, IGPlainTableView, NSString, IGUserPreviewingHandler, UIView, IGGrowingTextView, IGButton, IGCommentModel, IGAutocompleteController, IGBulkMediaRequestManager, IGCommentReshareHelper, IGCommentReshareBanner, UIButton, UIImageView;

@interface IGCommentThreadViewController : IGViewController <IGAnalyticsModule, IGCommentReshareBannerDelegate, IGCommentReshareHelperDelegate, IGCommentThreadTableSourceDelegate, IGAutocompleteControllerDelegate, IGGrowingTextViewDelegate, UITextFieldDelegate> {

	char _navBarWasHidden;
	char _skipDismissKeyboardAnimation;
	char _keyboardIsAnimating;
	char _keyboardShowing;
	char _displayKeyboardOnAppear;
	char _appearing;
	char _pushPerformed;
	char _shouldPanToBottom;
	char _enableReshareFromAtMention;
	IGFeedItem* _feedItem;
	IGCommentThreadTableSource* _dataSource;
	IGPlainTableView* _tableView;
	NSString* _prefillText;
	IGUserPreviewingHandler* _userPreviewingDelegate;
	UIView* _sendButton;
	UIView* _textViewContainer;
	UIView* _tableViewContainer;
	IGGrowingTextView* _growingTextView;
	IGButton* _postButtonLegacy;
	IGCommentModel* _bottomCommentBeforeReload;
	IGAutocompleteController* _autocompleteController;
	IGBulkMediaRequestManager* _requestManager;
	UIView* _keyboard;
	UIView* _keyboardAccessoryView;
	float _bottomCellOffsetBeforeReload;
	float _contentOffsetYBeforeReload;
	int _originalTextViewY;
	int _originalLocation;
	IGCommentReshareHelper* _commentReshareHelper;
	UIView* _separatorLine;
	IGCommentReshareBanner* _reshareBanner;
	UIButton* _reshareButton;
	UIImageView* _carrot;
	UIButton* _reshareEnabledButton;
	UIView* _commentsOverlay;
	UIButton* _postButton;
	UIButton* _reshareDisabledButton;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGFeedItem * feedItem;                                          //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGCommentThreadTableSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char navBarWasHidden;                                           //@synthesize navBarWasHidden=_navBarWasHidden - In the implementation block
@property (assign,nonatomic) char skipDismissKeyboardAnimation;                              //@synthesize skipDismissKeyboardAnimation=_skipDismissKeyboardAnimation - In the implementation block
@property (nonatomic,readonly) NSString * prefillText;                                       //@synthesize prefillText=_prefillText - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userPreviewingDelegate;               //@synthesize userPreviewingDelegate=_userPreviewingDelegate - In the implementation block
@property (nonatomic,retain) UIView * sendButton;                                            //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIView * textViewContainer;                                     //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) UIView * tableViewContainer;                                    //@synthesize tableViewContainer=_tableViewContainer - In the implementation block
@property (nonatomic,retain) IGGrowingTextView * growingTextView;                            //@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,retain) IGButton * postButtonLegacy;                                    //@synthesize postButtonLegacy=_postButtonLegacy - In the implementation block
@property (nonatomic,retain) IGCommentModel * bottomCommentBeforeReload;                     //@synthesize bottomCommentBeforeReload=_bottomCommentBeforeReload - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;              //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                     //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) UIView * keyboard;                                              //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) UIView * keyboardAccessoryView;                                 //@synthesize keyboardAccessoryView=_keyboardAccessoryView - In the implementation block
@property (assign,nonatomic) char keyboardIsAnimating;                                       //@synthesize keyboardIsAnimating=_keyboardIsAnimating - In the implementation block
@property (assign,nonatomic) char keyboardShowing;                                           //@synthesize keyboardShowing=_keyboardShowing - In the implementation block
@property (assign,nonatomic) char displayKeyboardOnAppear;                                   //@synthesize displayKeyboardOnAppear=_displayKeyboardOnAppear - In the implementation block
@property (assign,nonatomic) char appearing;                                                 //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) char pushPerformed;                                             //@synthesize pushPerformed=_pushPerformed - In the implementation block
@property (assign,nonatomic) char shouldPanToBottom;                                         //@synthesize shouldPanToBottom=_shouldPanToBottom - In the implementation block
@property (assign,nonatomic) float bottomCellOffsetBeforeReload;                             //@synthesize bottomCellOffsetBeforeReload=_bottomCellOffsetBeforeReload - In the implementation block
@property (assign,nonatomic) float contentOffsetYBeforeReload;                               //@synthesize contentOffsetYBeforeReload=_contentOffsetYBeforeReload - In the implementation block
@property (assign,nonatomic) int originalTextViewY;                                          //@synthesize originalTextViewY=_originalTextViewY - In the implementation block
@property (assign,nonatomic) int originalLocation;                                           //@synthesize originalLocation=_originalLocation - In the implementation block
@property (nonatomic,retain) IGCommentReshareHelper * commentReshareHelper;                  //@synthesize commentReshareHelper=_commentReshareHelper - In the implementation block
@property (assign,nonatomic) char enableReshareFromAtMention;                                //@synthesize enableReshareFromAtMention=_enableReshareFromAtMention - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                         //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) IGCommentReshareBanner * reshareBanner;                         //@synthesize reshareBanner=_reshareBanner - In the implementation block
@property (nonatomic,retain) UIButton * reshareButton;                                       //@synthesize reshareButton=_reshareButton - In the implementation block
@property (nonatomic,retain) UIImageView * carrot;                                           //@synthesize carrot=_carrot - In the implementation block
@property (nonatomic,retain) UIButton * reshareEnabledButton;                                //@synthesize reshareEnabledButton=_reshareEnabledButton - In the implementation block
@property (nonatomic,retain) UIView * commentsOverlay;                                       //@synthesize commentsOverlay=_commentsOverlay - In the implementation block
@property (nonatomic,retain) UIButton * postButton;                                          //@synthesize postButton=_postButton - In the implementation block
@property (nonatomic,retain) UIButton * reshareDisabledButton;                               //@synthesize reshareDisabledButton=_reshareDisabledButton - In the implementation block
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGGrowingTextView *)growingTextView;
-(IGAutocompleteController *)autocompleteController;
-(NSString *)prefillText;
-(id)commentDeleteUndoMessageForNumberOfComments:(int)arg1 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(char)prefersTabBarHidden;
-(char)enableNavState;
-(void)postComment;
-(void)didDismissCommentReshareBanner:(id)arg1 ;
-(void)reshareHelper:(id)arg1 didChangeStatusFrom:(int)arg2 to:(int)arg3 ;
-(void)commentThreadDataSource:(id)arg1 didAddNewCommentAtIndexPath:(id)arg2 ;
-(void)commentThreadDataSourceDidStartLoading:(id)arg1 isLoadingMore:(char)arg2 ;
-(void)commentThreadDataSourceDidFinishLoading:(id)arg1 ;
-(void)commentThreadDataSourceDidFailLoading:(id)arg1 ;
-(id)commentThreadDataSource:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(float)commentThreadDataSource:(id)arg1 heightHeaderInSection:(int)arg2 ;
-(void)commentThreadDataSource:(id)arg1 didTapReplyToUser:(id)arg2 inCommentCell:(id)arg3 ;
-(void)commentThreadDataSourceTableWillDrag:(id)arg1 ;
-(void)commentThreadDataSourceTableDidDrag:(id)arg1 ;
-(void)commentThreadDataSourceTableWillEndDragging:(id)arg1 withVelocity:(float)arg2 ;
-(void)commentThreadDataSourceTableDidEndDragging:(id)arg1 ;
-(void)commentThreadDataSourceDeletedComment:(id)arg1 didReportAsSpam:(char)arg2 ;
-(void)commentThreadDataSourceDidFailToDeleteComment:(id)arg1 ;
-(void)commentThreadDataSourceWillDeleteComment:(id)arg1 ;
-(void)commentThreadDataSourceDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2 ;
-(void)commentThreadDataSourceDidStartBulkCommentDeletion:(id)arg1 ;
-(void)commentThreadDataSourceDidFinishBulkCommentDeletion:(id)arg1 ;
-(void)commentThreadDataSourceDidFailBulkCommentDeletion:(id)arg1 ;
-(void)logCommentEventWithText:(id)arg1 mediaID:(id)arg2 userPK:(id)arg3 ;
-(char)keyboardShowing;
-(char)tableViewIsAtBottom;
-(void)setShouldPanToBottom:(char)arg1 ;
-(void)moveKeyboardWithGestureRecognizer:(id)arg1 ;
-(char)shouldPanToBottom;
-(void)finishKeyboardAnimationWithGestureRecognizer:(id)arg1 ;
-(float)textViewHeight;
-(void)setTableViewContainer:(UIView *)arg1 ;
-(UIView *)tableViewContainer;
-(char)enableReshareFromAtMention;
-(void)setTextViewContainer:(UIView *)arg1 ;
-(UIView *)textViewContainer;
-(void)setGrowingTextView:(IGGrowingTextView *)arg1 ;
-(void)setKeyboardAccessoryView:(UIView *)arg1 ;
-(UIView *)keyboardAccessoryView;
-(float)textViewContainerHeight;
-(void)setupTableViews;
-(void)createViewsForResharingIfNeeded;
-(void)updateSendButton;
-(void)setupTextView;
-(void)setUIForReshareStatus:(int)arg1 inTransition:(char)arg2 ;
-(void)setUserPreviewingDelegate:(IGUserPreviewingHandler *)arg1 ;
-(IGUserPreviewingHandler *)userPreviewingDelegate;
-(char)displayKeyboardOnAppear;
-(void)setDisplayKeyboardOnAppear:(char)arg1 ;
-(char)pushPerformed;
-(void)scrollToBottomAndAnimate:(char)arg1 ;
-(void)updateUserActivity;
-(void)setPushPerformed:(char)arg1 ;
-(void)animateKeyboardOffscreenWithDuration:(float)arg1 ;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(IGBulkMediaRequestManager *)requestManager;
-(void)setEnableReshareFromAtMention:(char)arg1 ;
-(IGCommentReshareHelper *)commentReshareHelper;
-(void)setKeyboardShowing:(char)arg1 ;
-(char)keyboardIsAnimating;
-(void)setFramesForReshareStatus:(int)arg1 ;
-(char)skipDismissKeyboardAnimation;
-(void)setSkipDismissKeyboardAnimation:(char)arg1 ;
-(void)animateKeyboardReturnToOriginalPositionWithDuration:(float)arg1 ;
-(void)setKeyboardIsAnimating:(char)arg1 ;
-(void)updateReshareStateAndUIIfNeeded:(id)arg1 ;
-(UIButton *)reshareDisabledButton;
-(UIButton *)reshareEnabledButton;
-(IGButton *)postButtonLegacy;
-(UIButton *)reshareButton;
-(void)saveScrollPosition;
-(void)updateScrollPositionUsingSavedScrollPosition;
-(void)appendUsernameToTextView:(id)arg1 ;
-(void)setContentOffsetYBeforeReload:(float)arg1 ;
-(void)setBottomCellOffsetBeforeReload:(float)arg1 ;
-(void)setBottomCommentBeforeReload:(IGCommentModel *)arg1 ;
-(IGCommentModel *)bottomCommentBeforeReload;
-(float)bottomCellOffsetBeforeReload;
-(float)contentOffsetYBeforeReload;
-(void)setPostButtonLegacy:(IGButton *)arg1 ;
-(UIView *)commentsOverlay;
-(IGCommentReshareBanner *)reshareBanner;
-(UIImageView *)carrot;
-(CGRect)sendButtonFrameForButtonSize:(CGSize)arg1 ;
-(void)setReshareBanner:(IGCommentReshareBanner *)arg1 ;
-(void)setReshareButton:(UIButton *)arg1 ;
-(void)setCarrot:(UIImageView *)arg1 ;
-(void)setReshareEnabledButton:(UIButton *)arg1 ;
-(void)didToggleReshareMode:(id)arg1 ;
-(void)setPostButton:(UIButton *)arg1 ;
-(void)setReshareDisabledButton:(UIButton *)arg1 ;
-(void)setCommentsOverlay:(UIView *)arg1 ;
-(id)initWithKeyboardShowing:(char)arg1 text:(id)arg2 ;
-(char)disableNavigationGesture;
-(char)navBarWasHidden;
-(void)setNavBarWasHidden:(char)arg1 ;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(int)originalTextViewY;
-(void)setOriginalTextViewY:(int)arg1 ;
-(int)originalLocation;
-(void)setOriginalLocation:(int)arg1 ;
-(void)setCommentReshareHelper:(IGCommentReshareHelper *)arg1 ;
-(void)setAppearing:(char)arg1 ;
-(UIButton *)postButton;
-(void)dealloc;
-(IGCommentThreadTableSource *)dataSource;
-(void)viewWillLayoutSubviews;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)keyboardDidShow:(id)arg1 ;
-(UIView *)keyboard;
-(void)setKeyboard:(UIView *)arg1 ;
-(UIView *)sendButton;
-(void)setSendButton:(UIView *)arg1 ;
-(char)appearing;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

