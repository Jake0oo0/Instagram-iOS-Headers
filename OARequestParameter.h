/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OARequestParameter : NSObject {

	NSString* name;
	NSString* value;

}

@property (copy) NSString * name; 
@property (copy) NSString * value; 
+(id)requestParameter:(id)arg1 value:(id)arg2 ;
-(id)URLEncodedNameValuePair;
-(id)URLEncodedName;
-(id)URLEncodedValue;
-(char)isEqualToRequestParameter:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end

