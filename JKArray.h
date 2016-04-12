/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:59 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSMutableArray.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface JKArray : NSMutableArray <NSCopying, NSMutableCopying, NSFastEnumeration> {

	id* objects;
	unsigned count;
	unsigned capacity;
	unsigned mutations;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IG4*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

