

@protocol OS_dispatch_queue;
#import <Instagram/Instagram-Structs.h>
@class NSObject, IGStabilizationHandle, NSData;

@interface IGTrackStabilizer : NSObject {

	int _iterations;
	NSObject*<OS_dispatch_queue> _stabilizationQueue;
	float _maxZoom;
	vector<IGOrientationSample, std::__1::allocator<IGOrientationSample> >* _cameraOrientations;
	vector<boost::qvm::quat<double>, std::__1::allocator<boost::qvm::quat<double> > >* _stabilizedFrameOrientations;
	char _motionTrailsVisible;
	char _isOnTripod;
	IGStabilizationHandle* _stabilizationHandle;
	char _canStabilize;
	int _cameraPosition;
	NSData* _frameData;
	NSData* _gyroData;
	int _frameskipFactor;
	double _stabilizationZoom;
	SCD_Struct_IG67 _calibrationParameters;

}

@property (nonatomic,readonly) int cameraPosition;                                 //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IG67 calibrationParameters;              //@synthesize calibrationParameters=_calibrationParameters - In the implementation block
@property (nonatomic,readonly) char canStabilize;                                  //@synthesize canStabilize=_canStabilize - In the implementation block
@property (nonatomic,readonly) double stabilizationZoom;                           //@synthesize stabilizationZoom=_stabilizationZoom - In the implementation block
@property (nonatomic,readonly) NSData * frameData;                                 //@synthesize frameData=_frameData - In the implementation block
@property (nonatomic,readonly) NSData * gyroData;                                  //@synthesize gyroData=_gyroData - In the implementation block
@property (nonatomic,readonly) char motionTrailsVisible; 
@property (assign,nonatomic) int frameskipFactor;                                  //@synthesize frameskipFactor=_frameskipFactor - In the implementation block
+(SCD_Struct_IG67)calibrationParameters:(int)arg1 ;
+(id)identityWarp;
+(id)platform;
-(char)canStabilize;
-(char)motionTrailsVisible;
-(id)initWithCameraPosition:(int)arg1 gyroTrack:(id)arg2 frameTrack:(id)arg3 ;
-(SCD_Struct_IG67)calibrationParameters;
-(unsigned long)frameIndexForPresentationTime:(SCD_Struct_IG44)arg1 ;
-(id)warpForFrameIndex:(unsigned long)arg1 ;
-(double)stabilizationZoom;
-(id)initWithCameraPosition:(int)arg1 calibrationParameters:(SCD_Struct_IG67)arg2 gyroTrack:(id)arg3 frameTrack:(id)arg4 frameSkipFactor:(int)arg5 maxZoom:(float)arg6 iterations:(int)arg7 ;
-(void)stabilize;
-(NSData *)frameData;
-(const IGFrameSample*)frameSampleData;
-(void)waitForStabilizationToFinish;
-(void)setFrameskipFactor:(int)arg1 ;
-(int)frameskipFactor;
-(NSData *)gyroData;
-(id)init;
-(int)frameCount;
-(int)cameraPosition;
@end

