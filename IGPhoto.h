/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGPhoto : NSObject <NSCoding> {

	NSString* _mediaID;
	NSArray* _imageVersions;
	CGSize _aspectRatio;

}

@property (nonatomic,copy,readonly) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) NSArray * imageVersions;                //@synthesize imageVersions=_imageVersions - In the implementation block
+(id)arrayForImageVersions:(id)arg1 ;
+(CGSize)aspectRatioForImageVersions:(id)arg1 ;
+(CGSize)imageSizeForImageVersion:(id)arg1 ;
-(id)imageURLForWidth:(float)arg1 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 ;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(id)initWithImageVersions:(id)arg1 ;
-(NSString *)mediaID;
-(id)initWithImageVersions:(id)arg1 mediaID:(id)arg2 originalMediaSize:(CGSize)arg3 ;
-(NSArray *)imageVersions;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(int)originalAspectRatioImageIndexNearestToWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageURLForImageIndex:(int)arg1 ;
-(int)originalAspectRatioImageIndexNearestToHeight:(float)arg1 scale:(float)arg2 ;
-(int)imageIndexOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageIndicesOfAtLeastSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)imageURLForHeight:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(int)originalAspectRatioImageIndexNearestToRequestedDimension:(float)arg1 imageInfoKey:(id)arg2 ;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(void)setImageVersions:(NSArray *)arg1 ;
-(CGSize)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setAspectRatio:(CGSize)arg1 ;
@end

