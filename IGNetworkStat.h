/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:33 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer;

@interface IGNetworkStat : NSObject {

	NSMutableArray* _rates;
	unsigned _insertionIndex;
	double _lastCaptureTime;
	unsigned _captureBytes;
	unsigned _previousCaptureBytes;
	float _currentAverage;
	double _averagedSum;
	int _samples;
	NSTimer* _sampler;
	int _currentRate;
	/*^block*/id _transferRateStatusChangeBlock;

}

@property (nonatomic,copy) id transferRateStatusChangeBlock;              //@synthesize transferRateStatusChangeBlock=_transferRateStatusChangeBlock - In the implementation block
+(id)sharedStat;
-(int)mostRecentTransferRate;
-(id)transferRateStatusChangeBlock;
-(void)addTransferRate:(float)arg1 ;
-(void)notifyForNetworkStatChange;
-(void)sample:(id)arg1 ;
-(void)startSampling;
-(float)mostRecentAverageTransferRate;
-(void)addTransferData:(unsigned)arg1 ;
-(void)setTransferRateStatusChangeBlock:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)averageTransferRate;
-(void)stopSampling;
@end

