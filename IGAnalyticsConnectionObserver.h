

@protocol IGAnalyticsConnectionObserverDelegate;
@class CTTelephonyNetworkInfo, NSString;

@interface IGAnalyticsConnectionObserver : NSObject {

	id<IGAnalyticsConnectionObserverDelegate> _delegate;
	CTTelephonyNetworkInfo* _telephonyNetworkInfo;
	NSString* _reachability;
	NSString* _radioTechnology;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsConnectionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CTTelephonyNetworkInfo * telephonyNetworkInfo;                          //@synthesize telephonyNetworkInfo=_telephonyNetworkInfo - In the implementation block
@property (nonatomic,copy) NSString * reachability;                                                  //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,copy) NSString * radioTechnology;                                               //@synthesize radioTechnology=_radioTechnology - In the implementation block
+(id)mapReachabilityStatus:(int)arg1 ;
-(void)observeConnectionChange;
-(CTTelephonyNetworkInfo *)telephonyNetworkInfo;
-(void)observeRadioTechnology;
-(void)observeReachability;
-(char)isRadioAccessTechnologySupported;
-(void)handleRadioTechnologyChanged:(id)arg1 ;
-(void)handleReachabilityChanged:(id)arg1 ;
-(void)setTelephonyNetworkInfo:(CTTelephonyNetworkInfo *)arg1 ;
-(void)setDelegate:(id<IGAnalyticsConnectionObserverDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAnalyticsConnectionObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)reachability;
-(void)setReachability:(NSString *)arg1 ;
-(NSString *)radioTechnology;
-(void)setRadioTechnology:(NSString *)arg1 ;
@end

