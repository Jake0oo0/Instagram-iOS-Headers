/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:38 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSArray;

@interface CPTNumericData : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSData* data;
	NSArray* shape;
	int dataOrder;
	CPTNumericDataType dataType;

}

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned length; 
@property (assign,nonatomic) CPTNumericDataType dataType; 
@property (nonatomic,readonly) int dataTypeFormat; 
@property (nonatomic,readonly) unsigned long sampleBytes; 
@property (nonatomic,readonly) long byteOrder; 
@property (nonatomic,copy) NSArray * shape; 
@property (nonatomic,readonly) unsigned numberOfDimensions; 
@property (nonatomic,readonly) unsigned numberOfSamples; 
@property (assign,nonatomic) int dataOrder; 
+(id)numericDataWithData:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
+(id)numericDataWithData:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 ;
+(id)numericDataWithData:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 ;
+(id)numericDataWithArray:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 ;
+(id)numericDataWithArray:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 ;
+(id)numericDataWithData:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
+(id)numericDataWithArray:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
+(id)numericDataWithArray:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(unsigned)numberOfSamples;
-(unsigned long)sampleBytes;
-(unsigned)numberOfDimensions;
-(unsigned)sampleIndex:(unsigned)arg1 indexList:(void*)arg2 ;
-(id)dataByConvertingToDataType:(CPTNumericDataType)arg1 ;
-(id)dataByConvertingToType:(int)arg1 sampleBytes:(unsigned long)arg2 byteOrder:(long)arg3 ;
-(id)initWithArray:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 ;
-(id)initWithData:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(id)initWithArray:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(id)dataFromArray:(id)arg1 dataType:(CPTNumericDataType)arg2 ;
-(void)commonInitWithData:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(void)setDataOrder:(int)arg1 ;
-(void)swapByteOrderForData:(id)arg1 sampleSize:(unsigned long)arg2 ;
-(void)convertData:(id)arg1 dataType:(CPTNumericDataType*)arg2 toData:(id)arg3 dataType:(CPTNumericDataType*)arg4 ;
-(int)dataTypeFormat;
-(const void*)samplePointer:(unsigned)arg1 ;
-(int)dataOrder;
-(id)initWithData:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 ;
-(id)initWithArray:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 ;
-(id)initWithData:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(id)initWithArray:(id)arg1 dataTypeString:(id)arg2 shape:(id)arg3 dataOrder:(int)arg4 ;
-(long)byteOrder;
-(unsigned)sampleIndex:(unsigned)arg1 ;
-(id)sampleValueAtIndex:(unsigned)arg1 ;
-(const void*)samplePointerAtIndex:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 dataType:(CPTNumericDataType)arg2 shape:(id)arg3 ;
-(id)sampleArray;
-(id)sampleValue:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setShape:(NSArray *)arg1 ;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)shape;
-(void)setDataType:(CPTNumericDataType)arg1 ;
-(CPTNumericDataType)dataType;
@end

