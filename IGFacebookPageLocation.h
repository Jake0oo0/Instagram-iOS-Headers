/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface IGFacebookPageLocation : NSObject <NSCopying> {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,retain) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
@end

