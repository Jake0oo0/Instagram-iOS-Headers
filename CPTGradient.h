
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTColorSpace;

@interface CPTGradient : NSObject <NSCopying, NSCoding> {

	CPTColorSpace* colorspace;
	int blendingMode;
	float angle;
	int gradientType;
	CPTGradientElement* elementList;
	CGFunctionRef gradientFunction;
	CGPoint startAnchor;
	CGPoint endAnchor;

}

@property (nonatomic,retain) CPTColorSpace * colorspace; 
@property (assign,nonatomic) int blendingMode; 
@property (assign,nonatomic) CPTGradientElement* elementList; 
@property (assign,nonatomic) CGFunctionRef gradientFunction; 
@property (getter=isOpaque,nonatomic,readonly) char opaque; 
@property (assign,nonatomic) int gradientType; 
@property (assign,nonatomic) float angle; 
@property (assign,nonatomic) CGPoint startAnchor; 
@property (assign,nonatomic) CGPoint endAnchor; 
+(id)gradientWithBeginningColor:(id)arg1 endingColor:(id)arg2 beginningPosition:(float)arg3 endingPosition:(float)arg4 ;
+(id)gradientWithBeginningColor:(id)arg1 endingColor:(id)arg2 ;
+(id)aquaSelectedGradient;
+(id)aquaNormalGradient;
+(id)aquaPressedGradient;
+(id)unifiedSelectedGradient;
+(id)unifiedNormalGradient;
+(id)unifiedPressedGradient;
+(id)unifiedDarkGradient;
+(id)sourceListSelectedGradient;
+(id)sourceListUnselectedGradient;
+(id)rainbowGradient;
+(id)hydrogenSpectrumGradient;
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(void)setBlendingMode:(int)arg1 ;
-(void)setColorspace:(CPTColorSpace *)arg1 ;
-(void)setElementList:(CPTGradientElement*)arg1 ;
-(void)removeAllElements;
-(CPTGradientElement*)elementList;
-(int)blendingMode;
-(CPTGradientElement*)removeElementAtPosition:(float)arg1 ;
-(CPTColorSpace *)colorspace;
-(CGShadingRef)newAxialGradientInRect:(CGRect)arg1 ;
-(CGShadingRef)newRadialGradientInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(CGFunctionRef)gradientFunction;
-(void)setGradientFunction:(CGFunctionRef)arg1 ;
-(id)gradientWithAlphaComponent:(float)arg1 ;
-(id)gradientWithBlendingMode:(int)arg1 ;
-(id)addColorStop:(id)arg1 atPosition:(float)arg2 ;
-(id)removeColorStopAtPosition:(float)arg1 ;
-(id)removeColorStopAtIndex:(unsigned)arg1 ;
-(CGColorRef)newColorStopAtIndex:(unsigned)arg1 ;
-(CGColorRef)newColorAtPosition:(float)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setGradientType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)commonInit;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(id)debugQuickLookObject;
-(void)setStartAnchor:(CGPoint)arg1 ;
-(void)setEndAnchor:(CGPoint)arg1 ;
-(CGPoint)startAnchor;
-(CGPoint)endAnchor;
-(void)addElement:(CPTGradientElement*)arg1 ;
-(unsigned)elementCount;
-(CPTGradientElement*)elementAtIndex:(unsigned)arg1 ;
-(int)gradientType;
-(CPTGradientElement*)removeElementAtIndex:(unsigned)arg1 ;
@end

