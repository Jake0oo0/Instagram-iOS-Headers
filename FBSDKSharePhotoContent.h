
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKSharingContent.h>

@class NSURL, NSArray, NSString;

@interface FBSDKSharePhotoContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * photos;                        //@synthesize photos=_photos - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                      //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                     //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                      //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                          //@synthesize ref=_ref - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)peopleIDs;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(char)isEqualToSharePhotoContent:(id)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
@end

