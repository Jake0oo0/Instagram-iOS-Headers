/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/POPAnimatableProperty.h>

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	float threshold;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) id readBlock; 
@property (nonatomic,copy) id writeBlock; 
@property (assign,nonatomic) float threshold; 
-(id)readBlock;
-(id)writeBlock;
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
@end

