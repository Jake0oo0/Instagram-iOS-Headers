/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGBilateralFilter : IGImageFilter {

	char _needsConfigure;
	GLKVector2 _blurVector;
	IGSurface* _intermediateTexture;
	float _rangeSigma;
	float _spatialSigma;
	unsigned _spatialKernelSize;

}

@property (assign,nonatomic) float rangeSigma;                          //@synthesize rangeSigma=_rangeSigma - In the implementation block
@property (assign,nonatomic) float spatialSigma;                        //@synthesize spatialSigma=_spatialSigma - In the implementation block
@property (nonatomic,readonly) unsigned spatialKernelSize;              //@synthesize spatialKernelSize=_spatialKernelSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)initWithKernelSize:(unsigned)arg1 ;
-(float)rangeSigma;
-(void)setRangeSigma:(float)arg1 ;
-(float)spatialSigma;
-(void)setSpatialSigma:(float)arg1 ;
-(unsigned)spatialKernelSize;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

