
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGStarlightFilter : IGImageFilter {

	IGSurface* _claheCDF;
	float _filterStrength;

}

@property (nonatomic,retain) IGSurface * claheCDF;              //@synthesize claheCDF=_claheCDF - In the implementation block
@property (assign,nonatomic) float filterStrength;              //@synthesize filterStrength=_filterStrength - In the implementation block
+(id)cdfForPixelBuffer:(CVBufferRef)arg1 slope:(float)arg2 ;
+(int)numColumns;
-(void)setFilterStrength:(float)arg1 ;
-(float)filterStrength;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(IGSurface *)claheCDF;
-(void)setClaheCDF:(IGSurface *)arg1 ;
-(id)fragmentFunctions;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)samplers;
@end

