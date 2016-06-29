
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString, FBSDKSharePhoto, FBSDKShareVideo;

@interface FBSDKShareVideoContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	FBSDKSharePhoto* _previewPhoto;
	FBSDKShareVideo* _video;

}

@property (nonatomic,copy) FBSDKSharePhoto * previewPhoto;              //@synthesize previewPhoto=_previewPhoto - In the implementation block
@property (nonatomic,copy) FBSDKShareVideo * video;                     //@synthesize video=_video - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                          //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                         //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                          //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                              //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)peopleIDs;
-(FBSDKSharePhoto *)previewPhoto;
-(char)isEqualToShareVideoContent:(id)arg1 ;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(void)setPreviewPhoto:(FBSDKSharePhoto *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(FBSDKShareVideo *)video;
-(void)setVideo:(FBSDKShareVideo *)arg1 ;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

