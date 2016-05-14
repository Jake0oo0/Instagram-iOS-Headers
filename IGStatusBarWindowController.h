/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStatusBarWindowDelegate.h>

@protocol IGStatusBarWindowControllerDelegate;
@class NSObject, IGStatusBarWindow, NSString;

@interface IGStatusBarWindowController : NSObject <IGStatusBarWindowDelegate> {

	NSObject*<IGStatusBarWindowControllerDelegate> _delegate;
	IGStatusBarWindow* _statusBarWindow;

}

@property (nonatomic,retain) IGStatusBarWindow * statusBarWindow;                                         //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)statusBarViewFrameForStatusHidden:(char)arg1 ;
+(char)backToFacebookStatusBarVisible;
-(void)onAppDidEnterBackground:(id)arg1 ;
-(void)onWillPresentMediaFromFacebookApp:(id)arg1 ;
-(void)onTabChanged:(id)arg1 ;
-(void)onNavigationViewDidAppear:(id)arg1 ;
-(void)onCameraButtonTapped:(id)arg1 ;
-(void)showStatusBarView:(char)arg1 animated:(char)arg2 ;
-(void)statusBarWindowDidReceiveUserTap:(id)arg1 ;
-(void)setDelegate:(NSObject*<IGStatusBarWindowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGStatusBarWindowControllerDelegate>)delegate;
-(IGStatusBarWindow *)statusBarWindow;
-(void)setStatusBarWindow:(IGStatusBarWindow *)arg1 ;
@end

