/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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
-(float)mostRecentAverageTransferRate;
-(id)mostRecentTransferRateString;
-(int)mostRecentTransferRate;
-(void)addTransferData:(unsigned)arg1 ;
-(id)transferRateStatusChangeBlock;
-(void)addTransferRate:(float)arg1 ;
-(void)notifyForNetworkStatChange;
-(void)sample:(id)arg1 ;
-(void)startSampling;
-(void)setTransferRateStatusChangeBlock:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)averageTransferRate;
-(void)stopSampling;
@end

