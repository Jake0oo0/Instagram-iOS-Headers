/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTNumericData.h>

@class NSArray;

@interface CPTMutableNumericData : CPTNumericData

@property (assign,nonatomic) CPTNumericDataType dataType; 
@property (assign,nonatomic) int dataTypeFormat; 
@property (assign,nonatomic) unsigned long sampleBytes; 
@property (assign,nonatomic) long byteOrder; 
@property (nonatomic,readonly) void* mutableBytes; 
@property (nonatomic,copy) NSArray * shape; 
-(void)convertToType:(int)arg1 sampleBytes:(unsigned long)arg2 byteOrder:(long)arg3 ;
-(void)setDataTypeFormat:(int)arg1 ;
-(void)setSampleBytes:(unsigned long)arg1 ;
-(void)setByteOrder:(long)arg1 ;
-(void*)mutableSamplePointer:(unsigned)arg1 ;
-(void*)mutableSamplePointerAtIndex:(unsigned)arg1 ;
-(void*)mutableBytes;
@end

