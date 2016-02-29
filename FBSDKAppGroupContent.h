/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDKAppGroupContent : NSObject <FBSDKCopying, NSSecureCoding> {

	NSString* _groupDescription;
	NSString* _name;
	unsigned _privacy;

}

@property (nonatomic,copy) NSString * groupDescription;              //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned privacy;                       //@synthesize privacy=_privacy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)groupDescription;
-(unsigned)privacy;
-(char)isEqualToAppGroupContent:(id)arg1 ;
-(void)setGroupDescription:(NSString *)arg1 ;
-(void)setPrivacy:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

