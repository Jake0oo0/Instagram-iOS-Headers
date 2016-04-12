/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGTabControlDelegate.h>

@protocol IGInsightsTabBarControllerDelegate;
@class NSArray, UIViewController, NSString, IGTabControl, UIFont;

@interface IGInsightsTabBarController : UIViewController <IGTabControlDelegate> {

	char _tabControlScrollable;
	char _showButtonBorder;
	NSArray* _contentViewControllers;
	UIViewController* _currentViewController;
	NSString* _tabBarTitle;
	id<IGInsightsTabBarControllerDelegate> _delegate;
	IGTabControl* _tabControl;
	UIFont* _tabFont;

}

@property (nonatomic,copy) NSArray * contentViewControllers;                                      //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,retain) UIViewController * currentViewController;                            //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,copy) NSString * tabBarTitle;                                                //@synthesize tabBarTitle=_tabBarTitle - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsTabBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGTabControl * tabControl;                                         //@synthesize tabControl=_tabControl - In the implementation block
@property (nonatomic,readonly) char tabControlScrollable;                                         //@synthesize tabControlScrollable=_tabControlScrollable - In the implementation block
@property (nonatomic,retain) UIFont * tabFont;                                                    //@synthesize tabFont=_tabFont - In the implementation block
@property (nonatomic,readonly) char showButtonBorder;                                             //@synthesize showButtonBorder=_showButtonBorder - In the implementation block
-(IGTabControl *)tabControl;
-(UIViewController *)currentViewController;
-(void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned)arg2 ;
-(void)setCurrentViewController:(UIViewController *)arg1 ;
-(char)showButtonBorder;
-(id)initWithTabControlScrollable:(char)arg1 tabFont:(id)arg2 showButtonBorder:(char)arg3 ;
-(void)setTabBarTitle:(NSString *)arg1 ;
-(void)_initializeTabControl;
-(char)_showTabControl;
-(id)_viewControllerAtIndex:(int)arg1 ;
-(char)tabControlScrollable;
-(NSString *)tabBarTitle;
-(UIFont *)tabFont;
-(void)setTabFont:(UIFont *)arg1 ;
-(void)setDelegate:(id<IGInsightsTabBarControllerDelegate>)arg1 ;
-(id<IGInsightsTabBarControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
@end

