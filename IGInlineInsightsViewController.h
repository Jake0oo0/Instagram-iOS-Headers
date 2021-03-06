
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGInsightsContentRowListViewDelegate.h>

@class UIView, IGInlineInsightsView, IGAdsInlineInsightsView, IGInsightsLoggingHelper, IGInlineInsightsDataProvider, UISwipeGestureRecognizer, IGFeedItem, NSString;

@interface IGInlineInsightsViewController : UIViewController <UIViewControllerTransitioningDelegate, IGInsightsContentRowListViewDelegate> {

	int _inlineInsightsType;
	UIView* _overlayView;
	UIView* _contentView;
	IGInlineInsightsView* _organicInlineInsightsView;
	IGAdsInlineInsightsView* _adsInlineInsightsView;
	IGInsightsLoggingHelper* _loggingHelper;
	IGInlineInsightsDataProvider* _dataProvider;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	IGFeedItem* _feedItem;
	NSString* _feedItemPromoteStateLoggingString;

}

@property (assign,nonatomic) int inlineInsightsType;                                         //@synthesize inlineInsightsType=_inlineInsightsType - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsView * organicInlineInsightsView;               //@synthesize organicInlineInsightsView=_organicInlineInsightsView - In the implementation block
@property (nonatomic,retain) IGAdsInlineInsightsView * adsInlineInsightsView;                //@synthesize adsInlineInsightsView=_adsInlineInsightsView - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInlineInsightsDataProvider * dataProvider;                    //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeGestureRecognizer;              //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                          //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy) NSString * feedItemPromoteStateLoggingString;                     //@synthesize feedItemPromoteStateLoggingString=_feedItemPromoteStateLoggingString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)onOverlayTapped;
-(id)initWithInlineInsightsType:(int)arg1 feedItem:(id)arg2 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(id)loggingStringForPromoteState:(int)arg1 ;
-(int)inlineInsightsType;
-(void)setOrganicInlineInsightsView:(IGInlineInsightsView *)arg1 ;
-(IGInlineInsightsView *)organicInlineInsightsView;
-(void)setAdsInlineInsightsView:(IGAdsInlineInsightsView *)arg1 ;
-(IGAdsInlineInsightsView *)adsInlineInsightsView;
-(void)onSwipe:(id)arg1 ;
-(void)setSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeGestureRecognizer;
-(void)alertAndLogForError:(id)arg1 ;
-(NSString *)feedItemPromoteStateLoggingString;
-(void)dismissContentView;
-(void)needAnimateContentRowListView:(id)arg1 upForDistance:(float)arg2 ;
-(void)setInlineInsightsType:(int)arg1 ;
-(void)setFeedItemPromoteStateLoggingString:(NSString *)arg1 ;
-(id)contentContainerView;
-(void)loadView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setDataProvider:(IGInlineInsightsDataProvider *)arg1 ;
-(IGInlineInsightsDataProvider *)dataProvider;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

