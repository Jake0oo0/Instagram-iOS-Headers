/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableIndexSet;

@interface IGFilterGroup : IGFilter <NSCopying> {

	NSMutableArray* _filters;
	unsigned _surfaceIdx;
	NSMutableIndexSet* _disabledFilters;

}
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)render:(id)arg1 to:(id*)arg2 consumeSource:(char)arg3 ;
-(void)insertFilter:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeLastFilter;
-(void)removeFilterAtIndex:(unsigned)arg1 ;
-(void)setFilterAtIndex:(unsigned)arg1 enabled:(char)arg2 ;
-(char)isFilterAtIndexEnabled:(unsigned)arg1 ;
-(id)firstFilter;
-(id)lastFilter;
-(id)renderByConsumingSource:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)addFilter:(id)arg1 ;
@end

