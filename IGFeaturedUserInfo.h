
#import <Instagram/IGDKDiffable.h>

@class IGUser, NSString, NSArray;

@interface IGFeaturedUserInfo : NSObject <IGDKDiffable> {

	IGUser* _user;
	NSString* _userDescription;
	NSString* _algorithm;
	NSString* _socialContext;
	NSString* _icon;
	NSArray* _mediaIDs;
	NSArray* _mediaBundles;
	int _socialContextType;
	NSArray* _thumbnailURLs;

}

@property (nonatomic,readonly) IGUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * userDescription;              //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,readonly) NSString * algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) NSString * socialContext;                //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,readonly) NSString * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSArray * mediaIDs;                      //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,readonly) NSArray * mediaBundles;                  //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,readonly) int socialContextType;                   //@synthesize socialContextType=_socialContextType - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailURLs;                     //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
-(id)diffIdentifier;
-(NSArray *)thumbnailURLs;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 maxThumbnailCount:(int)arg2 ;
-(NSString *)socialContext;
-(int)socialContextType;
-(NSString *)userDescription;
-(NSArray *)mediaBundles;
-(NSArray *)mediaIDs;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(NSString *)algorithm;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)icon;
@end

