

@class NSMutableArray, NSString, FBFunnelConfig, NSArray;

@interface FBFunnel : NSObject {

	NSMutableArray* _currentTags;
	NSMutableArray* _currentActions;
	NSString* _funnelName;
	FBFunnelConfig* _funnelConfig;
	unsigned _samplingFreq;
	double _startTime;
	double _lastActiveTime;

}

@property (nonatomic,copy,readonly) NSString * funnelName;               //@synthesize funnelName=_funnelName - In the implementation block
@property (nonatomic,retain) FBFunnelConfig * funnelConfig;              //@synthesize funnelConfig=_funnelConfig - In the implementation block
@property (nonatomic,readonly) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double lastActiveTime;                    //@synthesize lastActiveTime=_lastActiveTime - In the implementation block
@property (assign,nonatomic) unsigned samplingFreq;                      //@synthesize samplingFreq=_samplingFreq - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tags; 
@property (nonatomic,copy,readonly) NSArray * actions; 
-(id)initWithFunnelName:(id)arg1 funnelConfig:(id)arg2 startTime:(double)arg3 lastActiveTime:(double)arg4 samplingFreqency:(unsigned)arg5 tags:(id)arg6 actions:(id)arg7 ;
-(id)initWithFunnelName:(id)arg1 ;
-(id)pseudoCopy;
-(NSString *)funnelName;
-(FBFunnelConfig *)funnelConfig;
-(void)setFunnelConfig:(FBFunnelConfig *)arg1 ;
-(double)lastActiveTime;
-(unsigned)samplingFreq;
-(void)setSamplingFreq:(unsigned)arg1 ;
-(NSArray *)actions;
-(void)start;
-(NSArray *)tags;
-(void)addAction:(id)arg1 ;
-(double)startTime;
-(void)addTag:(id)arg1 ;
@end

