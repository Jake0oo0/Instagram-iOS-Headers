/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IGRealtimeInfoCollector : NSObject {

	NSMutableArray* _info;

}

@property (nonatomic,readonly) NSMutableArray * info;              //@synthesize info=_info - In the implementation block
+(id)sharedInstance;
-(id)collectedInfo;
-(void)clearCollectedInfo;
-(id)init;
-(NSMutableArray *)info;
-(void)addInfo:(id)arg1 ;
@end

