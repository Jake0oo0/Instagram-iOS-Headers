
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlot.h>

@class CPTFill, CPTLineStyle, NSArray, CPTMutableNumericData;

@interface CPTRangePlot : CPTPlot {

	CPTFill* areaFill;
	CPTLineStyle* areaBorderLineStyle;
	CPTLineStyle* barLineStyle;
	float barWidth;
	float gapHeight;
	float gapWidth;
	unsigned pointingDeviceDownIndex;

}

@property (nonatomic,copy) NSArray * xValues; 
@property (nonatomic,copy) NSArray * yValues; 
@property (nonatomic,copy) CPTMutableNumericData * highValues; 
@property (nonatomic,copy) CPTMutableNumericData * lowValues; 
@property (nonatomic,copy) CPTMutableNumericData * leftValues; 
@property (nonatomic,copy) CPTMutableNumericData * rightValues; 
@property (nonatomic,copy) NSArray * barLineStyles; 
@property (assign,nonatomic) unsigned pointingDeviceDownIndex; 
@property (nonatomic,copy) CPTLineStyle * barLineStyle; 
@property (assign,nonatomic) float barWidth; 
@property (assign,nonatomic) float gapHeight; 
@property (assign,nonatomic) float gapWidth; 
@property (nonatomic,copy) CPTFill * areaFill; 
@property (nonatomic,copy) CPTLineStyle * areaBorderLineStyle; 
+(char)needsDisplayForKey:(id)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(void)reloadBarLineStylesInIndexRange:(NSRange)arg1 ;
-(id)barLineStyleForIndex:(unsigned)arg1 ;
-(void)reloadBarLineStyles;
-(NSArray *)barLineStyles;
-(void)setBarLineStyles:(NSArray *)arg1 ;
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
-(CPTLineStyle *)barLineStyle;
-(float)gapHeight;
-(CPTFill *)areaFill;
-(CPTLineStyle *)areaBorderLineStyle;
-(void)setXValues:(NSArray *)arg1 ;
-(void)setYValues:(NSArray *)arg1 ;
-(void)setHighValues:(CPTMutableNumericData *)arg1 ;
-(void)setLowValues:(CPTMutableNumericData *)arg1 ;
-(void)setLeftValues:(CPTMutableNumericData *)arg1 ;
-(void)setRightValues:(CPTMutableNumericData *)arg1 ;
-(void)calculatePointsToDraw:(char*)arg1 numberOfPoints:(unsigned)arg2 forPlotSpace:(id)arg3 includeVisiblePointsOnly:(char)arg4 ;
-(void)calculateViewPoints:(CGPointError*)arg1 withDrawPointFlags:(char*)arg2 numberOfPoints:(unsigned)arg3 ;
-(void)alignViewPointsToUserSpace:(CGPointError*)arg1 withContent:(CGContextRef)arg2 drawPointFlags:(char*)arg3 numberOfPoints:(unsigned)arg4 ;
-(int)extremeDrawnPointIndexForFlags:(char*)arg1 numberOfPoints:(unsigned)arg2 extremeNumIsLowerBound:(char)arg3 ;
-(void)drawRangeInContext:(CGContextRef)arg1 lineStyle:(id)arg2 viewPoint:(CGPointError*)arg3 halfGapSize:(CGSize)arg4 halfBarWidth:(float)arg5 alignPoints:(char)arg6 ;
-(void)setBarLineStyle:(CPTLineStyle *)arg1 ;
-(void)setAreaFill:(CPTFill *)arg1 ;
-(void)setAreaBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)setGapHeight:(float)arg1 ;
-(NSArray *)xValues;
-(NSArray *)yValues;
-(CPTMutableNumericData *)highValues;
-(CPTMutableNumericData *)lowValues;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CPTMutableNumericData *)leftValues;
-(CPTMutableNumericData *)rightValues;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
-(void)setGapWidth:(float)arg1 ;
-(float)gapWidth;
@end

