
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGPublicThreadViewControllerDelegate.h>

@class UICollectionView, UILabel, IGTapButton, NSArray, NSIndexPath, NSString;

@interface IGPublicThreadInboxViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGPublicThreadViewControllerDelegate> {

	char _showAll;
	UICollectionView* _collectionView;
	UILabel* _titleLabel;
	IGTapButton* _showHideButton;
	NSArray* _threads;
	NSIndexPath* _selectedPublicThreadIndexPath;

}

@property (nonatomic,retain) UICollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGTapButton * showHideButton;                             //@synthesize showHideButton=_showHideButton - In the implementation block
@property (nonatomic,retain) NSArray * threads;                                        //@synthesize threads=_threads - In the implementation block
@property (assign,nonatomic) char showAll;                                             //@synthesize showAll=_showAll - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedPublicThreadIndexPath;              //@synthesize selectedPublicThreadIndexPath=_selectedPublicThreadIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setThreads:(NSArray *)arg1 ;
-(void)updateThreads;
-(IGTapButton *)showHideButton;
-(void)updateCollectionViewFrame;
-(void)setSelectedPublicThreadIndexPath:(NSIndexPath *)arg1 ;
-(id)threadAtIndexPath:(id)arg1 ;
-(void)pushToThread:(id)arg1 animated:(char)arg2 ;
-(NSIndexPath *)selectedPublicThreadIndexPath;
-(id)threadAtNextIndexPath:(id)arg1 ;
-(id)createTitleLabel;
-(id)createShowHideButton;
-(void)setShowHideButton:(IGTapButton *)arg1 ;
-(void)onShowHideButtonTapped;
-(id)createCollectionView;
-(id)createCollectionViewLayout;
-(void)publicThreadViewControllerDidScrollToNextThread:(id)arg1 ;
-(void)setShowAll:(char)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)threads;
-(char)showAll;
-(void)setupView;
@end

