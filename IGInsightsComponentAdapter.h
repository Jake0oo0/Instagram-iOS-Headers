/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGInsightsComponentAdapter <NSObject>
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
@required
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3;
-(char)isComponentValid;
-(id)componentView;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id)arg1;

@end

