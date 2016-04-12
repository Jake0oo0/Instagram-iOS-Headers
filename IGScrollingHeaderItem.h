/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGScrollingHeaderItemDelegate;
@class UIScrollView, NSArray, UIViewController;

@interface IGScrollingHeaderItem : NSObject {

	char _shouldScrollAwayNavigationBar;
	char _shouldScrollAwayStatusBar;
	char _headerIsScrolledAway;
	char _headerIsScrolling;
	UIScrollView* _scrollView;
	NSArray* _additionalScrollingViews;
	float _headerHeight;
	id<IGScrollingHeaderItemDelegate> _delegate;
	UIViewController* _viewController;
	NSArray* _transformNavViews;

}

@property (nonatomic,readonly) char shouldScrollAwayNavigationBar;                           //@synthesize shouldScrollAwayNavigationBar=_shouldScrollAwayNavigationBar - In the implementation block
@property (nonatomic,readonly) char shouldScrollAwayStatusBar;                               //@synthesize shouldScrollAwayStatusBar=_shouldScrollAwayStatusBar - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSArray * additionalScrollingViews;                           //@synthesize additionalScrollingViews=_additionalScrollingViews - In the implementation block
@property (assign,nonatomic) float headerHeight;                                             //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) char headerIsScrolledAway;                                      //@synthesize headerIsScrolledAway=_headerIsScrolledAway - In the implementation block
@property (assign,nonatomic) char headerIsScrolling;                                         //@synthesize headerIsScrolling=_headerIsScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<IGScrollingHeaderItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                     //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSArray * transformNavViews;                                  //@synthesize transformNavViews=_transformNavViews - In the implementation block
-(char)headerIsScrolledAway;
-(char)headerIsScrolling;
-(id)initWithViewController:(id)arg1 shouldScrollAwayNavigationBar:(char)arg2 shouldScrollAwayStatusBar:(char)arg3 transformNavViews:(id)arg4 ;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 headerHeight:(float)arg3 ;
-(char)shouldScrollAwayStatusBar;
-(char)shouldScrollAwayNavigationBar;
-(NSArray *)additionalScrollingViews;
-(void)setHeaderIsScrolledAway:(char)arg1 ;
-(NSArray *)transformNavViews;
-(float)maximumHeaderOffset;
-(void)setHeaderIsScrolling:(char)arg1 ;
-(void)setScrollView:(id)arg1 additionalScrollingViews:(id)arg2 ;
-(void)setDelegate:(id<IGScrollingHeaderItemDelegate>)arg1 ;
-(id)description;
-(id<IGScrollingHeaderItemDelegate>)delegate;
-(UIScrollView *)scrollView;
-(UIViewController *)viewController;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
@end

