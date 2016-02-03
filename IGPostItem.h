/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:29 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, IGPhoto, IGVideo, NSURL, IGDirectResponseInfo;

@interface IGPostItem : NSObject <NSCoding> {

	NSString* _pk;
	int _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;
	NSURL* _link;
	NSString* _actionText;
	IGDirectResponseInfo* _directResponseInfo;

}

@property (nonatomic,copy,readonly) NSString * pk;                                     //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) int mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSURL * link;                                           //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;                             //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;              //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
-(NSString *)pk;
-(IGDirectResponseInfo *)directResponseInfo;
-(NSString *)actionText;
-(id)initWithFeedDictionary:(id)arg1 ;
-(id)initWithType:(int)arg1 photo:(id)arg2 video:(id)arg3 link:(id)arg4 pk:(id)arg5 actionText:(id)arg6 directResponseInfo:(id)arg7 ;
-(int)mediaType;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)link;
-(IGVideo *)video;
@end

