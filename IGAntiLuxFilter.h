/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGAntiLuxFilter : IGImageFilter {

	IGSurface* _blurredSurface;
	IGSurface* _claheCDF;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * claheCDF;              //@synthesize claheCDF=_claheCDF - In the implementation block
@property (assign,nonatomic) float filterStrength;              //@synthesize filterStrength=_filterStrength - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(float)filterStrength;
-(void)setFilterStrength:(float)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(IGSurface *)claheCDF;
-(void)setClaheCDF:(IGSurface *)arg1 ;
-(id)samplers;
-(id)fragmentShader;
-(id)init;
@end

