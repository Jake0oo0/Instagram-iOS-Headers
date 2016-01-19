/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSURLResponse, NSData;

@interface IGURLCacheObject : NSObject <NSCoding> {

	NSURLResponse* _response;
	NSData* _data;

}

@property (nonatomic,readonly) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
-(id)cachedResponse;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURLResponse *)response;
@end

