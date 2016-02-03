/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAnnotationHostLayer.h>

@class CPTGridLineGroup, CPTAxisSet, CPTPlotGroup, CPTAxisLabelGroup, NSArray, CPTFill, CPTLineStyle;

@interface CPTPlotArea : CPTAnnotationHostLayer {

	char updatingLayers;
	CPTGridLineGroup* minorGridLineGroup;
	CPTGridLineGroup* majorGridLineGroup;
	CPTAxisSet* axisSet;
	CPTPlotGroup* plotGroup;
	CPTAxisLabelGroup* axisLabelGroup;
	CPTAxisLabelGroup* axisTitleGroup;
	NSArray* topDownLayerOrder;
	CPTFill* fill;
	int* bottomUpLayerOrder;
	CGPoint touchedPoint;
	SCD_Struct_CP81 widthDecimal;
	SCD_Struct_CP81 heightDecimal;

}

@property (nonatomic,retain) CPTGridLineGroup * minorGridLineGroup; 
@property (nonatomic,retain) CPTGridLineGroup * majorGridLineGroup; 
@property (nonatomic,retain) CPTAxisSet * axisSet; 
@property (nonatomic,retain) CPTPlotGroup * plotGroup; 
@property (nonatomic,retain) CPTAxisLabelGroup * axisLabelGroup; 
@property (nonatomic,retain) CPTAxisLabelGroup * axisTitleGroup; 
@property (nonatomic,retain) NSArray * topDownLayerOrder; 
@property (nonatomic,copy) CPTLineStyle * borderLineStyle; 
@property (nonatomic,copy) CPTFill * fill; 
@property (assign,nonatomic) SCD_Struct_CP81 widthDecimal; 
@property (assign,nonatomic) SCD_Struct_CP81 heightDecimal; 
@property (assign,nonatomic) int* bottomUpLayerOrder; 
@property (assign,getter=isUpdatingLayers,nonatomic) char updatingLayers; 
@property (assign,nonatomic) CGPoint touchedPoint; 
-(id)sublayersExcludedFromAutomaticLayout;
-(void)setAxisSetLayersForType:(int)arg1 ;
-(CPTAxisLabelGroup *)axisLabelGroup;
-(unsigned)sublayerIndexForAxis:(id)arg1 layerType:(int)arg2 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(void)updateAxisSetLayersForType:(int)arg1 ;
-(CPTAxisLabelGroup *)axisTitleGroup;
-(CPTGridLineGroup *)majorGridLineGroup;
-(CPTGridLineGroup *)minorGridLineGroup;
-(CPTAxisSet *)axisSet;
-(CPTLineStyle *)borderLineStyle;
-(void)setBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)setAxisSet:(CPTAxisSet *)arg1 ;
-(CPTPlotGroup *)plotGroup;
-(NSArray *)topDownLayerOrder;
-(void)setTopDownLayerOrder:(NSArray *)arg1 ;
-(void)updateLayerOrder;
-(int*)bottomUpLayerOrder;
-(void)setUpdatingLayers:(char)arg1 ;
-(void)setMinorGridLineGroup:(CPTGridLineGroup *)arg1 ;
-(void)setMajorGridLineGroup:(CPTGridLineGroup *)arg1 ;
-(void)setAxisLabelGroup:(CPTAxisLabelGroup *)arg1 ;
-(void)setAxisTitleGroup:(CPTAxisLabelGroup *)arg1 ;
-(void)setTouchedPoint:(CGPoint)arg1 ;
-(CGPoint)touchedPoint;
-(char)isUpdatingLayers;
-(unsigned)indexForLayerType:(int)arg1 ;
-(void)setWidthDecimal:(SCD_Struct_CP81)arg1 ;
-(void)setHeightDecimal:(SCD_Struct_CP81)arg1 ;
-(void)setBottomUpLayerOrder:(int*)arg1 ;
-(void)setPlotGroup:(CPTPlotGroup *)arg1 ;
-(SCD_Struct_CP81)widthDecimal;
-(SCD_Struct_CP81)heightDecimal;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(CPTFill *)fill;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setGraph:(id)arg1 ;
-(void)setFill:(CPTFill *)arg1 ;
@end

