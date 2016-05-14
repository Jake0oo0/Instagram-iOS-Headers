/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IGLocation, NSString, IGNearbyLocationDataSource, CLLocation, NSDictionary;

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol, NSCoding> {

	char _locationSharingEnabled;
	IGLocation* _venue;
	NSString* _venueRequestID;
	IGNearbyLocationDataSource* _locationDataSource;
	CLLocation* _exifLocation;
	CLLocation* _avLocation;
	NSDictionary* _exifGPSDict;
	NSString* _rawVideoLocationString;

}

@property (nonatomic,readonly) CLLocation * exifLocation;                                  //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * avLocation;                                    //@synthesize avLocation=_avLocation - In the implementation block
@property (nonatomic,readonly) NSDictionary * exifGPSDict;                                 //@synthesize exifGPSDict=_exifGPSDict - In the implementation block
@property (nonatomic,readonly) NSString * rawVideoLocationString;                          //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (assign,nonatomic) char locationSharingEnabled;                                  //@synthesize locationSharingEnabled=_locationSharingEnabled - In the implementation block
@property (nonatomic,retain) IGLocation * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,copy) NSString * venueRequestID;                                      //@synthesize venueRequestID=_venueRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;              //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) CLLocation * coordinates; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocation *)exifLocation;
-(CLLocation *)avLocation;
-(char)locationSharingEnabled;
-(NSString *)rawVideoLocationString;
-(NSDictionary *)exifGPSDict;
-(NSString *)venueRequestID;
-(IGLocation *)venue;
-(void)prepareToShare;
-(id)sharingInfo;
-(id)initWithExifLocation:(id)arg1 exifGPSDict:(id)arg2 rawVideoLocationString:(id)arg3 ;
-(void)setLocationSharingEnabled:(char)arg1 ;
-(void)setVenue:(IGLocation *)arg1 ;
-(void)setVenueRequestID:(NSString *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLLocation *)coordinates;
@end

