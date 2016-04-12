
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInlineInsightsViewDelegate, IGInsightsContentRowListViewDelegate;
@class IGInsightsContentRowListView, IGInlineInsightsHeaderView, IGInlineInsightsUnitView, UILabel, NSString, IGInsightsLoggingHelper, UIActivityIndicatorView;

@interface IGInlineInsightsView : UIView {

	char _setSeparator;
	IGInsightsContentRowListView* _educationView;
	id<IGInlineInsightsViewDelegate> _delegate;
	IGInlineInsightsHeaderView* _headerView;
	IGInlineInsightsUnitView* _impressionUnitView;
	IGInlineInsightsUnitView* _reachUnitView;
	IGInlineInsightsUnitView* _engagementUnitView;
	UILabel* _errorTitleLabel;
	UILabel* _errorSubtitleLabel;
	id<IGInsightsContentRowListViewDelegate> _educationUnitDelegate;
	NSString* _impressionString;
	NSString* _reachString;
	NSString* _engagementString;
	IGInsightsLoggingHelper* _loggingHelper;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) IGInsightsContentRowListView * educationView;                                       //@synthesize educationView=_educationView - In the implementation block
@property (assign,nonatomic,__weak) id<IGInlineInsightsViewDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGInlineInsightsHeaderView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsUnitView * impressionUnitView;                                      //@synthesize impressionUnitView=_impressionUnitView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsUnitView * reachUnitView;                                           //@synthesize reachUnitView=_reachUnitView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsUnitView * engagementUnitView;                                      //@synthesize engagementUnitView=_engagementUnitView - In the implementation block
@property (nonatomic,retain) UILabel * errorTitleLabel;                                                          //@synthesize errorTitleLabel=_errorTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * errorSubtitleLabel;                                                       //@synthesize errorSubtitleLabel=_errorSubtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsContentRowListViewDelegate> educationUnitDelegate;              //@synthesize educationUnitDelegate=_educationUnitDelegate - In the implementation block
@property (assign,nonatomic) char setSeparator;                                                                  //@synthesize setSeparator=_setSeparator - In the implementation block
@property (nonatomic,copy,readonly) NSString * impressionString;                                                 //@synthesize impressionString=_impressionString - In the implementation block
@property (nonatomic,copy,readonly) NSString * reachString;                                                      //@synthesize reachString=_reachString - In the implementation block
@property (nonatomic,copy,readonly) NSString * engagementString;                                                 //@synthesize engagementString=_engagementString - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                            //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                  //@synthesize spinner=_spinner - In the implementation block
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)initializeSpinner;
-(IGInsightsContentRowListView *)educationView;
-(void)setEducationUnitDelegate:(id<IGInsightsContentRowListViewDelegate>)arg1 ;
-(void)setEducationView:(IGInsightsContentRowListView *)arg1 ;
-(id<IGInsightsContentRowListViewDelegate>)educationUnitDelegate;
-(void)initializeUnitViews;
-(void)initializeEducationView;
-(void)hideUnitsAndEducation;
-(void)initializeErrorTextLabel;
-(void)updateViewWithNoInsightsErrorTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)updateViewWithInsights:(id)arg1 ;
-(void)showUnitsAndEducation;
-(void)handleGraphQLRequestError:(id)arg1 ;
-(void)hideErrors;
-(IGInlineInsightsUnitView *)impressionUnitView;
-(IGInlineInsightsUnitView *)reachUnitView;
-(IGInlineInsightsUnitView *)engagementUnitView;
-(void)layoutErrorLabelsWithCurrentY:(float)arg1 ;
-(void)setupSeparator;
-(UILabel *)errorTitleLabel;
-(UILabel *)errorSubtitleLabel;
-(void)showErrors;
-(char)setSeparator;
-(void)setSetSeparator:(char)arg1 ;
-(id)initWithFeedItem:(id)arg1 educationUnitDelegate:(id)arg2 loggingHelper:(id)arg3 ;
-(void)querySuccessApplyInsights:(id)arg1 ;
-(void)queryFailureHandleError:(id)arg1 ;
-(void)setImpressionUnitView:(IGInlineInsightsUnitView *)arg1 ;
-(void)setReachUnitView:(IGInlineInsightsUnitView *)arg1 ;
-(void)setEngagementUnitView:(IGInlineInsightsUnitView *)arg1 ;
-(void)setErrorTitleLabel:(UILabel *)arg1 ;
-(void)setErrorSubtitleLabel:(UILabel *)arg1 ;
-(NSString *)impressionString;
-(NSString *)reachString;
-(NSString *)engagementString;
-(void)setDelegate:(id<IGInlineInsightsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInlineInsightsViewDelegate>)delegate;
-(IGInlineInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInlineInsightsHeaderView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

