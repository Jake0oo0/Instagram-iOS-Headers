
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@protocol IGPostPipelineFilterDelegate;
@class IGSurface, IGLuxBlendFilter, IGFilterGroup, IGNormalFilter, IGTiltShiftFilter, IGLocalLaplacianFilter, IGImageFilter, UIImage;

@interface IGPostPipelineFilter : IGImageFilter {

	char _borderHidden;
	char _luxEnabled;
	char _sharpenDisabled;
	char _disableTiltShiftRendering;
	char _displayOriginal;
	char _luxNeedsRefresh;
	char _needsRefresh;
	IGSurface* _inputSurface;
	IGSurface* _outputSurface;
	IGSurface* _luxCDF;
	unsigned _tintShadowsColorIndex;
	unsigned _tintHighlightsColorIndex;
	id<IGPostPipelineFilterDelegate> _delegate;
	IGSurface* _luxedPreviewSurface;
	IGLuxBlendFilter* _luxBlendFilter;
	IGFilterGroup* _filters;
	IGNormalFilter* _displayOriginalFilter;

}

@property (nonatomic,readonly) IGTiltShiftFilter * tiltShiftFilter; 
@property (nonatomic,retain) IGSurface * luxedPreviewSurface;                                        //@synthesize luxedPreviewSurface=_luxedPreviewSurface - In the implementation block
@property (nonatomic,retain) IGLuxBlendFilter * luxBlendFilter;                                      //@synthesize luxBlendFilter=_luxBlendFilter - In the implementation block
@property (nonatomic,readonly) IGLocalLaplacianFilter * localLaplacianFilter; 
@property (nonatomic,retain) IGFilterGroup * filters;                                                //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) IGImageFilter * photoFilter; 
@property (nonatomic,retain) IGNormalFilter * displayOriginalFilter;                                 //@synthesize displayOriginalFilter=_displayOriginalFilter - In the implementation block
@property (assign,nonatomic) char luxNeedsRefresh;                                                   //@synthesize luxNeedsRefresh=_luxNeedsRefresh - In the implementation block
@property (assign,nonatomic) char needsRefresh;                                                      //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (nonatomic,retain) IGSurface * inputSurface;                                               //@synthesize inputSurface=_inputSurface - In the implementation block
@property (nonatomic,retain) IGSurface * outputSurface;                                              //@synthesize outputSurface=_outputSurface - In the implementation block
@property (nonatomic,retain) Class photoFilterClass; 
@property (assign,nonatomic) float photoFilterStrength; 
@property (assign,nonatomic) char borderHidden;                                                      //@synthesize borderHidden=_borderHidden - In the implementation block
@property (nonatomic,readonly) UIImage * photoBorderImage; 
@property (assign,nonatomic) float luxBlendAmount; 
@property (assign,getter=isLuxEnabled,nonatomic) char luxEnabled;                                    //@synthesize luxEnabled=_luxEnabled - In the implementation block
@property (nonatomic,retain) IGSurface * luxCDF;                                                     //@synthesize luxCDF=_luxCDF - In the implementation block
@property (assign,nonatomic) float localLaplacianAmount; 
@property (assign,getter=isLocalLaplacianEnabled,nonatomic) char localLaplacianEnabled; 
@property (assign,nonatomic) float brightness; 
@property (assign,nonatomic) float saturation; 
@property (assign,nonatomic) float contrast; 
@property (assign,nonatomic) float temperature; 
@property (assign,nonatomic) float vignette; 
@property (assign,nonatomic) float fade; 
@property (assign,nonatomic) float highlights; 
@property (assign,nonatomic) float shadows; 
@property (assign,nonatomic) float sharpen; 
@property (assign,nonatomic) float tintShadowsIntensity; 
@property (assign,nonatomic) float tintHighlightsIntensity; 
@property (assign,nonatomic) _GLKVector3 tintShadowsColor; 
@property (assign,nonatomic) _GLKVector3 tintHighlightsColor; 
@property (assign,nonatomic) unsigned tintShadowsColorIndex;                                         //@synthesize tintShadowsColorIndex=_tintShadowsColorIndex - In the implementation block
@property (assign,nonatomic) unsigned tintHighlightsColorIndex;                                      //@synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex - In the implementation block
@property (assign,nonatomic) char sharpenDisabled;                                                   //@synthesize sharpenDisabled=_sharpenDisabled - In the implementation block
@property (assign,nonatomic) unsigned tiltshiftMode; 
@property (assign,nonatomic) CGPoint tiltShiftCenter; 
@property (assign,nonatomic) float tiltShiftAngle; 
@property (assign,nonatomic) float tiltShiftRadius; 
@property (assign,nonatomic) char disableTiltShiftRendering;                                         //@synthesize disableTiltShiftRendering=_disableTiltShiftRendering - In the implementation block
@property (assign,nonatomic) char displayOriginal;                                                   //@synthesize displayOriginal=_displayOriginal - In the implementation block
@property (assign,nonatomic,__weak) id<IGPostPipelineFilterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setPhotoFilterStrength:(float)arg1 ;
-(char)hasAdjustedValues;
-(void)setLuxEnabled:(char)arg1 ;
-(float)highlights;
-(float)vignette;
-(float)localLaplacianAmount;
-(void)setLocalLaplacianEnabled:(char)arg1 ;
-(void)setHighlights:(float)arg1 ;
-(void)setShadows:(float)arg1 ;
-(void)setVignette:(float)arg1 ;
-(void)setFade:(float)arg1 ;
-(void)setLocalLaplacianAmount:(float)arg1 ;
-(void)setLuxBlendAmount:(float)arg1 ;
-(Class)photoFilterClass;
-(void)setSharpenDisabled:(char)arg1 ;
-(void)setDisablePhotoFilter:(char)arg1 ;
-(void)setDisplayOriginal:(char)arg1 ;
-(float)luxBlendAmount;
-(void)setBorderHidden:(char)arg1 ;
-(float)photoFilterStrength;
-(id)flattenedFilter;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)setTintShadowsColor:(_GLKVector3)arg1 ;
-(void)setTintHighlightsColor:(_GLKVector3)arg1 ;
-(void)setTintShadowsIntensity:(float)arg1 ;
-(void)setTintHighlightsIntensity:(float)arg1 ;
-(_GLKVector3)tintShadowsColor;
-(_GLKVector3)tintHighlightsColor;
-(float)tintShadowsIntensity;
-(float)tintHighlightsIntensity;
-(void)setTintHighlightsColorIndex:(unsigned)arg1 ;
-(unsigned)tintShadowsColorIndex;
-(void)setTintShadowsColorIndex:(unsigned)arg1 ;
-(unsigned)tintHighlightsColorIndex;
-(void)setOutputSurface:(IGSurface *)arg1 ;
-(_GLKMatrix4)textureTransform;
-(char)photoFilterHasBorder;
-(char)displayOriginal;
-(UIImage *)photoBorderImage;
-(void)setNeedsRefresh;
-(void)clearCachesNotOfSize:(CGSize)arg1 ;
-(void)setTiltshiftMode:(unsigned)arg1 ;
-(void)renderIfNeeded;
-(void)reduceCaches;
-(void)setDisableTiltShiftRendering:(char)arg1 ;
-(float)tiltShiftAngle;
-(void)setTiltShiftAngle:(float)arg1 ;
-(void)setTiltShiftCenter:(CGPoint)arg1 ;
-(float)tiltShiftRadius;
-(void)setTiltShiftRadius:(float)arg1 ;
-(CGPoint)tiltShiftCenter;
-(void)setPhotoFilterClass:(Class)arg1 ;
-(void)setInputSurface:(IGSurface *)arg1 ;
-(IGSurface *)inputSurface;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(char)sharpenDisabled;
-(void)setLuxBlendFilter:(IGLuxBlendFilter *)arg1 ;
-(id)basicAdjustFilter;
-(IGLuxBlendFilter *)luxBlendFilter;
-(IGSurface *)luxCDF;
-(char)isLocalLaplacianEnabled;
-(IGLocalLaplacianFilter *)localLaplacianFilter;
-(unsigned)tiltshiftMode;
-(IGTiltShiftFilter *)tiltShiftFilter;
-(IGNormalFilter *)displayOriginalFilter;
-(IGSurface *)outputSurface;
-(char)isLuxEnabled;
-(id)renderOrRetrieveLuxedSurfaceOfSize:(CGSize)arg1 ;
-(char)shouldDisplayBorder;
-(char)borderHidden;
-(void)setLuxCDF:(IGSurface *)arg1 ;
-(char)disableTiltShiftRendering;
-(IGSurface *)luxedPreviewSurface;
-(void)setLuxedPreviewSurface:(IGSurface *)arg1 ;
-(void)setDisplayOriginalFilter:(IGNormalFilter *)arg1 ;
-(char)luxNeedsRefresh;
-(void)setLuxNeedsRefresh:(char)arg1 ;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(void)setDelegate:(id<IGPostPipelineFilterDelegate>)arg1 ;
-(id)init;
-(id<IGPostPipelineFilterDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContrast:(float)arg1 ;
-(float)fade;
-(void)setFilters:(IGFilterGroup *)arg1 ;
-(IGFilterGroup *)filters;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(float)contrast;
-(float)shadows;
-(char)isFiltered;
-(IGImageFilter *)photoFilter;
-(char)needsRefresh;
-(void)setNeedsRefresh:(char)arg1 ;
-(float)sharpen;
-(void)setSharpen:(float)arg1 ;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
-(void)updateBorder;
-(void)render;
@end

