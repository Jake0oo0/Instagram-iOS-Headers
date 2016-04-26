/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol RCTEvent <NSObject>
@property (nonatomic,readonly) NSNumber * viewTag; 
@property (nonatomic,copy,readonly) NSString * eventName; 
@property (nonatomic,readonly) unsigned short coalescingKey; 
@required
+(id)moduleDotMethod;
-(id)coalesceWithEvent:(id)arg1;
-(NSNumber *)viewTag;
-(unsigned short)coalescingKey;
-(char)canCoalesce;
-(NSString *)eventName;
-(id)arguments;

@end

