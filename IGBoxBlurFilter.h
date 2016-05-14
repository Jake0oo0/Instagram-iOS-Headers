/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGBoxBlurFilter : IGImageFilter {

	GLKVector2 _blurVector;
	IGSurface* _intermediateTexture;
	unsigned _kernelSize;

}

@property (nonatomic,readonly) unsigned kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(unsigned)kernelSize;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

