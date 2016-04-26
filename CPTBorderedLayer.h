/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAnnotationHostLayer.h>

@class CPTLineStyle, CPTFill, CPTLayer;

@interface CPTBorderedLayer : CPTAnnotationHostLayer {

	char inLayout;
	CPTLineStyle* borderLineStyle;
	CPTFill* fill;

}

@property (nonatomic,copy) CPTLineStyle * borderLineStyle; 
@property (nonatomic,copy) CPTFill * fill; 
@property (assign,nonatomic) char inLayout; 
@property (nonatomic,readonly) CPTLayer * borderLayer; 
-(CPTLineStyle *)borderLineStyle;
-(void)setBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(void)renderBorderedLayerAsVectorInContext:(CGContextRef)arg1 ;
-(const CGPathRef)maskingPath;
-(void)sublayerMarginLeft:(float*)arg1 top:(float*)arg2 right:(float*)arg3 bottom:(float*)arg4 ;
-(CPTLayer *)borderLayer;
-(void)updateOpacity;
-(void)setMasksToBorder:(char)arg1 ;
-(char)inLayout;
-(const CGPathRef)sublayerMaskingPath;
-(void)setInLayout:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(CPTFill *)fill;
-(void)setTransform:(CATransform3D)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)removeFromSuperlayer;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setShadow:(id)arg1 ;
-(void)setFill:(CPTFill *)arg1 ;
@end

