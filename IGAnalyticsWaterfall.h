/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:18 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGAnalyticsWaterfall : NSObject <NSCoding> {

	NSString* _currentSessionID;
	NSString* _entryPoint;
	NSString* _experimentGroupName;
	int _numberOfStepsBackward;
	int _numberOfStepsForward;
	double _startTimestamp;

}

@property (nonatomic,copy) NSString * currentSessionID;                 //@synthesize currentSessionID=_currentSessionID - In the implementation block
@property (nonatomic,copy) NSString * entryPoint;                       //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy) NSString * experimentGroupName;              //@synthesize experimentGroupName=_experimentGroupName - In the implementation block
@property (assign,nonatomic) double startTimestamp;                     //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) int numberOfStepsBackward;                 //@synthesize numberOfStepsBackward=_numberOfStepsBackward - In the implementation block
@property (assign,nonatomic) int numberOfStepsForward;                  //@synthesize numberOfStepsForward=_numberOfStepsForward - In the implementation block
-(void)setEntryPoint:(NSString *)arg1 ;
-(void)setExperimentGroupName:(NSString *)arg1 ;
-(void)setNumberOfStepsForward:(int)arg1 ;
-(void)setNumberOfStepsBackward:(int)arg1 ;
-(void)setCurrentSessionID:(NSString *)arg1 ;
-(id)logStepWithName:(id)arg1 stepDirection:(int)arg2 ;
-(int)numberOfStepsForward;
-(int)numberOfStepsBackward;
-(NSString *)currentSessionID;
-(NSString *)experimentGroupName;
-(id)initWithEntryPoint:(int)arg1 experimentGroupName:(id)arg2 ;
-(id)logStepForwardWithName:(id)arg1 ;
-(id)logStepBackwardWithName:(id)arg1 ;
-(double)secondsSinceStart;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logEvent:(id)arg1 ;
-(id)eventName;
-(NSString *)entryPoint;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
@end

