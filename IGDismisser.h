/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/MFMailComposeViewControllerDelegate.h>
#import <Instagram/IGUserInTaggingViewControllerDelegate.h>
#import <Instagram/IGEditPostViewControllerDelegate.h>

@class UIViewController, NSString;

@interface IGDismisser : NSObject <MFMailComposeViewControllerDelegate, IGUserInTaggingViewControllerDelegate, IGEditPostViewControllerDelegate> {

	UIViewController* _presentingController;
	IGDismisser* _strong;

}

@property (nonatomic,retain) UIViewController * presentingController;              //@synthesize presentingController=_presentingController - In the implementation block
@property (nonatomic,retain) IGDismisser * strong;                                 //@synthesize strong=_strong - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)editPostViewController:(id)arg1 didFinishWithPost:(id)arg2 ;
-(void)userInTaggingViewController:(id)arg1 didFinish:(char)arg2 ;
-(void)setStrong:(IGDismisser *)arg1 ;
-(UIViewController *)presentingController;
-(void)setPresentingController:(UIViewController *)arg1 ;
-(id)init;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(IGDismisser *)strong;
@end

