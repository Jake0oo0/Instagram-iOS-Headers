/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

