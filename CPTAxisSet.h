/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:00 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class NSArray, CPTLineStyle;

@interface CPTAxisSet : CPTLayer {

	NSArray* axes;
	CPTLineStyle* borderLineStyle;

}

@property (nonatomic,retain) NSArray * axes; 
@property (nonatomic,copy) CPTLineStyle * borderLineStyle; 
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(CPTLineStyle *)borderLineStyle;
-(void)relabelAxes;
-(id)axisForCoordinate:(int)arg1 atIndex:(unsigned)arg2 ;
-(void)setAxes:(NSArray *)arg1 ;
-(void)setBorderLineStyle:(CPTLineStyle *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)display;
-(id)initWithLayer:(id)arg1 ;
-(NSArray *)axes;
@end

