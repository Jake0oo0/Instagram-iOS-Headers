/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:50 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSMutableDictionary, NSString, NSHTTPURLResponse;

@interface HTTPMultipartUpload : NSObject {

	NSURL* url_;
	NSDictionary* parameters_;
	NSMutableDictionary* files_;
	NSString* boundary_;
	NSHTTPURLResponse* response_;

}
-(id)formDataForFileContents:(id)arg1 name:(id)arg2 ;
-(id)send:(id*)arg1 timeoutInterval:(double)arg2 ;
-(id)formDataForKey:(id)arg1 value:(id)arg2 ;
-(id)formDataForFile:(id)arg1 name:(id)arg2 ;
-(void)addFileAtPath:(id)arg1 name:(id)arg2 ;
-(void)addFileContents:(id)arg1 name:(id)arg2 ;
-(id)send:(id*)arg1 ;
-(id)multipartBoundary;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(id)response;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)files;
@end

