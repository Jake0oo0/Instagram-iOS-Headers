/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTGraph.h>

@interface CPTXYGraph : CPTGraph {

	int xScaleType;
	int yScaleType;

}

@property (assign,nonatomic) int xScaleType; 
@property (assign,nonatomic) int yScaleType; 
-(id)newPlotSpace;
-(id)newAxisSet;
-(id)initWithFrame:(CGRect)arg1 xScaleType:(int)arg2 yScaleType:(int)arg3 ;
-(int)xScaleType;
-(int)yScaleType;
-(void)setXScaleType:(int)arg1 ;
-(void)setYScaleType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

