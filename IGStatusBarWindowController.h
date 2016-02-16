/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStatusBarWindowDelegate.h>

@protocol IGStatusBarWindowControllerDelegate;
@class IGStatusBarWindow, NSObject, NSString;

@interface IGStatusBarWindowController : NSObject <IGStatusBarWindowDelegate> {

	IGStatusBarWindow* _statusBarWindow;
	NSObject*<IGStatusBarWindowControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGStatusBarWindow * statusBarWindow;                                         //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)backToFacebookStatusBarVisible;
+(CGRect)statusBarViewFrameForStatusHidden:(char)arg1 ;
-(void)statusBarWindowDidReceiveUserTap:(id)arg1 ;
-(void)onAppDidEnterBackground:(id)arg1 ;
-(void)onWillPresentMediaFromFacebookApp:(id)arg1 ;
-(void)onTabChanged:(id)arg1 ;
-(void)onNavigationViewDidAppear:(id)arg1 ;
-(void)onCameraButtonTapped:(id)arg1 ;
-(void)showStatusBarView:(char)arg1 animated:(char)arg2 ;
-(void)setDelegate:(NSObject*<IGStatusBarWindowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGStatusBarWindowControllerDelegate>)delegate;
-(IGStatusBarWindow *)statusBarWindow;
-(void)setStatusBarWindow:(IGStatusBarWindow *)arg1 ;
@end

