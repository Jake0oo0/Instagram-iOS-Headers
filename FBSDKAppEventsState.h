/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _mutableEvents;
	unsigned _numSkipped;
	NSString* _tokenString;
	NSString* _appID;

}

@property (copy,readonly) NSArray * events; 
@property (readonly) unsigned numSkipped;                      //@synthesize numSkipped=_numSkipped - In the implementation block
@property (copy,readonly) NSString * tokenString;              //@synthesize tokenString=_tokenString - In the implementation block
@property (copy,readonly) NSString * appID;                    //@synthesize appID=_appID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithToken:(id)arg1 appID:(id)arg2 ;
-(char)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2 ;
-(void)addEventsFromAppEventState:(id)arg1 ;
-(void)addEvent:(id)arg1 isImplicit:(char)arg2 ;
-(char)areAllEventsImplicit;
-(char)isCompatibleWithAppEventsState:(id)arg1 ;
-(id)JSONStringForEvents:(char)arg1 ;
-(unsigned)numSkipped;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(NSString *)tokenString;
-(NSString *)appID;
@end

