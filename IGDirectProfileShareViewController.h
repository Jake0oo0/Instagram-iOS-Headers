/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:36 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectShareViewController.h>

@class IGUser;

@interface IGDirectProfileShareViewController : IGDirectShareViewController {

	IGUser* _sharedUser;

}

@property (nonatomic,retain) IGUser * sharedUser;              //@synthesize sharedUser=_sharedUser - In the implementation block
-(IGUser *)sharedUser;
-(void)setSharedUser:(IGUser *)arg1 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

