

@class ALAsset, NSDictionary, PHAsset, NSURL, NSString, NSNumber, UIImage, NSDate;

@interface IGLibraryAsset : NSObject {

	ALAsset* _alAsset;
	unsigned _alRequestID;
	int _phRequestID;
	NSDictionary* _metadata;
	PHAsset* _phAsset;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * alAssetIdentifier; 
@property (nonatomic,readonly) NSString * phAssetIdentifier; 
@property (nonatomic,readonly) NSNumber * duration; 
@property (getter=isHighFrameRate,nonatomic,readonly) char highFrameRate; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,retain) NSDictionary * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) UIImage * fullScreenImage; 
@property (nonatomic,retain) PHAsset * phAsset;                                        //@synthesize phAsset=_phAsset - In the implementation block
-(char)isHighFrameRate;
-(id)initWithALAsset:(id)arg1 ;
-(void)cancelAssetRequest;
-(PHAsset *)phAsset;
-(void)requestPhotoAssetWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 ;
-(void)requestVideoAssetWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 ;
-(unsigned)generateALRequestID;
-(NSString *)alAssetIdentifier;
-(NSString *)phAssetIdentifier;
-(void)requestAssetWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 progress:(/*^block*/id)arg3 ;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(NSNumber *)duration;
-(NSURL *)url;
-(int)type;
-(UIImage *)thumbnail;
-(UIImage *)fullScreenImage;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithPHAsset:(id)arg1 ;
@end

