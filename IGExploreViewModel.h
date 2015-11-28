
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSIndexSet, NSURL;

@interface IGExploreViewModel : NSObject <NSCopying> {

	char _restricted;
	char _following;
	char _verified;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;
	NSArray* _thumbnailURLs;
	NSIndexSet* _thumbnailVideoIndexes;
	NSURL* _imageURL;
	unsigned _action;
	int _maxThumbnails;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * byline;                                  //@synthesize byline=_byline - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailURLs;                            //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (nonatomic,copy) NSIndexSet * thumbnailVideoIndexes;                 //@synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                   //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,getter=isRestricted,nonatomic) char restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (assign,getter=isFollowing,nonatomic) char following;                //@synthesize following=_following - In the implementation block
@property (assign,getter=isVerified,nonatomic) char verified;                  //@synthesize verified=_verified - In the implementation block
@property (assign,nonatomic) unsigned action;                                  //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int maxThumbnails;                                //@synthesize maxThumbnails=_maxThumbnails - In the implementation block
-(char)isVerified;
-(NSString *)byline;
-(NSArray *)thumbnailURLs;
-(int)maxThumbnails;
-(NSIndexSet *)thumbnailVideoIndexes;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(void)setThumbnailVideoIndexes:(NSIndexSet *)arg1 ;
-(void)setMaxThumbnails:(int)arg1 ;
-(void)applyMediaBundles:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(void)setByline:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)action;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(unsigned)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setFollowing:(char)arg1 ;
-(char)isFollowing;
-(void)setVerified:(char)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setRestricted:(char)arg1 ;
-(char)isRestricted;
@end

