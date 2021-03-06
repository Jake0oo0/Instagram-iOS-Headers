

#import <Instagram/Instagram-Structs.h>
@interface AFNetworkReachabilityManager : NSObject {

	int _networkReachabilityStatus;
	SCNetworkReachabilityRef _networkReachability;
	/*^block*/id _networkReachabilityStatusBlock;

}

@property (assign,nonatomic) SCNetworkReachabilityRef networkReachability;                   //@synthesize networkReachability=_networkReachability - In the implementation block
@property (assign,nonatomic) int networkReachabilityStatus;                                  //@synthesize networkReachabilityStatus=_networkReachabilityStatus - In the implementation block
@property (nonatomic,copy) id networkReachabilityStatusBlock;                                //@synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock - In the implementation block
@property (getter=isReachable,nonatomic,readonly) char reachable; 
@property (getter=isReachableViaWWAN,nonatomic,readonly) char reachableViaWWAN; 
@property (getter=isReachableViaWiFi,nonatomic,readonly) char reachableViaWiFi; 
+(id)managerForDomain:(id)arg1 ;
+(id)managerForAddress:(const sockaddr_in*)arg1 ;
+(id)sharedManager;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(char)isReachableViaWiFi;
-(char)isReachableViaWWAN;
-(int)networkReachabilityStatus;
-(void)setNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
-(void)setNetworkReachabilityStatus:(int)arg1 ;
-(SCNetworkReachabilityRef)networkReachability;
-(id)networkReachabilityStatusBlock;
-(void)setNetworkReachabilityStatusBlock:(id)arg1 ;
-(id)localizedNetworkReachabilityStatusString;
-(void)setReachabilityStatusChangeBlock:(/*^block*/id)arg1 ;
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(char)isReachable;
-(id)initWithReachability:(SCNetworkReachabilityRef)arg1 ;
@end

