/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface IGURLRequestLog : NSObject {

	double _stamps[12];
	NSString* _path;
	NSString* _method;
	NSString* _query;
	NSNumber* _statusCode;
	NSNumber* _domainError;
	NSNumber* _contentLength;
	NSNumber* _totalBytesUp;
	NSNumber* _totalBytesDown;

}

@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * method;                      //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSNumber * statusCode;                  //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSNumber * domainError;                 //@synthesize domainError=_domainError - In the implementation block
@property (nonatomic,retain) NSNumber * contentLength;               //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,retain) NSNumber * totalBytesUp;                //@synthesize totalBytesUp=_totalBytesUp - In the implementation block
@property (nonatomic,retain) NSNumber * totalBytesDown;              //@synthesize totalBytesDown=_totalBytesDown - In the implementation block
+(void)setLoggingEnabled:(char)arg1 ;
-(NSNumber *)totalBytesUp;
-(NSNumber *)totalBytesDown;
-(void)markEvent:(int)arg1 ;
-(NSNumber *)domainError;
-(void)setDomainError:(NSNumber *)arg1 ;
-(void)setTotalBytesUp:(NSNumber *)arg1 ;
-(void)setTotalBytesDown:(NSNumber *)arg1 ;
-(void)setContentLength:(NSNumber *)arg1 ;
-(id)init;
-(NSString *)query;
-(NSString *)path;
-(void)setQuery:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)statusCode;
-(NSString *)method;
-(void)finish;
-(NSNumber *)contentLength;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
@end

