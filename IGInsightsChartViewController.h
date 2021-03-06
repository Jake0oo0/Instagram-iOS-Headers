
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsChartView, IGInsightsQuery, IGInsightsLoggingHelper, NSString;

@interface IGInsightsChartViewController : UIViewController <IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsChartView* _insightsChartView;
	IGInsightsQuery* _buttonQuery;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInsightsChartView * insightsChartView;                                                        //@synthesize insightsChartView=_insightsChartView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsQuery *)buttonQuery;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(IGInsightsChartView *)insightsChartView;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 chartStyle:(id)arg4 chartData:(id)arg5 loggingHelper:(id)arg6 ;
-(void)setInsightsChartView:(IGInsightsChartView *)arg1 ;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end

