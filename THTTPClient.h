/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/TTransport.h>

@class NSURL, NSMutableURLRequest, NSMutableData, NSData, NSString;

@interface THTTPClient : NSObject <TTransport> {

	NSURL* mURL;
	NSMutableURLRequest* mRequest;
	NSMutableData* mRequestData;
	NSData* mResponseData;
	int mResponseDataOffset;
	NSString* mUserAgent;
	int mTimeout;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3 ;
-(void)setupRequest;
-(void)dealloc;
-(void)flush;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
@end

