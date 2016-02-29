/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSMutableArray, NSMutableSet, EAGLContext;

@interface IGContext : NSObject {

	CVOpenGLESTextureCacheRef _textureCache;
	unsigned _squareVertexBuffer;
	NSMutableArray* _resources;
	NSMutableSet* _surfacesToFlush;
	NSMutableSet* _cachedSurfaces;
	EAGLContext* _openglContext;
	CGSize _maxTextureSize;

}

@property (nonatomic,retain) EAGLContext * openglContext;                           //@synthesize openglContext=_openglContext - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef textureCache; 
@property (nonatomic,readonly) unsigned squareVertexBuffer; 
@property (nonatomic,readonly) CGSize maxTextureSize;                               //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
+(id)currentContext;
-(CGSize)maxTextureSize;
-(void)makeCurrent;
-(void)removeAllReusableSurfaces;
-(CVOpenGLESTextureCacheRef)textureCache;
-(void)setResource:(id)arg1 forFilter:(id)arg2 ;
-(id)resourceForFilter:(id)arg1 ;
-(void)addSurfaceToFlush:(id)arg1 ;
-(unsigned)squareVertexBuffer;
-(void)pushReusableSurface:(id)arg1 ;
-(id)popReusableSurfaceWithSize:(CGSize)arg1 ;
-(EAGLContext *)openglContext;
-(void)setOpenglContext:(EAGLContext *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

