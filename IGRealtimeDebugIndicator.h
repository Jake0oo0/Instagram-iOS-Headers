/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface IGRealtimeDebugIndicator : UIView {

	unsigned _clientStatus;
	unsigned _subscriptionStatus;

}

@property (assign,nonatomic) unsigned clientStatus;                    //@synthesize clientStatus=_clientStatus - In the implementation block
@property (assign,nonatomic) unsigned subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
+(id)sharedDebugIndicator;
-(void)setClientStatus:(unsigned)arg1 ;
-(void)setSubscriptionStatus:(unsigned)arg1 ;
-(void)updateColor;
-(void)updateClientStatus:(id)arg1 ;
-(void)updateSubscriptionStatus:(id)arg1 ;
-(unsigned)clientStatus;
-(unsigned)subscriptionStatus;
-(void)dealloc;
-(id)init;
@end

