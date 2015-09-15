/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:42 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGServiceHelperProtocol <NSObject>
@optional
-(id)currentUsername;
-(id)currentDetailText;
-(char)canToggle;
-(char)mayExcludeFromAbbreviatedList;
-(char)hasEverBeenConfigured;
-(void)restoreSessionForPk:(id)arg1;

@required
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(char)isConfigured;
-(id)serviceName;
-(void)logout;

@end

