/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface FBRequestConnectionRetryManagerAlertViewHelper : NSObject <UIAlertViewDelegate> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

