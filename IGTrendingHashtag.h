/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGStorableObject.h>
#import <Instagram/IGStoredObject.h>

@class NSArray, NSString, IGHashtagModel;

@interface IGTrendingHashtag : IGStorableObject <IGStoredObject> {

	NSArray* _mediaBundles;
	NSString* _name;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;
	unsigned _taggedNumber;

}

@property (nonatomic,copy,readonly) NSArray * mediaBundles;              //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * byline;                   //@synthesize byline=_byline - In the implementation block
@property (nonatomic,readonly) unsigned taggedNumber;                    //@synthesize taggedNumber=_taggedNumber - In the implementation block
@property (nonatomic,readonly) IGHashtagModel * model; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
-(id)pk;
-(char)postIsBroken;
-(char)needsFetch;
-(NSArray *)mediaBundles;
-(NSString *)byline;
-(unsigned)taggedNumber;
-(NSString *)name;
-(NSString *)title;
-(NSString *)subtitle;
-(IGHashtagModel *)model;
-(char)updateWithDictionary:(id)arg1 ;
@end

