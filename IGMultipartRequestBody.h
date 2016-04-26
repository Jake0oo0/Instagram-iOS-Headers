/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGMultipartComponent, NSMutableArray, NSString;

@interface IGMultipartRequestBody : NSObject {

	IGMultipartComponent* _boundaryComponent;
	IGMultipartComponent* _terminalComponent;
	NSMutableArray* _components;
	NSString* _contentType;

}

@property (nonatomic,copy,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned contentLength; 
-(id)initWithRequestParameters:(id)arg1 files:(id)arg2 ;
-(NSString *)contentType;
-(unsigned)contentLength;
-(id)inputStream;
@end

