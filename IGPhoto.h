/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:21 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCoding.h>

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
-(id)imageURLForWidth:(float)arg1 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 ;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(id)initWithImageVersions:(id)arg1 ;
-(NSString *)mediaID;
-(id)initWithImageVersions:(id)arg1 mediaID:(id)arg2 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(int)originalAspectRatioImageIndexNearestToWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageURLForImageIndex:(int)arg1 ;
-(int)originalAspectRatioImageIndexNearestToHeight:(float)arg1 scale:(float)arg2 ;
-(int)imageIndexOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageIndicesOfAtLeastSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)imageURLForHeight:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(NSArray *)imageVersions;
-(CGSize)imageSizeForImageIndex:(int)arg1 ;
-(int)originalAspectRatioImageIndexNearestToRequestedDimension:(float)arg1 imageInfoKey:(id)arg2 ;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(void)setImageVersions:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAspectRatio:(CGSize)arg1 ;
-(CGSize)aspectRatio;
@end

