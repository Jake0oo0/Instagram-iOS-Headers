/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:02 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject {

	NSMutableArray* _navStack;

}

@property (nonatomic,retain) NSMutableArray * navStack;              //@synthesize navStack=_navStack - In the implementation block
-(void)pushAnalyticsMetadataForViewController:(id)arg1 ;
-(void)popAnalyticsMetadataForViewController:(id)arg1 ;
-(id)newNavState;
-(id)currentNavEvent;
-(NSMutableArray *)navStack;
-(void)pushNavEvent:(id)arg1 ;
-(id)popNavEvent;
-(void)setNavStack:(NSMutableArray *)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

