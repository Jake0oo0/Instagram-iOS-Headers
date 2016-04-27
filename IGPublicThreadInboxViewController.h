
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGPublicThreadViewControllerDelegate.h>

@protocol IGPublicThreadInboxViewControllerDelegate;
@class UICollectionView, UILabel, IGTapButton, IGDirectThread, NSMutableArray, NSIndexPath, NSArray, UIView, NSString;

@interface IGPublicThreadInboxViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGPublicThreadViewControllerDelegate> {

	char _showAll;
	id<IGPublicThreadInboxViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	IGTapButton* _showHideButton;
	IGDirectThread* _ownedPublicThread;
	NSMutableArray* _followedPublicThreads;
	NSIndexPath* _selectedPublicThreadIndexPath;
	NSArray* _threads;
	UIView* _footerView;
	UILabel* _footerLabel;

}

@property (assign,nonatomic,__weak) id<IGPublicThreadInboxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGTapButton * showHideButton;                                               //@synthesize showHideButton=_showHideButton - In the implementation block
@property (nonatomic,retain) IGDirectThread * ownedPublicThread;                                         //@synthesize ownedPublicThread=_ownedPublicThread - In the implementation block
@property (nonatomic,retain) NSMutableArray * followedPublicThreads;                                     //@synthesize followedPublicThreads=_followedPublicThreads - In the implementation block
@property (assign,nonatomic) char showAll;                                                               //@synthesize showAll=_showAll - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedPublicThreadIndexPath;                                //@synthesize selectedPublicThreadIndexPath=_selectedPublicThreadIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * threads;                                                          //@synthesize threads=_threads - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                        //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                      //@synthesize footerLabel=_footerLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGDirectThread *)ownedPublicThread;
-(void)setThreads:(NSArray *)arg1 ;
-(void)setOwnedPublicThread:(IGDirectThread *)arg1 ;
-(void)setFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(NSMutableArray *)followedPublicThreads;
-(void)updateViewFrame;
-(IGTapButton *)showHideButton;
-(void)setSelectedPublicThreadIndexPath:(NSIndexPath *)arg1 ;
-(id)threadAtIndexPath:(id)arg1 ;
-(void)pushToThread:(id)arg1 animated:(char)arg2 ;
-(NSIndexPath *)selectedPublicThreadIndexPath;
-(id)threadAtNextIndexPath:(id)arg1 ;
-(id)createTitleLabel;
-(id)createShowHideButton;
-(void)setShowHideButton:(IGTapButton *)arg1 ;
-(void)updateShowHideButton;
-(void)onShowHideButtonTapped;
-(id)createCollectionView;
-(id)createFooterView;
-(id)createFooterLabel;
-(void)updateThreadsAndUI;
-(id)createCollectionViewLayout;
-(void)publicThreadViewControllerDidScrollToNextThread:(id)arg1 ;
-(void)setShowAll:(char)arg1 ;
-(void)setDelegate:(id<IGPublicThreadInboxViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id<IGPublicThreadInboxViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)threads;
-(char)showAll;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
-(void)setupView;
@end
