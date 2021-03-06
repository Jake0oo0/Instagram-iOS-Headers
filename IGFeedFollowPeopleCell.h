
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGSwipableUserCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGFeedFollowPeopleCellDelegate, IGRaindropAnalyticsDelegate;
@class IGFollowPeopleMegaphoneConfiguration, IGFeedFollowPeopleView, NSMutableOrderedSet, NSString;

@interface IGFeedFollowPeopleCell : UICollectionViewCell <IGSwipableUserCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	char _hasFollowList;
	char _hasSeenList;
	char _dismissed;
	id<IGFeedFollowPeopleCellDelegate> _delegate;
	IGFollowPeopleMegaphoneConfiguration* _megaphoneConfig;
	IGFeedFollowPeopleView* _followPeopleView;
	NSMutableOrderedSet* _accounts;
	int _tableRowCount;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) IGFeedFollowPeopleView * followPeopleView;                             //@synthesize followPeopleView=_followPeopleView - In the implementation block
@property (assign,nonatomic) char hasFollowList;                                                    //@synthesize hasFollowList=_hasFollowList - In the implementation block
@property (assign,nonatomic) char hasSeenList;                                                      //@synthesize hasSeenList=_hasSeenList - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * accounts;                                        //@synthesize accounts=_accounts - In the implementation block
@property (assign,nonatomic) int tableRowCount;                                                     //@synthesize tableRowCount=_tableRowCount - In the implementation block
@property (assign,getter=isDismissed,nonatomic) char dismissed;                                     //@synthesize dismissed=_dismissed - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedFollowPeopleCellDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFollowPeopleMegaphoneConfiguration * megaphoneConfig;              //@synthesize megaphoneConfig=_megaphoneConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createFollowPeopleView;
-(void)friendStatusChanged:(id)arg1 ;
-(void)friendStatusReceived:(id)arg1 ;
-(void)setTableRowCount:(int)arg1 ;
-(IGFeedFollowPeopleView *)followPeopleView;
-(char)hasFollowList;
-(void)didTapBanner;
-(IGFollowPeopleMegaphoneConfiguration *)megaphoneConfig;
-(void)didTapFooterBanner;
-(char)isDismissed;
-(char)hasSeenList;
-(void)setHasSeenList:(char)arg1 ;
-(void)removeUser:(id)arg1 deleteRowAnimation:(int)arg2 insertRowAnimation:(int)arg3 shouldReplenishRow:(char)arg4 ;
-(void)setHasFollowList:(char)arg1 ;
-(id)indexPathForUser:(id)arg1 ;
-(int)tableRowCount;
-(void)removeCellAtIndexPath:(id)arg1 deleteRowAnimation:(int)arg2 insertRowAnimation:(int)arg3 shouldReplenishRow:(char)arg4 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)userDidTapCell:(id)arg1 ;
-(void)userDidDismissCell:(id)arg1 ;
-(void)userDidFollow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 megaphoneConfig:(id)arg2 analyticsDelegate:(id)arg3 ;
-(void)sendSeenReceiptWhenApplicable;
-(void)setFeaturedUserInfoList:(id)arg1 ;
-(void)setFollowPeopleView:(IGFeedFollowPeopleView *)arg1 ;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)setDismissed:(char)arg1 ;
-(float)cellHeight;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGFeedFollowPeopleCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGFeedFollowPeopleCellDelegate>)delegate;
-(int)numberOfRows;
-(int)accessibilityElementCount;
-(NSMutableOrderedSet *)accounts;
-(void)setAccounts:(NSMutableOrderedSet *)arg1 ;
@end

