/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:00 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CPTFill : NSObject <NSCopying, NSCoding>

@property (getter=isOpaque,nonatomic,readonly) char opaque; 
@property (nonatomic,readonly) CGColorRef cgColor; 
+(id)fillWithColor:(id)arg1 ;
+(id)fillWithGradient:(id)arg1 ;
+(id)fillWithImage:(id)arg1 ;
-(void)fillPathInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(CGColorRef)cgColor;
-(void)fillRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithColor:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithGradient:(id)arg1 ;
@end

