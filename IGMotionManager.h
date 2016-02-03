/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:10 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface IGMotionManager : NSObject {

	CMMotionManager* _motionManager;
	NSOperationQueue* _gravityQueue;
	char _gravityActive;
	SCD_Struct_IG10 _gravity;

}

@property (getter=isGravityActive,nonatomic,readonly) char gravityActive;              //@synthesize gravityActive=_gravityActive - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG10 gravity;                                  //@synthesize gravity=_gravity - In the implementation block
-(void)stopGravityUpdates;
-(char)isGravityActive;
-(void)startGravityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(SCD_Struct_IG10)gravity;
-(void)setGravity:(SCD_Struct_IG10)arg1 ;
@end

