/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUnifiedWebViewControllerWebViewLoggingDelegate.h>

@class NSArray;

@interface IGComposedWebViewLogger : NSObject <IGUnifiedWebViewControllerWebViewLoggingDelegate> {

	NSArray* _loggers;

}

@property (nonatomic,readonly) NSArray * loggers;              //@synthesize loggers=_loggers - In the implementation block
-(NSArray *)loggers;
-(void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidGoBack:(id)arg1 ;
-(void)webViewDidGoForward:(id)arg1 ;
-(id)init;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

