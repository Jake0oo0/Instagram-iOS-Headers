
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlot.h>

@class CPTLineStyle, CPTFill, CPTMutableNumericData, NSArray;

@interface CPTTradingRangePlot : CPTPlot {

	char showBarBorder;
	CPTLineStyle* lineStyle;
	CPTLineStyle* increaseLineStyle;
	CPTLineStyle* decreaseLineStyle;
	CPTFill* increaseFill;
	CPTFill* decreaseFill;
	int plotStyle;
	float barWidth;
	float stickLength;
	float barCornerRadius;
	unsigned pointingDeviceDownIndex;

}

@property (nonatomic,copy) CPTMutableNumericData * xValues; 
@property (nonatomic,copy) CPTMutableNumericData * openValues; 
@property (nonatomic,copy) CPTMutableNumericData * highValues; 
@property (nonatomic,copy) CPTMutableNumericData * lowValues; 
@property (nonatomic,copy) CPTMutableNumericData * closeValues; 
@property (nonatomic,copy) NSArray * increaseFills; 
@property (nonatomic,copy) NSArray * decreaseFills; 
@property (nonatomic,copy) NSArray * lineStyles; 
@property (nonatomic,copy) NSArray * increaseLineStyles; 
@property (nonatomic,copy) NSArray * decreaseLineStyles; 
@property (assign,nonatomic) unsigned pointingDeviceDownIndex; 
@property (assign,nonatomic) int plotStyle; 
@property (assign,nonatomic) float barWidth; 
@property (assign,nonatomic) float stickLength; 
@property (assign,nonatomic) float barCornerRadius; 
@property (assign,nonatomic) char showBarBorder; 
@property (nonatomic,copy) CPTLineStyle * lineStyle; 
@property (nonatomic,copy) CPTLineStyle * increaseLineStyle; 
@property (nonatomic,copy) CPTLineStyle * decreaseLineStyle; 
@property (nonatomic,copy) CPTFill * increaseFill; 
@property (nonatomic,copy) CPTFill * decreaseFill; 
+(char)needsDisplayForKey:(id)arg1 ;
-(void)setLineStyle:(CPTLineStyle *)arg1 ;
-(void)setBarCornerRadius:(float)arg1 ;
-(CPTLineStyle *)lineStyle;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(float)barCornerRadius;
-(void)reloadBarFillsInIndexRange:(NSRange)arg1 ;
-(void)reloadBarLineStylesInIndexRange:(NSRange)arg1 ;
-(void)reloadBarFills;
-(void)reloadBarLineStyles;
-(id)fieldIdentifiersForCoordinate:(int)arg1 ;
-(int)coordinateForFieldIdentifier:(unsigned)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(void)reloadDataInIndexRange:(NSRange)arg1 ;
-(void)reloadPlotDataInIndexRange:(NSRange)arg1 ;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1 ;
-(void)setPointingDeviceDownIndex:(unsigned)arg1 ;
-(unsigned)pointingDeviceDownIndex;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setXValues:(CPTMutableNumericData *)arg1 ;
-(void)setHighValues:(CPTMutableNumericData *)arg1 ;
-(void)setLowValues:(CPTMutableNumericData *)arg1 ;
-(CPTMutableNumericData *)xValues;
-(CPTMutableNumericData *)highValues;
-(CPTMutableNumericData *)lowValues;
-(CPTLineStyle *)increaseLineStyle;
-(CPTLineStyle *)decreaseLineStyle;
-(CPTFill *)increaseFill;
-(CPTFill *)decreaseFill;
-(int)plotStyle;
-(float)stickLength;
-(char)showBarBorder;
-(void)setOpenValues:(CPTMutableNumericData *)arg1 ;
-(void)setCloseValues:(CPTMutableNumericData *)arg1 ;
-(void)drawOHLCInContext:(CGContextRef)arg1 atIndex:(unsigned)arg2 x:(float)arg3 open:(float)arg4 close:(float)arg5 high:(float)arg6 low:(float)arg7 alignPoints:(char)arg8 ;
-(void)drawCandleStickInContext:(CGContextRef)arg1 atIndex:(unsigned)arg2 x:(float)arg3 open:(float)arg4 close:(float)arg5 high:(float)arg6 low:(float)arg7 alignPoints:(char)arg8 ;
-(id)increaseLineStyleForIndex:(unsigned)arg1 ;
-(id)increaseFillForIndex:(unsigned)arg1 ;
-(id)decreaseLineStyleForIndex:(unsigned)arg1 ;
-(id)decreaseFillForIndex:(unsigned)arg1 ;
-(id)lineStyleForIndex:(unsigned)arg1 ;
-(void)setPlotStyle:(int)arg1 ;
-(void)setIncreaseLineStyle:(CPTLineStyle *)arg1 ;
-(void)setDecreaseLineStyle:(CPTLineStyle *)arg1 ;
-(void)setIncreaseFill:(CPTFill *)arg1 ;
-(void)setDecreaseFill:(CPTFill *)arg1 ;
-(void)setStickLength:(float)arg1 ;
-(void)setShowBarBorder:(char)arg1 ;
-(CPTMutableNumericData *)openValues;
-(CPTMutableNumericData *)closeValues;
-(NSArray *)increaseFills;
-(void)setIncreaseFills:(NSArray *)arg1 ;
-(NSArray *)decreaseFills;
-(void)setDecreaseFills:(NSArray *)arg1 ;
-(NSArray *)lineStyles;
-(void)setLineStyles:(NSArray *)arg1 ;
-(NSArray *)increaseLineStyles;
-(void)setIncreaseLineStyles:(NSArray *)arg1 ;
-(NSArray *)decreaseLineStyles;
-(void)setDecreaseLineStyles:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
@end

