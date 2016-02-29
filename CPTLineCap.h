/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPTLineStyle, CPTFill;

@interface CPTLineCap : NSObject <NSCoding, NSCopying> {

	char usesEvenOddClipRule;
	int lineCapType;
	CPTLineStyle* lineStyle;
	CPTFill* fill;
	const CGPathRef customLineCapPath;
	const CGPathRef cachedLineCapPath;
	CGSize size;

}

@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) int lineCapType; 
@property (nonatomic,retain) CPTLineStyle * lineStyle; 
@property (nonatomic,retain) CPTFill * fill; 
@property (assign,nonatomic) const CGPathRef customLineCapPath; 
@property (assign,nonatomic) char usesEvenOddClipRule; 
@property (assign,nonatomic) const CGPathRef cachedLineCapPath; 
+(id)openArrowPlotLineCap;
+(id)solidArrowPlotLineCap;
+(id)sweptArrowPlotLineCap;
+(id)rectanglePlotLineCap;
+(id)ellipsePlotLineCap;
+(id)diamondPlotLineCap;
+(id)pentagonPlotLineCap;
+(id)hexagonPlotLineCap;
+(id)barPlotLineCap;
+(id)crossPlotLineCap;
+(id)snowPlotLineCap;
+(id)customLineCapWithPath:(CGPathRef)arg1 ;
+(id)lineCap;
-(int)lineCapType;
-(CPTLineStyle *)lineStyle;
-(const CGPathRef)customLineCapPath;
-(char)usesEvenOddClipRule;
-(void)setCachedLineCapPath:(const CGPathRef)arg1 ;
-(const CGPathRef)newLineCapPath;
-(void)setLineCapType:(int)arg1 ;
-(void)setCustomLineCapPath:(const CGPathRef)arg1 ;
-(void)setUsesEvenOddClipRule:(char)arg1 ;
-(void)setLineStyle:(CPTLineStyle *)arg1 ;
-(const CGPathRef)cachedLineCapPath;
-(void)renderAsVectorInContext:(CGContextRef)arg1 atPoint:(CGPoint)arg2 inDirection:(CGPoint)arg3 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPTFill *)fill;
-(void)setSize:(CGSize)arg1 ;
-(id)debugQuickLookObject;
-(void)setFill:(CPTFill *)arg1 ;
@end

