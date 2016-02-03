/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IGQEExperimentUserGroup : NSObject {

	NSString* _name;
	NSDictionary* _parameters;
	int _experimentType;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) int experimentType;                     //@synthesize experimentType=_experimentType - In the implementation block
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(int)experimentType;
-(id)initWithName:(id)arg1 parameters:(id)arg2 experimentType:(int)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)parameters;
@end

