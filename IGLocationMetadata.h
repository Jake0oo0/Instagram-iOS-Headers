/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGMediaMetadataProtocol.h>

@class IGLocation, NSString, IGNearbyLocationDataSource, CLLocation;

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol> {

	char _locationEnabled;
	IGLocation* _venue;
	NSString* _foursquareRequestID;
	IGNearbyLocationDataSource* _locationDataSource;
	CLLocation* _mediaLocation;

}

@property (assign,nonatomic) char locationEnabled;                                         //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,retain) IGLocation * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,retain) NSString * foursquareRequestID;                               //@synthesize foursquareRequestID=_foursquareRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;              //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) CLLocation * coordinates; 
@property (nonatomic,retain) CLLocation * mediaLocation;                                   //@synthesize mediaLocation=_mediaLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)locationEnabled;
-(void)prepareToShare;
-(id)sharingInfo;
-(void)setMediaLocation:(CLLocation *)arg1 ;
-(CLLocation *)mediaLocation;
-(IGLocation *)venue;
-(NSString *)foursquareRequestID;
-(id)initWithMediaLocation:(id)arg1 ;
-(void)setVenue:(IGLocation *)arg1 ;
-(void)setFoursquareRequestID:(NSString *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(CLLocation *)coordinates;
-(void)setLocationEnabled:(char)arg1 ;
@end

