/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:38 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBWebViewAnalytics, FBWebViewAlertHandler;
#import <Instagram/Instagram-Structs.h>
@interface FBWebViewProvider : NSObject {

	id<FBWebViewAnalytics> _analytics;
	id<FBWebViewAlertHandler> _alertHandler;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;              //@synthesize alertHandler=_alertHandler - In the implementation block
-(id)webViewWithFrame:(CGRect)arg1 usagePolicy:(int)arg2 processPoolContainer:(id)arg3 implementation:(int)arg4 ;
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 usagePolicy:(int)arg2 processPoolContainer:(id)arg3 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end

