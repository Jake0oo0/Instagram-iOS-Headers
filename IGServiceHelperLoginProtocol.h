/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGServiceHelperLoginProtocol <NSObject>
@required
-(id)loginFooterMessage;
-(char)loginPending;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2;
-(id)loginViewController;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
-(void)setLoginPending:(char)arg1;

@end

