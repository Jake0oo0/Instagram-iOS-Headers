/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTPlotRange.h>

@class NSNumber;

@interface CPTMutablePlotRange : CPTPlotRange

@property (nonatomic,retain) NSNumber * location; 
@property (nonatomic,retain) NSNumber * length; 
@property (assign,nonatomic) SCD_Struct_CP81 locationDecimal; 
@property (assign,nonatomic) SCD_Struct_CP81 lengthDecimal; 
@property (assign,nonatomic) double locationDouble; 
@property (assign,nonatomic) double lengthDouble; 
@property (assign,nonatomic) char inValueUpdate; 
-(void)intersectionPlotRange:(id)arg1 ;
-(void)unionPlotRange:(id)arg1 ;
-(void)expandRangeByFactor:(id)arg1 ;
-(void)shiftLocationToFitInRange:(id)arg1 ;
-(void)shiftEndToFitInRange:(id)arg1 ;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setLocation:(NSNumber *)arg1 ;
@end

