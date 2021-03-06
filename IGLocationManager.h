
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSTimer, NSDate, NSString;

@interface IGLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLLocation* _lastGoodLocation;
	CLLocation* _lastLocation;
	NSTimer* _locationTimer;
	NSDate* _appOpenDate;
	char _isLocating;

}

@property (nonatomic,readonly) CLLocation * currentLocation; 
@property (nonatomic,readonly) char isLocating;                           //@synthesize isLocating=_isLocating - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isLocationUseAuthorized;
+(id)sharedLocationManager;
+(int)authorizationStatus;
-(void)requestAuthorization;
-(char)isLocating;
-(void)startUpdatingLocationWithTimeout:(double)arg1 ;
-(char)isCachedLocation:(id)arg1 ;
-(id)recentLocation;
-(char)isRecentLocation:(id)arg1 ;
-(void)timeoutLocationUpdate;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(CLLocation *)currentLocation;
-(id)cachedLocation;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

