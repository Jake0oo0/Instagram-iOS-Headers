

#import <Instagram/Instagram-Structs.h>
@class EAGLContext;

@interface IGSurface : NSObject {

	unsigned _texture;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	char _generatedTexture;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _cvTexture;
	EAGLContext* _glContext;
	CAEAGLLayer* _layer;
	CGSize _size;
	char _layerRenderBufferStorageNeedsRefresh;
	unsigned char _flipped;
	CVBufferRef _pixelBuffer;
	unsigned _textureTarget;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithIGTexture:(id)arg1 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(CVBufferRef)pixelBuffer;
-(unsigned)textureTarget;
-(CGSize)size;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned char)isFlipped;
-(unsigned)texture;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

