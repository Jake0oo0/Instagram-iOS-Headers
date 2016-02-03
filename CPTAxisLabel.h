/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:38 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CPTLayer, NSNumber;

@interface CPTAxisLabel : NSObject <NSCoding> {

	CPTLayer* contentLayer;
	float offset;
	float rotation;
	int alignment;
	NSNumber* tickLocation;

}

@property (nonatomic,retain) CPTLayer * contentLayer; 
@property (assign,nonatomic) float offset; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic) int alignment; 
@property (nonatomic,retain) NSNumber * tickLocation; 
-(void)setContentLayer:(CPTLayer *)arg1 ;
-(id)initWithText:(id)arg1 textStyle:(id)arg2 ;
-(void)setTickLocation:(NSNumber *)arg1 ;
-(NSNumber *)tickLocation;
-(void)positionRelativeToViewPoint:(CGPoint)arg1 forCoordinate:(int)arg2 inDirection:(int)arg3 ;
-(id)initWithContentLayer:(id)arg1 ;
-(void)positionBetweenViewPoint:(CGPoint)arg1 andViewPoint:(CGPoint)arg2 forCoordinate:(int)arg3 inDirection:(int)arg4 ;
-(void)setAlignment:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)alignment;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(CPTLayer *)contentLayer;
@end
