/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

