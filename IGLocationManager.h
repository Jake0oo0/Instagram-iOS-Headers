/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSTimer, NSDate, NSString;

@interface IGLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	CLLocation* _lastGoodLocation;
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
-(void)startUpdatingLocationWithTimeout:(double)arg1 ;
-(char)isCachedLocation:(id)arg1 ;
-(void)timeoutLocationUpdate;
-(char)isRecentLocation:(id)arg1 ;
-(id)recentLocation;
-(void)requestAuthorization;
-(char)isLocating;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(CLLocation *)currentLocation;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

