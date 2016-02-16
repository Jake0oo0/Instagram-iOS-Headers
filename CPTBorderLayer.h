/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTBorderedLayer;

@interface CPTBorderLayer : CPTLayer {

	CPTBorderedLayer* maskedLayer;

}

@property (nonatomic,retain) CPTBorderedLayer * maskedLayer; 
-(id)sublayersExcludedFromAutomaticLayout;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(CPTBorderedLayer *)maskedLayer;
-(void)setMaskedLayer:(CPTBorderedLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
@end

