/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:33 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSDictionary;

@interface IGSampleBuffer : NSObject {

	CVBufferRef _imageBuffer;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) CVBufferRef imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) CGSize size; 
-(id)initWithImageBuffer:(CVBufferRef)arg1 metadata:(id)arg2 ;
-(id)initWithImageBuffer:(CVBufferRef)arg1 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(CVBufferRef)imageBuffer;
-(NSDictionary *)metadata;
@end

