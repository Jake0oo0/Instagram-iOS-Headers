/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:42 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGXAuthServiceHelper.h>

@class IGSwitch;

@interface IGTumblrHelper : IGXAuthServiceHelper {

	IGSwitch* _followSwitch;

}
+(id)sharedTumblrHelper;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)isConfigurable;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(id)shortServiceName;
-(id)viewControllerForAdvancedOptions;
-(void)onTumblrLoginCompleted:(id)arg1 ;
-(id)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followInstagram;
-(int)usernameType;
-(id)consumerSecret;
-(id)consumerKey;
-(void)dealloc;
-(id)init;
-(id)URLString;
-(id)serviceName;
@end

