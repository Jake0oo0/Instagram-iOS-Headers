/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGServiceHelperLoginProtocol <NSObject>
@required
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(id)loginFooterMessage;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2;
-(char)loginPending;
-(void)doAuthWithUsername:(id)arg1 password:(id)arg2;
-(id)loginViewControllerWithDelegate:(id)arg1;
-(void)setLoginPending:(char)arg1;

@end

