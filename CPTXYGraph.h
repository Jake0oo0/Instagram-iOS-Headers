/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
