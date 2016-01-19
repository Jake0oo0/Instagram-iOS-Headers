/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleStroke : IGPathStyle {

	int _type;
	float _width;
	UIColor* _color;

}

@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float width;                  //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)strokeWithType:(int)arg1 width:(float)arg2 color:(id)arg3 ;
+(id)strokeWithWidth:(float)arg1 color:(id)arg2 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithType:(int)arg1 width:(float)arg2 color:(id)arg3 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(float)width;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(float)arg1 ;
@end

