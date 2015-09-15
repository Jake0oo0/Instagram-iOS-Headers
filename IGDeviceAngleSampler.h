/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:33 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMMotionManager, NSOperationQueue;

@interface IGDeviceAngleSampler : NSObject {

	float _currentDeviceAngle;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;

}

@property (assign,nonatomic) float currentDeviceAngle;                     //@synthesize currentDeviceAngle=_currentDeviceAngle - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
-(void)startMeasuring;
-(void)stopMeasuring;
-(float)currentDeviceAngle;
-(void)setCurrentDeviceAngle:(float)arg1 ;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)motionQueue;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end

