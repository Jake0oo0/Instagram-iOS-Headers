/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTConstraints.h>

@interface _CPTConstraintsFixed : CPTConstraints {

	char isFixedToLower;
	float offset;

}

@property (assign,nonatomic) float offset; 
@property (assign,nonatomic) char isFixedToLower; 
-(id)initWithLowerOffset:(float)arg1 ;
-(id)initWithUpperOffset:(float)arg1 ;
-(char)isEqualToConstraint:(id)arg1 ;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(char)isFixedToLower;
-(void)setIsFixedToLower:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setOffset:(float)arg1 ;
-(float)offset;
@end

