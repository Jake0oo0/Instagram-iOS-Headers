/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

