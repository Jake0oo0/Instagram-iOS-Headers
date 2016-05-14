/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGLocationDataSource.h>

@class CLLocation, NSDate;

@interface IGNearbyLocationDataSource : IGLocationDataSource {

	char _preventEagerFetch;
	CLLocation* _EXIFPhotoLocation;
	CLLocation* _currentUserLocation;
	NSDate* _mediaCreationTime;

}

@property (nonatomic,retain) CLLocation * EXIFPhotoLocation;                //@synthesize EXIFPhotoLocation=_EXIFPhotoLocation - In the implementation block
@property (nonatomic,retain) CLLocation * currentUserLocation;              //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,retain) NSDate * mediaCreationTime;                    //@synthesize mediaCreationTime=_mediaCreationTime - In the implementation block
@property (assign,nonatomic) char preventEagerFetch;                        //@synthesize preventEagerFetch=_preventEagerFetch - In the implementation block
-(void)setEXIFPhotoLocation:(CLLocation *)arg1 ;
-(void)setMediaCreationTime:(NSDate *)arg1 ;
-(void)fetchLocationsOrLocateUser;
-(void)setPreventEagerFetch:(char)arg1 ;
-(void)onLocationUpdated:(id)arg1 ;
-(void)onLocationFailed:(id)arg1 ;
-(NSDate *)mediaCreationTime;
-(CLLocation *)EXIFPhotoLocation;
-(char)preventEagerFetch;
-(void)onLocationDenied:(id)arg1 ;
-(id)activeLocationFromEXIF:(char*)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)initWithDelegate:(id)arg1 ;
-(CLLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(CLLocation *)arg1 ;
@end

