/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:48 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@interface IGGaussianBlurFilter : IGImageFilter {

	char _needsConfigure;
	CGSize _dimension;
	GLKVector2 _blurVector;
	float _sigma;
	unsigned _kernelSize;

}

@property (assign,nonatomic) float sigma;                        //@synthesize sigma=_sigma - In the implementation block
@property (nonatomic,readonly) unsigned kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(unsigned)kernelSize;
-(id)fragmentShader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)sigma;
-(void)setSigma:(float)arg1 ;
@end

