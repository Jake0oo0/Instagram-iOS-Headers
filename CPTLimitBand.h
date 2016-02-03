/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:38 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPTPlotRange, CPTFill;

@interface CPTLimitBand : NSObject <NSCoding, NSCopying> {

	CPTPlotRange* range;
	CPTFill* fill;

}

@property (nonatomic,retain) CPTPlotRange * range; 
@property (nonatomic,retain) CPTFill * fill; 
+(id)limitBandWithRange:(id)arg1 fill:(id)arg2 ;
-(id)initWithRange:(id)arg1 fill:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPTFill *)fill;
-(CPTPlotRange *)range;
-(void)setRange:(CPTPlotRange *)arg1 ;
-(void)setFill:(CPTFill *)arg1 ;
@end
