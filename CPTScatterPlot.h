
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlot.h>

@class CPTLineStyle, CPTPlotSymbol, CPTFill, NSNumber, NSMutableArray, NSArray;

@interface CPTScatterPlot : CPTPlot {

	char allowSimultaneousSymbolAndPlotSelection;
	char pointingDeviceDownOnLine;
	int interpolation;
	int histogramOption;
	CPTLineStyle* dataLineStyle;
	CPTPlotSymbol* plotSymbol;
	CPTFill* areaFill;
	CPTFill* areaFill2;
	NSNumber* areaBaseValue;
	NSNumber* areaBaseValue2;
	float plotSymbolMarginForHitDetection;
	float plotLineMarginForHitDetection;
	unsigned pointingDeviceDownIndex;
	NSMutableArray* mutableAreaFillBands;

}

@property (nonatomic,copy) NSArray * xValues; 
@property (nonatomic,copy) NSArray * yValues; 
@property (nonatomic,retain) NSArray * plotSymbols; 
@property (assign,nonatomic) unsigned pointingDeviceDownIndex; 
@property (assign,nonatomic) char pointingDeviceDownOnLine; 
@property (nonatomic,retain) NSMutableArray * mutableAreaFillBands; 
@property (nonatomic,retain) NSNumber * areaBaseValue; 
@property (nonatomic,retain) NSNumber * areaBaseValue2; 
@property (assign,nonatomic) int interpolation; 
@property (assign,nonatomic) int histogramOption; 
@property (nonatomic,readonly) NSArray * areaFillBands; 
@property (nonatomic,copy) CPTLineStyle * dataLineStyle; 
@property (nonatomic,copy) CPTPlotSymbol * plotSymbol; 
@property (nonatomic,copy) CPTFill * areaFill; 
@property (nonatomic,copy) CPTFill * areaFill2; 
@property (nonatomic,readonly) const CGPathRef newDataLinePath; 
@property (assign,nonatomic) float plotSymbolMarginForHitDetection; 
@property (assign,nonatomic) float plotLineMarginForHitDetection; 
@property (assign,nonatomic) char allowSimultaneousSymbolAndPlotSelection; 
+(char)needsDisplayForKey:(id)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
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
-(CPTFill *)areaFill;
-(void)setXValues:(NSArray *)arg1 ;
-(void)setYValues:(NSArray *)arg1 ;
-(void)calculateViewPoints:(CGPoint*)arg1 withDrawPointFlags:(char*)arg2 numberOfPoints:(unsigned)arg3 ;
-(void)alignViewPointsToUserSpace:(CGPoint*)arg1 withContent:(CGContextRef)arg2 drawPointFlags:(char*)arg3 numberOfPoints:(unsigned)arg4 ;
-(int)extremeDrawnPointIndexForFlags:(char*)arg1 numberOfPoints:(unsigned)arg2 extremeNumIsLowerBound:(char)arg3 ;
-(void)setAreaFill:(CPTFill *)arg1 ;
-(NSArray *)xValues;
-(NSArray *)yValues;
-(int)interpolation;
-(int)histogramOption;
-(CPTLineStyle *)dataLineStyle;
-(CPTPlotSymbol *)plotSymbol;
-(CPTFill *)areaFill2;
-(NSMutableArray *)mutableAreaFillBands;
-(NSNumber *)areaBaseValue;
-(NSNumber *)areaBaseValue2;
-(float)plotSymbolMarginForHitDetection;
-(float)plotLineMarginForHitDetection;
-(char)allowSimultaneousSymbolAndPlotSelection;
-(void)reloadPlotSymbolsInIndexRange:(NSRange)arg1 ;
-(unsigned)indexOfVisiblePointClosestToPlotAreaPoint:(CGPoint)arg1 ;
-(void)calculatePointsToDraw:(char*)arg1 forPlotSpace:(id)arg2 includeVisiblePointsOnly:(char)arg3 numberOfPoints:(unsigned)arg4 ;
-(NSArray *)plotSymbols;
-(CGPathRef)newDataLinePathForViewPoints:(CGPoint*)arg1 indexRange:(NSRange)arg2 baselineYValue:(float)arg3 ;
-(id)plotSymbolForRecordIndex:(unsigned)arg1 ;
-(CGPathRef)newCurvedDataLinePathForViewPoints:(CGPoint*)arg1 indexRange:(NSRange)arg2 baselineYValue:(float)arg3 ;
-(void)computeControlPoints:(CGPoint*)arg1 points2:(CGPoint*)arg2 forViewPoints:(CGPoint*)arg3 indexRange:(NSRange)arg4 ;
-(void)setMutableAreaFillBands:(NSMutableArray *)arg1 ;
-(void)setPointingDeviceDownOnLine:(char)arg1 ;
-(CGPoint)plotAreaPointOfVisiblePointAtIndex:(unsigned)arg1 ;
-(char)plotWasLineHitByInteractionPoint:(CGPoint)arg1 ;
-(char)pointingDeviceDownOnLine;
-(void)reloadPlotSymbols;
-(const CGPathRef)newDataLinePath;
-(void)addAreaFillBand:(id)arg1 ;
-(void)removeAreaFillBand:(id)arg1 ;
-(void)setHistogramOption:(int)arg1 ;
-(void)setPlotSymbol:(CPTPlotSymbol *)arg1 ;
-(void)setDataLineStyle:(CPTLineStyle *)arg1 ;
-(void)setAreaFill2:(CPTFill *)arg1 ;
-(NSArray *)areaFillBands;
-(void)setAreaBaseValue:(NSNumber *)arg1 ;
-(void)setAreaBaseValue2:(NSNumber *)arg1 ;
-(void)setPlotSymbols:(NSArray *)arg1 ;
-(void)setPlotSymbolMarginForHitDetection:(float)arg1 ;
-(void)setPlotLineMarginForHitDetection:(float)arg1 ;
-(void)setAllowSimultaneousSymbolAndPlotSelection:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInterpolation:(int)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

