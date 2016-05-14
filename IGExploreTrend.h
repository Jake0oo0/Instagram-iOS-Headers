/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGExploreTrend : NSObject <NSCoding, IGDKDiffable> {

	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)diffIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 title:(id)arg2 ;
@end

