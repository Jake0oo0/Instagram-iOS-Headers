/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:01 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTFill.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTColor;

@interface _CPTFillColor : CPTFill <NSCopying, NSCoding> {

	CPTColor* fillColor;

}

@property (nonatomic,copy) CPTColor * fillColor; 
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)isOpaque;
-(CGColorRef)cgColor;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFillColor:(CPTColor *)arg1 ;
-(CPTColor *)fillColor;
-(id)initWithColor:(id)arg1 ;
@end

