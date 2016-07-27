
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlot.h>

@class NSNumber, CPTLineStyle, CPTFill, CPTPlotRange, NSArray;

@interface CPTBarPlot : CPTPlot {

	char barWidthsAreInViewCoordinates;
	char barsAreHorizontal;
	char barBasesVary;
	float barCornerRadius;
	float barBaseCornerRadius;
	NSNumber* barOffset;
	NSNumber* barWidth;
	CPTLineStyle* lineStyle;
	CPTFill* fill;
	NSNumber* baseValue;
	CPTPlotRange* plotRange;
	unsigned pointingDeviceDownIndex;

}

@property (nonatomic,copy) NSArray * barLocations; 
@property (nonatomic,copy) NSArray * barTips; 
@property (nonatomic,copy) NSArray * barBases; 
@property (nonatomic,copy) NSArray * barFills; 
@property (nonatomic,copy) NSArray * barLineStyles; 
@property (assign,nonatomic) unsigned pointingDeviceDownIndex; 
@property (assign,nonatomic) char barWidthsAreInViewCoordinates; 
@property (nonatomic,retain) NSNumber * barWidth; 
@property (nonatomic,retain) NSNumber * barOffset; 
@property (assign,nonatomic) float barCornerRadius; 
@property (assign,nonatomic) float barBaseCornerRadius; 
@property (assign,nonatomic) char barsAreHorizontal; 
@property (nonatomic,retain) NSNumber * baseValue; 
@property (assign,nonatomic) char barBasesVary; 
@property (nonatomic,copy) CPTPlotRange * plotRange; 
@property (nonatomic,copy) CPTLineStyle * lineStyle; 
@property (nonatomic,copy) CPTFill * fill; 
+(id)tubularBarPlotWithColor:(id)arg1 horizontalBars:(char)arg2 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(void)setLineStyle:(CPTLineStyle *)arg1 ;
-(void)setBarsAreHorizontal:(char)arg1 ;
-(void)setBarCornerRadius:(float)arg1 ;
-(void)setBarWidthsAreInViewCoordinates:(char)arg1 ;
-(void)setBarOffset:(NSNumber *)arg1 ;
-(CPTLineStyle *)lineStyle;
-(id)plotRangeForCoordinate:(int)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(NSNumber *)barOffset;
-(float)barCornerRadius;
-(float)barBaseCornerRadius;
-(char)barsAreHorizontal;
-(char)barBasesVary;
-(char)barWidthsAreInViewCoordinates;
-(CPTPlotRange *)plotRange;
-(void)reloadBarFillsInIndexRange:(NSRange)arg1 ;
-(void)reloadBarLineStylesInIndexRange:(NSRange)arg1 ;
-(void)setBarBases:(NSArray *)arg1 ;
-(void)setBarTips:(NSArray *)arg1 ;
-(SCD_Struct_CP126)lengthInPlotCoordinates:(SCD_Struct_CP126)arg1 ;
-(void)drawBarInContext:(CGContextRef)arg1 recordIndex:(unsigned)arg2 ;
-(float)lengthInView:(SCD_Struct_CP126)arg1 ;
-(char)barAtRecordIndex:(unsigned)arg1 basePoint:(CGPoint*)arg2 tipPoint:(CGPoint*)arg3 ;
-(CGPathRef)newBarPathWithContext:(CGContextRef)arg1 basePoint:(CGPoint)arg2 tipPoint:(CGPoint)arg3 ;
-(char)barIsVisibleWithBasePoint:(CGPoint)arg1 ;
-(id)barFillForIndex:(unsigned)arg1 ;
-(id)barLineStyleForIndex:(unsigned)arg1 ;
-(double)doubleLengthInPlotCoordinates:(SCD_Struct_CP126)arg1 ;
-(CGPathRef)newBarPathWithContext:(CGContextRef)arg1 recordIndex:(unsigned)arg2 ;
-(void)reloadBarFills;
-(void)reloadBarLineStyles;
-(id)plotRangeEnclosingBars;
-(NSArray *)barTips;
-(NSArray *)barBases;
-(NSArray *)barLocations;
-(void)setBarLocations:(NSArray *)arg1 ;
-(NSArray *)barFills;
-(void)setBarFills:(NSArray *)arg1 ;
-(NSArray *)barLineStyles;
-(void)setBarLineStyles:(NSArray *)arg1 ;
-(void)setBarBaseCornerRadius:(float)arg1 ;
-(void)setBarBasesVary:(char)arg1 ;
-(id)fieldIdentifiersForCoordinate:(int)arg1 ;
-(int)coordinateForFieldIdentifier:(unsigned)arg1 ;
-(void)setPlotRange:(CPTPlotRange *)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(unsigned)numberOfLegendEntries;
-(id)titleForLegendEntryAtIndex:(unsigned)arg1 ;
-(id)attributedTitleForLegendEntryAtIndex:(unsigned)arg1 ;
-(void)reloadDataInIndexRange:(NSRange)arg1 ;
-(void)reloadPlotDataInIndexRange:(NSRange)arg1 ;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1 ;
-(void)setPointingDeviceDownIndex:(unsigned)arg1 ;
-(unsigned)pointingDeviceDownIndex;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setBaseValue:(NSNumber *)arg1 ;
-(NSNumber *)baseValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CPTFill *)fill;
-(id)initWithLayer:(id)arg1 ;
-(void)setBarWidth:(NSNumber *)arg1 ;
-(NSNumber *)barWidth;
-(void)setFill:(CPTFill *)arg1 ;
@end

