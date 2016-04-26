/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGStabilizationFilter.h>

@class IGSurface;

@interface IGStabilizationYUVFilter : IGStabilizationFilter {

	char _didSetYUVMatrix;
	IGSurface* _lumaSurface;
	IGSurface* _chromaSurface;

}

@property (nonatomic,retain) IGSurface * lumaSurface;                //@synthesize lumaSurface=_lumaSurface - In the implementation block
@property (nonatomic,retain) IGSurface * chromaSurface;              //@synthesize chromaSurface=_chromaSurface - In the implementation block
-(id)fullFragmentShader;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(void)setYUVMatrixForProgram:(id)arg1 ;
-(IGSurface *)chromaSurface;
-(IGSurface *)lumaSurface;
-(void)setLumaSurface:(IGSurface *)arg1 ;
-(void)setChromaSurface:(IGSurface *)arg1 ;
@end

