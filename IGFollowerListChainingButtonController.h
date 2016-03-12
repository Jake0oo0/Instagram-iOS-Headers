
#import <Instagram/IGFollowerListChainingButtonGroupViewDelegate.h>

@protocol IGRaindropAnalyticsDelegate;
@class IGFollowerListChainingButtonGroupView, IGUser, IGUnfollowHeaderView, NSString;

@interface IGFollowerListChainingButtonController : NSObject <IGFollowerListChainingButtonGroupViewDelegate> {

	char _loadingFinished;
	IGFollowerListChainingButtonGroupView* _buttonGroupView;
	IGUser* _user;
	IGUnfollowHeaderView* _unfollowHeaderView;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) IGFollowerListChainingButtonGroupView * buttonGroupView;               //@synthesize buttonGroupView=_buttonGroupView - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                         //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGUnfollowHeaderView * unfollowHeaderView;                             //@synthesize unfollowHeaderView=_unfollowHeaderView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic) char loadingFinished;                                                  //@synthesize loadingFinished=_loadingFinished - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(IGUnfollowHeaderView *)unfollowHeaderView;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)setUnfollowHeaderView:(IGUnfollowHeaderView *)arg1 ;
-(char)userFollowStatusKnown:(id)arg1 ;
-(char)loadingFinished;
-(IGFollowerListChainingButtonGroupView *)buttonGroupView;
-(char)shouldShowChainingButtonWithUser:(id)arg1 ;
-(void)setLoadingFinished:(char)arg1 ;
-(void)updateButtonGroupViewStateAnimated:(char)arg1 ;
-(void)updateNotificationObserversWithUser:(id)arg1 ;
-(void)updateButtonGroupViewState;
-(void)followButtonTapped:(id)arg1 ;
-(void)unfollowButtonTapped:(id)arg1 ;
-(void)chainingButtonTapped:(id)arg1 ;
-(id)initWithAnalyticsDelegate:(id)arg1 ;
-(void)setButtonGroupView:(IGFollowerListChainingButtonGroupView *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
@end

