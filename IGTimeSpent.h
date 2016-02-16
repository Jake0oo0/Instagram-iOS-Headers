/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGEventAggregator.h>
#import <Instagram/FBAnalyticsTimeSpentDelegate.h>

@class FBAnalyticsTimeSpent, NSString;

@interface IGTimeSpent : IGEventAggregator <FBAnalyticsTimeSpentDelegate> {

	FBAnalyticsTimeSpent* _timeSpent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2 ;
-(void)save;
-(void)reset;
-(void)update:(double)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
@end

