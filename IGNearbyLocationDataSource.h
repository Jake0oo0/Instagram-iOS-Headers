/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
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
-(void)onLocationUpdated:(id)arg1 ;
-(void)onLocationDenied:(id)arg1 ;
-(void)setEXIFPhotoLocation:(CLLocation *)arg1 ;
-(void)setMediaCreationTime:(NSDate *)arg1 ;
-(void)fetchLocationsOrLocateUser;
-(void)setPreventEagerFetch:(char)arg1 ;
-(void)onLocationFailed:(id)arg1 ;
-(NSDate *)mediaCreationTime;
-(id)activeLocationFromEXIF:(char*)arg1 ;
-(CLLocation *)EXIFPhotoLocation;
-(char)preventEagerFetch;
-(void)dealloc;
-(void)reloadData;
-(id)initWithDelegate:(id)arg1 ;
-(CLLocation *)currentUserLocation;
-(void)setCurrentUserLocation:(CLLocation *)arg1 ;
@end

