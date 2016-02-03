/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGCommentThreadManagerDelegate.h>
#import <Instagram/IGCommentLoadItemDelegate.h>
#import <Instagram/IGBulkCommentDeleteManagerDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGCommentItemDelegate.h>

@class IGListCollectionView, IGListAdapter, IGCommentThreadManager, IGBulkCommentDeleteManager, IGCommentTextView, IGKeyboardInputManager, IGCommentCellRevealManager, IGAutocompleteController, NSString;

@interface IGCommentThreadViewController2 : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGCommentThreadManagerDelegate, IGCommentLoadItemDelegate, IGBulkCommentDeleteManagerDelegate, IGGrowingTextViewDelegate, IGCommentItemDelegate> {

	char _showKeyboardOnAppear;
	char _appearedOnce;
	char _scrolledToBottomOnce;
	char _autoScrollPaused;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGCommentThreadManager* _threadManager;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	IGCommentTextView* _commentTextView;
	IGKeyboardInputManager* _keyboardInputManager;
	IGCommentCellRevealManager* _cellRevealManager;
	IGAutocompleteController* _autocompleteController;
	NSString* _prefillText;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                    //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGCommentThreadManager * threadManager;                         //@synthesize threadManager=_threadManager - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;                 //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) IGCommentTextView * commentTextView;                            //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,readonly) IGKeyboardInputManager * keyboardInputManager;                  //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,readonly) IGCommentCellRevealManager * cellRevealManager;                 //@synthesize cellRevealManager=_cellRevealManager - In the implementation block
@property (nonatomic,readonly) IGAutocompleteController * autocompleteController;              //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,readonly) NSString * prefillText;                                         //@synthesize prefillText=_prefillText - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                                     //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,readonly) char showKeyboardOnAppear;                                      //@synthesize showKeyboardOnAppear=_showKeyboardOnAppear - In the implementation block
@property (assign,nonatomic) char appearedOnce;                                                //@synthesize appearedOnce=_appearedOnce - In the implementation block
@property (assign,nonatomic) char scrolledToBottomOnce;                                        //@synthesize scrolledToBottomOnce=_scrolledToBottomOnce - In the implementation block
@property (assign,nonatomic) char autoScrollPaused;                                            //@synthesize autoScrollPaused=_autoScrollPaused - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCommentCellRevealManager *)cellRevealManager;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(void)commentController:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)commentController:(id)arg1 didTapReplyForUser:(id)arg2 ;
-(void)commentController:(id)arg1 didTapURL:(id)arg2 ;
-(void)commentController:(id)arg1 didReportComment:(id)arg2 ;
-(void)didTapCommentLoadItemController:(id)arg1 ;
-(void)didUpdateCommentThreadManager:(id)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(void)setupTextViewAndAutocomplete;
-(IGCommentThreadManager *)threadManager;
-(IGCommentTextView *)commentTextView;
-(char)showKeyboardOnAppear;
-(char)appearedOnce;
-(void)setAppearedOnce:(char)arg1 ;
-(IGAutocompleteController *)autocompleteController;
-(IGKeyboardInputManager *)keyboardInputManager;
-(NSString *)prefillText;
-(void)onSendButtonTapped:(id)arg1 ;
-(char)scrolledToBottomOnce;
-(char)autoScrollPaused;
-(char)collectionViewIsAtBottom;
-(void)setAutoScrollPaused:(char)arg1 ;
-(IGListAdapter *)listAdapter;
-(char)shouldAutoScrollToBottom;
-(void)setScrolledToBottomOnce:(char)arg1 ;
-(id)commentDeleteUndoMessageForNumberOfComments:(int)arg1 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)commentDeleteManagerDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2 ;
-(void)commentDeleteManagerDidStartCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFinishCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFailToDeleteComments:(id)arg1 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 prefillText:(id)arg2 currentUser:(id)arg3 multiAccounts:(char)arg4 showKeyboardOnAppear:(char)arg5 ;
-(char)prefersTabBarHidden;
-(NSString *)placeholderText;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

