/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGStorableObject.h>

@class NSString, NSURL;

@interface IGFeedMessage : IGStorableObject {

	NSString* _title;
	NSString* _subtitle;
	NSURL* _thumbnailURL;
	int _badgeCount;
	NSURL* _targetURL;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSURL * thumbnailURL;              //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (assign,nonatomic) int badgeCount;                    //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,retain) NSURL * targetURL;                 //@synthesize targetURL=_targetURL - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBadgeCount:(int)arg1 ;
-(int)badgeCount;
-(Class)objectClass;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(char)updateWithDictionary:(id)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
@end

