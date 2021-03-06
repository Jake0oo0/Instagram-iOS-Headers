
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAYMFUserCellDelegate.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFollowAccountListModel, NSArray, NSString;

@interface IGAYMFItemController : IGListItemController <IGAYMFUserCellDelegate, IGListDisplayDelegate, IGListItemType> {

	char _seen;
	IGFollowAccountListModel* _followAccountListModel;
	NSArray* _activeAccounts;
	NSArray* _accountPool;
	NSArray* _configAndAccountModels;

}

@property (nonatomic,readonly) IGFollowAccountListModel * followAccountListModel;              //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (assign,nonatomic) char seen;                                                        //@synthesize seen=_seen - In the implementation block
@property (nonatomic,retain) NSArray * activeAccounts;                                         //@synthesize activeAccounts=_activeAccounts - In the implementation block
@property (nonatomic,retain) NSArray * accountPool;                                            //@synthesize accountPool=_accountPool - In the implementation block
@property (nonatomic,retain) NSArray * configAndAccountModels;                                 //@synthesize configAndAccountModels=_configAndAccountModels - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)seen;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)onStatusChangeNotification:(id)arg1 ;
-(void)onStatusReceivedNotification:(id)arg1 ;
-(IGFollowAccountListModel *)followAccountListModel;
-(void)setConfigAndAccountModelsFromActiveAccounts:(id)arg1 config:(id)arg2 ;
-(void)setActiveAccounts:(NSArray *)arg1 ;
-(void)setAccountPool:(NSArray *)arg1 ;
-(NSArray *)configAndAccountModels;
-(NSArray *)accountPool;
-(id)replenishUserList:(id)arg1 fromPool:(id)arg2 ;
-(void)logFeaturedUserInfoDismissed:(id)arg1 atIndex:(unsigned)arg2 wasLastUser:(char)arg3 ;
-(void)deleteRemainingCells;
-(void)logEvent:(id)arg1 position:(unsigned)arg2 userInfo:(id)arg3 ;
-(void)logAction:(id)arg1 reason:(id)arg2 ;
-(id)filteredUsersNotFollowing:(id)arg1 ;
-(void)didTapDismissBanner:(id)arg1 ;
-(void)didTapBanner:(id)arg1 ;
-(void)pushPeopleController;
-(void)setConfigAndAccountModels:(NSArray *)arg1 ;
-(void)configureUserCell:(id)arg1 userInfo:(id)arg2 ;
-(void)configureBannerCell:(id)arg1 viewModel:(id)arg2 ;
-(void)setSeen:(char)arg1 ;
-(void)pushControllerForUser:(id)arg1 ;
-(void)dismissUserAtCellIndex:(int)arg1 ;
-(void)reloadUserAccounts;
-(void)didDismissAYMFUserCell:(id)arg1 ;
-(void)didFollowAYMFUserCell:(id)arg1 ;
-(void)didTapAYMFUserCell:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id)initWithFollowAccountListModel:(id)arg1 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(NSArray *)activeAccounts;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

