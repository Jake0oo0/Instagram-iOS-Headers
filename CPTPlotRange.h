/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSNumber;

@interface CPTPlotRange : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	char inValueUpdate;
	double locationDouble;
	double lengthDouble;
	SCD_Struct_CP53 locationDecimal;
	SCD_Struct_CP53 lengthDecimal;

}

@property (nonatomic,readonly) NSNumber * location; 
@property (nonatomic,readonly) NSNumber * length; 
@property (nonatomic,readonly) NSNumber * end; 
@property (assign,nonatomic) SCD_Struct_CP53 locationDecimal; 
@property (assign,nonatomic) SCD_Struct_CP53 lengthDecimal; 
@property (nonatomic,readonly) SCD_Struct_CP53 endDecimal; 
@property (assign,nonatomic) double locationDouble; 
@property (assign,nonatomic) double lengthDouble; 
@property (nonatomic,readonly) double endDouble; 
@property (nonatomic,readonly) NSNumber * minLimit; 
@property (nonatomic,readonly) NSNumber * midPoint; 
@property (nonatomic,readonly) NSNumber * maxLimit; 
@property (nonatomic,readonly) SCD_Struct_CP53 minLimitDecimal; 
@property (nonatomic,readonly) SCD_Struct_CP53 midPointDecimal; 
@property (nonatomic,readonly) SCD_Struct_CP53 maxLimitDecimal; 
@property (nonatomic,readonly) double minLimitDouble; 
@property (nonatomic,readonly) double midPointDouble; 
@property (nonatomic,readonly) double maxLimitDouble; 
@property (assign,nonatomic) char inValueUpdate; 
+(id)plotRangeWithLocationDecimal:(SCD_Struct_CP53)arg1 lengthDecimal:(SCD_Struct_CP53)arg2 ;
+(id)plotRangeWithLocation:(id)arg1 length:(id)arg2 ;
-(double)locationDouble;
-(double)lengthDouble;
-(SCD_Struct_CP53)minLimitDecimal;
-(SCD_Struct_CP53)maxLimitDecimal;
-(double)minLimitDouble;
-(double)maxLimitDouble;
-(SCD_Struct_CP53)lengthDecimal;
-(char)containsNumber:(id)arg1 ;
-(char)containsDouble:(double)arg1 ;
-(SCD_Struct_CP53)locationDecimal;
-(void)setLocationDecimal:(SCD_Struct_CP53)arg1 ;
-(void)setLengthDecimal:(SCD_Struct_CP53)arg1 ;
-(int)compareToDecimal:(SCD_Struct_CP53)arg1 ;
-(SCD_Struct_CP53)endDecimal;
-(void)setInValueUpdate:(char)arg1 ;
-(void)setLocationDouble:(double)arg1 ;
-(void)setLengthDouble:(double)arg1 ;
-(id)initWithLocation:(id)arg1 length:(id)arg2 ;
-(id)initWithLocationDecimal:(SCD_Struct_CP53)arg1 lengthDecimal:(SCD_Struct_CP53)arg2 ;
-(char)inValueUpdate;
-(SCD_Struct_CP53)midPointDecimal;
-(int)compareToDouble:(double)arg1 ;
-(char)isEqualToRange:(id)arg1 ;
-(double)endDouble;
-(NSNumber *)minLimit;
-(double)midPointDouble;
-(NSNumber *)maxLimit;
-(int)compareToNumber:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSNumber *)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)end;
-(NSNumber *)location;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)containsRange:(id)arg1 ;
-(id)debugQuickLookObject;
-(NSNumber *)midPoint;
-(char)intersectsRange:(id)arg1 ;
-(char)contains:(SCD_Struct_CP53)arg1 ;
@end

