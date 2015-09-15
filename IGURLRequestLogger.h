/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSObject;

@interface IGURLRequestLogger : NSObject {

	unordered_map<unsigned int, IGURLRequestStartTimes, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, IGURLRequestStartTimes> > >* _operationStartMap;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	char _enabled;

}

@property (assign,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)sharedLogger;
-(char)canTrackOperation:(id)arg1 ;
-(void)logFinishedOperation:(id)arg1 startTimes:(IGURLRequestStartTimes)arg2 ;
-(void)requestOperationDidStart:(id)arg1 ;
-(void)requestOperationDidFinishNetwork:(id)arg1 ;
-(void)requestOperationDidComplete:(id)arg1 ;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(char)enabled;
@end

