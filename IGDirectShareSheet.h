
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGDirectRecipientDataSourceDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGDirectGrowingMessageTextViewDelegate.h>
#import <Instagram/IGViewControllerSlideable.h>
#import <Instagram/IGSwipeDismissManagerDelegate.h>

@protocol IGDirectUploadableProducer, IGDirectShareSheetDelegate;
@class UIView, NSString, NSArray, IGDirectShareRecipient, UICollectionView, UIButton, UILabel, UITextField, IGDirectGrowingMessageTextView, UITextView, IGDirectRecipientDataSource, IGSwipeDismissManager;

@interface IGDirectShareSheet : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, IGDirectRecipientDataSourceDelegate, UIViewControllerTransitioningDelegate, IGDirectGrowingMessageTextViewDelegate, IGViewControllerSlideable, IGSwipeDismissManagerDelegate> {

	char _loadingResults;
	id<IGDirectUploadableProducer> _model;
	NSString* _sourceThreadId;
	id<IGDirectShareSheetDelegate> _delegate;
	NSArray* _allSections;
	NSArray* _defaultRecipients;
	NSArray* _searchResults;
	IGDirectShareRecipient* _selectedRecipient;
	UIView* _overlayView;
	UIView* _contentContainerView;
	UICollectionView* _collectionView;
	UIButton* _bottomButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned _shareState;
	UIButton* _searchButton;
	UITextField* _searchBar;
	UIView* _topLine;
	IGDirectGrowingMessageTextView* _messageView;
	UIButton* _searchBarClearButton;
	UITextView* _warningLabel;
	UIView* _warningLine;
	IGDirectRecipientDataSource* _dataSource;
	IGSwipeDismissManager* _swipeDismissManager;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) NSArray * allSections;                                       //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,retain) NSArray * defaultRecipients;                                 //@synthesize defaultRecipients=_defaultRecipients - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;                                     //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * selectedRecipient;                  //@synthesize selectedRecipient=_selectedRecipient - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                               //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                        //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                     //@synthesize bottomButton=_bottomButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned shareState;                                         //@synthesize shareState=_shareState - In the implementation block
@property (nonatomic,retain) UIButton * searchButton;                                     //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,retain) UITextField * searchBar;                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) char loadingResults;                                         //@synthesize loadingResults=_loadingResults - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                            //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) IGDirectGrowingMessageTextView * messageView;                //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UIButton * searchBarClearButton;                             //@synthesize searchBarClearButton=_searchBarClearButton - In the implementation block
@property (nonatomic,retain) UITextView * warningLabel;                                   //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) UIView * warningLine;                                        //@synthesize warningLine=_warningLine - In the implementation block
@property (nonatomic,retain) IGDirectRecipientDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGSwipeDismissManager * swipeDismissManager;                 //@synthesize swipeDismissManager=_swipeDismissManager - In the implementation block
@property (nonatomic,readonly) id<IGDirectUploadableProducer> model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * sourceThreadId;                                   //@synthesize sourceThreadId=_sourceThreadId - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectShareSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)module;
-(void)updateAllSections;
-(void)layoutViewsFirstTime;
-(void)updateViewsFromShareState:(unsigned)arg1 toShareState:(unsigned)arg2 animated:(char)arg3 ;
-(void)setSwipeDismissManager:(IGSwipeDismissManager *)arg1 ;
-(IGSwipeDismissManager *)swipeDismissManager;
-(IGDirectShareRecipient *)selectedRecipient;
-(IGDirectGrowingMessageTextView *)messageView;
-(id)warningMessage;
-(UIView *)warningLine;
-(UIButton *)searchButton;
-(UIButton *)searchBarClearButton;
-(UIView *)topLine;
-(UIButton *)bottomButton;
-(void)searchBarClearButtonTapped;
-(void)handleNewQueryString:(id)arg1 ;
-(void)setSearchBarClearButtonAlpha:(float)arg1 ;
-(void)onOverlayTapped;
-(void)onBottomButtonTapped;
-(void)onSearchButtonTapped;
-(void)setSelectedRecipient:(IGDirectShareRecipient *)arg1 ;
-(void)updateMessageViewToVisible:(char)arg1 animated:(char)arg2 ;
-(void)updateBottomButton;
-(void)updateTitleStrings;
-(id)sendToTitleString;
-(id)subtitleStringForCurrentRecipients;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(float)bottomOfFrame;
-(void)updateMessageViewToHeight:(float)arg1 toVisible:(char)arg2 animated:(char)arg3 ;
-(NSArray *)defaultRecipients;
-(int)typeOfSection:(int)arg1 ;
-(char)loadingResults;
-(id)shareRecipientAtIndexPath:(id)arg1 ;
-(void)bumpNewRecipientToFront:(id)arg1 ;
-(void)logSelectionEventForRecipient:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setDefaultRecipients:(NSArray *)arg1 ;
-(void)setLoadingResults:(char)arg1 ;
-(char)useRankedContacts;
-(void)logCurrentImpressionEventsForSearchWithQuery:(id)arg1 forSelectedItem:(id)arg2 withSelectedUserIDs:(id)arg3 atIndexPath:(id)arg4 ;
-(id)loggingDictionaryForRecipient:(id)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)messageView:(id)arg1 didUpdateToHeight:(float)arg2 ;
-(void)messageViewClearButtonTappedWhileNoText:(id)arg1 ;
-(void)swipeDismissManager:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)swipeDismissManager:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)showView;
-(int)sectionForType:(int)arg1 ;
-(NSString *)sourceThreadId;
-(void)setSourceThreadId:(NSString *)arg1 ;
-(void)setBottomButton:(UIButton *)arg1 ;
-(void)setSearchButton:(UIButton *)arg1 ;
-(void)setTopLine:(UIView *)arg1 ;
-(void)setMessageView:(IGDirectGrowingMessageTextView *)arg1 ;
-(void)setSearchBarClearButton:(UIButton *)arg1 ;
-(void)setWarningLine:(UIView *)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(UIView *)contentContainerView;
-(void)setDataSource:(IGDirectRecipientDataSource *)arg1 ;
-(void)setDelegate:(id<IGDirectShareSheetDelegate>)arg1 ;
-(void)dealloc;
-(IGDirectRecipientDataSource *)dataSource;
-(id<IGDirectShareSheetDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(id)currentText;
-(UILabel *)titleLabel;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id<IGDirectUploadableProducer>)model;
-(char)textFieldShouldClear:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UITextField *)searchBar;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)send;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setSearchBar:(UITextField *)arg1 ;
-(UITextView *)warningLabel;
-(void)setWarningLabel:(UITextView *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(CGRect)keyboardFrame;
-(unsigned)shareState;
-(void)setShareState:(unsigned)arg1 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)setAllSections:(NSArray *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(NSArray *)allSections;
@end

