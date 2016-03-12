

#import <Instagram/Instagram-Structs.h>
@class IGPathStyleBackgroundFill, IGPathStyleOuterFill, IGPathStyleInnerFill, IGPathStyleGradientFill, IGPathStyleStroke, IGPathStyleInnerShadow, IGPathStyleOuterShadow;

@interface IGPathStyleSet : NSObject {

	IGPathStyleBackgroundFill* _backgroundFill;
	IGPathStyleOuterFill* _outerFill;
	IGPathStyleInnerFill* _innerFill;
	IGPathStyleGradientFill* _gradientFill;
	IGPathStyleStroke* _stroke;
	IGPathStyleInnerShadow* _innerShadow;
	IGPathStyleOuterShadow* _outerShadow;

}

@property (nonatomic,retain) IGPathStyleBackgroundFill * backgroundFill;              //@synthesize backgroundFill=_backgroundFill - In the implementation block
@property (nonatomic,retain) IGPathStyleOuterFill * outerFill;                        //@synthesize outerFill=_outerFill - In the implementation block
@property (nonatomic,retain) IGPathStyleInnerFill * innerFill;                        //@synthesize innerFill=_innerFill - In the implementation block
@property (nonatomic,retain) IGPathStyleGradientFill * gradientFill;                  //@synthesize gradientFill=_gradientFill - In the implementation block
@property (nonatomic,retain) IGPathStyleStroke * stroke;                              //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,retain) IGPathStyleInnerShadow * innerShadow;                    //@synthesize innerShadow=_innerShadow - In the implementation block
@property (nonatomic,retain) IGPathStyleOuterShadow * outerShadow;                    //@synthesize outerShadow=_outerShadow - In the implementation block
+(id)styleSetWithStyles:(/*function pointer*/void*)arg1 ;
-(IGPathStyleInnerFill *)innerFill;
-(IGPathStyleOuterFill *)outerFill;
-(IGPathStyleGradientFill *)gradientFill;
-(IGPathStyleInnerShadow *)innerShadow;
-(IGPathStyleOuterShadow *)outerShadow;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(IGPathStyleBackgroundFill *)backgroundFill;
-(void)setBackgroundFill:(IGPathStyleBackgroundFill *)arg1 ;
-(void)setOuterFill:(IGPathStyleOuterFill *)arg1 ;
-(void)setInnerFill:(IGPathStyleInnerFill *)arg1 ;
-(void)setGradientFill:(IGPathStyleGradientFill *)arg1 ;
-(void)setInnerShadow:(IGPathStyleInnerShadow *)arg1 ;
-(void)setOuterShadow:(IGPathStyleOuterShadow *)arg1 ;
-(IGPathStyleStroke *)stroke;
-(void)setStroke:(IGPathStyleStroke *)arg1 ;
@end

