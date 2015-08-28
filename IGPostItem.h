/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:21 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString, IGPhoto, IGVideo, NSURL;

@interface IGPostItem : NSObject <NSCoding> {

	NSString* _pk;
	int _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;
	NSURL* _link;
	NSString* _actionText;

}

@property (nonatomic,copy,readonly) NSString * pk;                      //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) int mediaType;                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                         //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSURL * link;                            //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
-(NSString *)pk;
-(id)initWithFeedDictionary:(id)arg1 ;
-(NSString *)actionText;
-(id)initWithType:(int)arg1 photo:(id)arg2 video:(id)arg3 link:(id)arg4 pk:(id)arg5 actionText:(id)arg6 ;
-(IGPhoto *)photo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURL *)link;
-(IGVideo *)video;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
@end

