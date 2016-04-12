/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGRealtimeSubscriptionDelegate.h>

@protocol IGRealtimeOperationDelegate;
@class NSString, IGTokenBucket;

@interface IGRealtimeManager : NSObject <IGRealtimeSubscriptionDelegate> {

	id<IGRealtimeOperationDelegate> _delegate;
	unsigned _rateLimitPatchesPerSec;
	unsigned _rateLimitBuffer;
	NSString* _topic;
	IGTokenBucket* _rateLimiter;

}

@property (assign,nonatomic,__weak) id<IGRealtimeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned subscriptionStatus; 
@property (assign,nonatomic) unsigned rateLimitPatchesPerSec;                              //@synthesize rateLimitPatchesPerSec=_rateLimitPatchesPerSec - In the implementation block
@property (assign,nonatomic) unsigned rateLimitBuffer;                                     //@synthesize rateLimitBuffer=_rateLimitBuffer - In the implementation block
@property (nonatomic,retain) NSString * topic;                                             //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) IGTokenBucket * rateLimiter;                                  //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyPatches:(id)arg1 withRange:(id)arg2 ;
-(void)setRateLimitPatchesPerSec:(unsigned)arg1 ;
-(void)setRateLimitBuffer:(unsigned)arg1 ;
-(unsigned)rateLimitPatchesPerSec;
-(unsigned)rateLimitBuffer;
-(void)subscription:(id)arg1 didReceivePatchEvent:(id)arg2 ;
-(void)subscriptionRequiresRefresh:(id)arg1 ;
-(void)subscription:(id)arg1 statusDidChange:(unsigned)arg2 ;
-(unsigned)subscriptionStatus;
-(void)setDelegate:(id<IGRealtimeOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRealtimeOperationDelegate>)delegate;
-(IGTokenBucket *)rateLimiter;
-(void)setRateLimiter:(IGTokenBucket *)arg1 ;
-(void)subscribeOn:(id)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)unsubscribe;
@end

