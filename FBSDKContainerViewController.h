/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;
@interface FBSDKContainerViewController : UIViewController {

	id<FBSDKContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)displayChildController:(id)arg1 ;
-(void)setDelegate:(id<FBSDKContainerViewControllerDelegate>)arg1 ;
-(id<FBSDKContainerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(char)arg1 ;
@end

