/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:35 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaMetadataProtocol.h>

@class UIImage, NSURL, NSString;

@interface IGAddToPostMetadata : NSObject <IGMediaMetadataProtocol> {

	UIImage* _thumbnailImage;
	NSURL* _thumbnailURL;
	NSString* _albumPK;

}

@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;                  //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy) NSString * albumPK;                      //@synthesize albumPK=_albumPK - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlbumPK:(NSString *)arg1 ;
-(void)prepareToShare;
-(id)sharingInfo;
-(NSString *)albumPK;
-(UIImage *)thumbnailImage;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(void)setThumbnailImage:(UIImage *)arg1 ;
@end

