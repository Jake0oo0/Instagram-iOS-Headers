/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:55 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/GTMLogFilter.h>

@class NSIndexSet, NSString;

@interface GTMLogAllowedLevelFilter : NSObject <GTMLogFilter> {

	NSIndexSet* allowedLevels_;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)filterAllowsMessage:(id)arg1 level:(int)arg2 ;
-(id)initWithAllowedLevels:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

