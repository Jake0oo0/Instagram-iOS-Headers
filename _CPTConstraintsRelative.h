/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTConstraints.h>

@interface _CPTConstraintsRelative : CPTConstraints {

	float offset;

}

@property (assign,nonatomic) float offset; 
-(char)isEqualToConstraint:(id)arg1 ;
-(float)positionForLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(id)initWithRelativeOffset:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setOffset:(float)arg1 ;
-(float)offset;
@end

