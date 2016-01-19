/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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
-(void)addFileContents:(id)arg1 name:(id)arg2 ;
-(void)addFileUploadAttachment:(id)arg1 ;
-(id)send:(id*)arg1 timeoutInterval:(double)arg2 ;
-(id)formDataForKey:(id)arg1 value:(id)arg2 ;
-(id)formDataForFileUploadAttachment:(id)arg1 ;
-(void)addFileAtPath:(id)arg1 name:(id)arg2 ;
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

