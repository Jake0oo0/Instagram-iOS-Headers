/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsChartComponent, IGInsightsChartView, IGInsightsChartViewController, IGInsightsLoggingHelper, NSString;

@interface IGInsightsChartComponentAdapter : NSObject <IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsChartComponent* _component;
	IGInsightsChartView* _componentView;
	IGInsightsChartViewController* _chartViewController;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsChartComponent * component;                                             //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) IGInsightsChartView * componentView;                                              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsChartViewController * chartViewController;                              //@synthesize chartViewController=_chartViewController - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                          //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(IGInsightsChartView *)componentView;
-(void)setComponentView:(IGInsightsChartView *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)setChartViewController:(IGInsightsChartViewController *)arg1 ;
-(IGInsightsChartViewController *)chartViewController;
-(IGInsightsChartComponent *)component;
-(void)setComponent:(IGInsightsChartComponent *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end

