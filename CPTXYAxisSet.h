/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAxisSet.h>

@class CPTXYAxis;

@interface CPTXYAxisSet : CPTAxisSet

@property (nonatomic,readonly) CPTXYAxis * xAxis; 
@property (nonatomic,readonly) CPTXYAxis * yAxis; 
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayers;
-(CPTXYAxis *)yAxis;
-(CPTXYAxis *)xAxis;
@end

