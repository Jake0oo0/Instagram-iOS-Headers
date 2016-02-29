/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBSDKGraphErrorRecoveryProcessorDelegate;
@class FBSDKErrorRecoveryAttempter, NSError, UIAlertView, NSString;

@interface FBSDKGraphErrorRecoveryProcessor : NSObject <UIAlertViewDelegate> {

	FBSDKErrorRecoveryAttempter* _recoveryAttempter;
	NSError* _error;
	UIAlertView* _alertView;
	id<FBSDKGraphErrorRecoveryProcessorDelegate> _delegate;

}

@property (nonatomic,retain) id<FBSDKGraphErrorRecoveryProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(char)processError:(id)arg1 request:(id)arg2 delegate:(id)arg3 ;
-(void)setDelegate:(id<FBSDKGraphErrorRecoveryProcessorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKGraphErrorRecoveryProcessorDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

