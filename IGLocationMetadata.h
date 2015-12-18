
#import <Instagram/IGMediaMetadataProtocol.h>

@class IGLocation, NSString, IGNearbyLocationDataSource, CLLocation, NSDictionary;

@interface IGLocationMetadata : NSObject <IGMediaMetadataProtocol> {

	char _locationEnabled;
	IGLocation* _venue;
	NSString* _foursquareRequestID;
	IGNearbyLocationDataSource* _locationDataSource;
	CLLocation* _mediaLocation;
	CLLocation* _exifLocation;
	CLLocation* _avLocation;
	NSDictionary* _exifGPSDict;
	NSString* _rawVideoLocationString;

}

@property (assign,nonatomic) char locationEnabled;                                         //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,retain) IGLocation * venue;                                           //@synthesize venue=_venue - In the implementation block
@property (nonatomic,retain) NSString * foursquareRequestID;                               //@synthesize foursquareRequestID=_foursquareRequestID - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;              //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) CLLocation * coordinates; 
@property (nonatomic,retain) CLLocation * mediaLocation;                                   //@synthesize mediaLocation=_mediaLocation - In the implementation block
@property (nonatomic,retain) CLLocation * exifLocation;                                    //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,retain) CLLocation * avLocation;                                      //@synthesize avLocation=_avLocation - In the implementation block
@property (nonatomic,retain) NSDictionary * exifGPSDict;                                   //@synthesize exifGPSDict=_exifGPSDict - In the implementation block
@property (nonatomic,retain) NSString * rawVideoLocationString;                            //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(void)setMediaLocation:(CLLocation *)arg1 ;
-(void)setExifLocation:(CLLocation *)arg1 ;
-(void)setAvLocation:(CLLocation *)arg1 ;
-(CLLocation *)mediaLocation;
-(char)locationEnabled;
-(NSString *)rawVideoLocationString;
-(CLLocation *)avLocation;
-(CLLocation *)exifLocation;
-(IGLocation *)venue;
-(NSString *)foursquareRequestID;
-(id)initWithExifLocation:(id)arg1 exifGPSDict:(id)arg2 rawVideoLocationString:(id)arg3 ;
-(void)setVenue:(IGLocation *)arg1 ;
-(void)setFoursquareRequestID:(NSString *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(NSDictionary *)exifGPSDict;
-(void)setExifGPSDict:(NSDictionary *)arg1 ;
-(void)setRawVideoLocationString:(NSString *)arg1 ;
-(CLLocation *)coordinates;
-(void)setLocationEnabled:(char)arg1 ;
@end

