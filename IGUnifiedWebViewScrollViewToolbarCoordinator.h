/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, IGUnifiedWebViewToolbar, NSString;

@interface IGUnifiedWebViewScrollViewToolbarCoordinator : NSObject <UIScrollViewDelegate> {

	char _navigationToolbarIsTransitioning;
	char _navigationToolbarIsPresented;
	UIScrollView* _scrollView;
	IGUnifiedWebViewToolbar* _navigationToolbar;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,__weak,readonly) IGUnifiedWebViewToolbar * navigationToolbar;              //@synthesize navigationToolbar=_navigationToolbar - In the implementation block
@property (assign,nonatomic) char navigationToolbarIsTransitioning;                             //@synthesize navigationToolbarIsTransitioning=_navigationToolbarIsTransitioning - In the implementation block
@property (assign,nonatomic) char navigationToolbarIsPresented;                                 //@synthesize navigationToolbarIsPresented=_navigationToolbarIsPresented - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScrollView:(id)arg1 navigationToolbar:(id)arg2 ;
-(void)presentToolbar;
-(void)scrollViewPanGestureRecognized:(id)arg1 ;
-(char)navigationToolbarIsPresented;
-(char)navigationToolbarIsTransitioning;
-(void)setNavigationToolbarIsTransitioning:(char)arg1 ;
-(IGUnifiedWebViewToolbar *)navigationToolbar;
-(void)setNavigationToolbarIsPresented:(char)arg1 ;
-(void)panGestureRecognizerEnded:(id)arg1 ;
-(void)hideToolbar;
-(UIScrollView *)scrollView;
@end

