/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class IGUser;

@interface IGAuthUserData : NSObject <NSCoding> {

	IGUser* _user;
	double _timeLastAccessed;

}

@property (assign,nonatomic) double timeLastAccessed;              //@synthesize timeLastAccessed=_timeLastAccessed - In the implementation block
@property (nonatomic,retain) IGUser * user;                        //@synthesize user=_user - In the implementation block
-(void)setTimeLastAccessed:(double)arg1 ;
-(id)initWithUser:(id)arg1 timeLastAccessed:(double)arg2 ;
-(double)timeLastAccessed;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

