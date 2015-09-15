/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGEditPostTextViewControllerDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <Instagram/IGUserInTaggingViewControllerDelegate.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGEditPostViewControllerDelegate;
@class UIView, IGFeedItem, IGAutocompleteController, IGFeedMediaView, UITapGestureRecognizer, IGFeedItemHeader, IGEditPostTextViewController, IGTagPeopleView, UIScrollView, UIBarButtonItem, IGEditedPost, IGNavigationBar, NSString;

@interface IGEditPostViewController : IGViewController <IGEditPostTextViewControllerDelegate, IGFeedItemHeaderDelegate, IGAutocompleteControllerDelegate, IGActionSheetDelegate, IGLocationPickerDelegate, IGUserInTaggingViewControllerDelegate, IGFeedItemVideoViewDelegate, IGRaindropAnalyticsDelegate> {

	char _navigationBarWasHidden;
	char _autocompleteShown;
	char _appearing;
	char _disappearing;
	char _committingText;
	UIView* _backgroundView;
	UIView* _backgroundTabBarView;
	IGFeedItem* _feedItem;
	id<IGEditPostViewControllerDelegate> _delegate;
	IGAutocompleteController* _autocompleteController;
	UIView* _autocompleteDivider;
	IGFeedMediaView* _mediaView;
	UITapGestureRecognizer* _mediaViewTapRecognizer;
	IGFeedItemHeader* _headerView;
	IGEditPostTextViewController* _textViewController;
	IGTagPeopleView* _tagPeopleView;
	UIScrollView* _scrollView;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	IGEditedPost* _editedPost;
	UIView* _aboveHeaderView;
	UIView* _blueStatusBar;
	int _keyboardAnimationCurve;
	double _keyboardAnimationDuration;
	CGRect _headerFrame;
	CGRect _mediaFrame;
	CGRect _backgroundViewFrame;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic) char navigationBarWasHidden;                                       //@synthesize navigationBarWasHidden=_navigationBarWasHidden - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTabBarView;                                     //@synthesize backgroundTabBarView=_backgroundTabBarView - In the implementation block
@property (assign,nonatomic) CGRect headerFrame;                                                //@synthesize headerFrame=_headerFrame - In the implementation block
@property (assign,nonatomic) CGRect mediaFrame;                                                 //@synthesize mediaFrame=_mediaFrame - In the implementation block
@property (assign,nonatomic) CGRect backgroundViewFrame;                                        //@synthesize backgroundViewFrame=_backgroundViewFrame - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                             //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGEditPostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;                 //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * autocompleteDivider;                                      //@synthesize autocompleteDivider=_autocompleteDivider - In the implementation block
@property (nonatomic,retain) IGFeedMediaView * mediaView;                                       //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * mediaViewTapRecognizer;                   //@synthesize mediaViewTapRecognizer=_mediaViewTapRecognizer - In the implementation block
@property (nonatomic,retain) IGFeedItemHeader * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGEditPostTextViewController * textViewController;                 //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) IGTagPeopleView * tagPeopleView;                                   //@synthesize tagPeopleView=_tagPeopleView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) char autocompleteShown;                                            //@synthesize autocompleteShown=_autocompleteShown - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) IGEditedPost * editedPost;                                         //@synthesize editedPost=_editedPost - In the implementation block
@property (nonatomic,retain) UIView * aboveHeaderView;                                          //@synthesize aboveHeaderView=_aboveHeaderView - In the implementation block
@property (nonatomic,retain) UIView * blueStatusBar;                                            //@synthesize blueStatusBar=_blueStatusBar - In the implementation block
@property (assign,getter=isAppearing,nonatomic) char appearing;                                 //@synthesize appearing=_appearing - In the implementation block
@property (assign,getter=isDisappearing,nonatomic) char disappearing;                           //@synthesize disappearing=_disappearing - In the implementation block
@property (assign,nonatomic) int keyboardAnimationCurve;                                        //@synthesize keyboardAnimationCurve=_keyboardAnimationCurve - In the implementation block
@property (assign,nonatomic) double keyboardAnimationDuration;                                  //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
@property (getter=isKeyboardShowing,nonatomic,readonly) char keyboardShowing; 
@property (assign,getter=isCommittingText,nonatomic) char committingText;                       //@synthesize committingText=_committingText - In the implementation block
@property (nonatomic,readonly) IGNavigationBar * navigationBar; 
@property (nonatomic,readonly) float navBarHeight; 
@property (getter=isPhoto,nonatomic,readonly) char photo; 
@property (getter=isVideo,nonatomic,readonly) char video; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)keyboardAnimationDuration;
-(int)keyboardAnimationCurve;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)setCommittingText:(char)arg1 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(char)isCommittingText;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)setTextViewController:(IGEditPostTextViewController *)arg1 ;
-(IGEditPostTextViewController *)textViewController;
-(IGAutocompleteController *)autocompleteController;
-(char)autocompleteShown;
-(void)setAutocompleteShown:(char)arg1 ;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(char)isKeyboardShowing;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoViewPosition:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)textViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2 ;
-(void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2 ;
-(char)textViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(IGTagPeopleView *)tagPeopleView;
-(UIView *)backgroundTabBarView;
-(UIView *)aboveHeaderView;
-(char)navigationBarWasHidden;
-(UIView *)blueStatusBar;
-(UIView *)autocompleteDivider;
-(int)tagCount;
-(void)setAlphaOnNavBarItems:(float)arg1 ;
-(CGRect)backgroundViewFrame;
-(CGRect)mediaFrame;
-(CGSize)contentSizeWithCaptionHeight:(float)arg1 ;
-(void)setKeyboardAnimationCurve:(int)arg1 ;
-(void)setKeyboardAnimationDuration:(double)arg1 ;
-(UITapGestureRecognizer *)mediaViewTapRecognizer;
-(void)adjustAutocompleteFrame;
-(float)contentOffsetYTouchingCaption;
-(float)navBarHeight;
-(void)scrollToCaretAnimated:(char)arg1 ;
-(void)setDisappearing:(char)arg1 ;
-(void)disappearWithCurve:(int)arg1 duration:(double)arg2 ;
-(char)isDisappearing;
-(IGEditedPost *)editedPost;
-(void)mediaViewTapped:(id)arg1 ;
-(void)scrollViewTapped:(id)arg1 ;
-(void)tagPeopleTapped:(id)arg1 ;
-(void)onDoneEditing;
-(void)onCancelEditing;
-(void)launchLocationPicker;
-(void)dismissPresentedController:(id)arg1 finished:(char)arg2 ;
-(void)launchUserTaggingView;
-(float)contentOffsetYAtCaret;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)userInTaggingViewController:(id)arg1 didFinish:(char)arg2 ;
-(void)setNavigationBarWasHidden:(char)arg1 ;
-(void)setBackgroundTabBarView:(UIView *)arg1 ;
-(void)setMediaFrame:(CGRect)arg1 ;
-(void)setBackgroundViewFrame:(CGRect)arg1 ;
-(void)setAutocompleteDivider:(UIView *)arg1 ;
-(void)setMediaView:(IGFeedMediaView *)arg1 ;
-(void)setMediaViewTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTagPeopleView:(IGTagPeopleView *)arg1 ;
-(void)setEditedPost:(IGEditedPost *)arg1 ;
-(void)setAboveHeaderView:(UIView *)arg1 ;
-(void)setBlueStatusBar:(UIView *)arg1 ;
-(char)isAppearing;
-(void)setAppearing:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGEditPostViewControllerDelegate>)arg1 ;
-(id<IGEditPostViewControllerDelegate>)delegate;
-(IGNavigationBar *)navigationBar;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIScrollView *)scrollView;
-(IGFeedItemHeader *)headerView;
-(void)setHeaderView:(IGFeedItemHeader *)arg1 ;
-(void)dismiss;
-(UIEdgeInsets)contentInsets;
-(char)isVideo;
-(CGRect)headerFrame;
-(void)setHeaderFrame:(CGRect)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(CGRect)keyboardFrame;
-(UIBarButtonItem *)doneButton;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(char)isPhoto;
-(IGFeedMediaView *)mediaView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

