/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPhotoFilter.h>

@class NSString, NSDictionary, NSData;

@interface IGSerializedPhotoFilter : IGPhotoFilter {

	int _filterType;
	NSString* _filterName;
	NSDictionary* _samplers;
	NSData* _borderImageData;
	NSString* _fragmentFunctions;
	NSString* _fragmentShader;

}

@property (assign,nonatomic) int filterType;                            //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) NSString * filterName;                     //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,retain) NSDictionary * samplers;                   //@synthesize samplers=_samplers - In the implementation block
@property (nonatomic,retain) NSData * borderImageData;                  //@synthesize borderImageData=_borderImageData - In the implementation block
@property (nonatomic,retain) NSString * fragmentFunctions;              //@synthesize fragmentFunctions=_fragmentFunctions - In the implementation block
@property (nonatomic,retain) NSString * fragmentShader;                 //@synthesize fragmentShader=_fragmentShader - In the implementation block
+(id)photoFilterWithDictionary:(id)arg1 ;
+(id)photoFilterFromFile:(id)arg1 ;
-(NSString *)fragmentFunctions;
-(NSString *)filterName;
-(void)setSamplers:(NSDictionary *)arg1 ;
-(void)setFragmentFunctions:(NSString *)arg1 ;
-(void)setBorderImageData:(NSData *)arg1 ;
-(NSData *)borderImageData;
-(void)setFragmentShader:(NSString *)arg1 ;
-(NSString *)fragmentShader;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(int)filterType;
-(void)setFilterType:(int)arg1 ;
-(id)borderImage;
-(NSDictionary *)samplers;
-(void)setFilterName:(NSString *)arg1 ;
@end

