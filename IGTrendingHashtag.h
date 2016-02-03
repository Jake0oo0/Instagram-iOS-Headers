/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:20 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGStorableObject.h>

@class NSArray, NSString, IGHashtagModel;

@interface IGTrendingHashtag : IGStorableObject {

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
+(id)centralizedStore;
-(NSArray *)mediaBundles;
-(NSString *)byline;
-(unsigned)taggedNumber;
-(NSString *)name;
-(NSString *)title;
-(IGHashtagModel *)model;
-(NSString *)subtitle;
-(char)updateWithDictionary:(id)arg1 ;
@end

