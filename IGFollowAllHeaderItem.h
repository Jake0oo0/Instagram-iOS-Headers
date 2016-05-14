/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDKDiffable.h>

@class NSArray;

@interface IGFollowAllHeaderItem : NSObject <IGDKDiffable> {

	int _type;
	NSArray* _userIDs;

}

@property (nonatomic,readonly) int type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userIDs;              //@synthesize userIDs=_userIDs - In the implementation block
-(id)diffIdentifier;
-(id)initWithType:(int)arg1 userIDs:(id)arg2 ;
-(NSArray *)userIDs;
-(int)type;
@end

