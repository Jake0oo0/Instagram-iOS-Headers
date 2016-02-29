/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter {

	IGSurface* _overlay;

}

@property (assign,nonatomic) CVBufferRef overlay; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShader;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CVBufferRef)overlay;
-(void)setOverlay:(CVBufferRef)arg1 ;
-(id)samplers;
@end

