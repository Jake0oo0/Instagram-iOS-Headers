/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface IGObjectStore : NSObject {

	NSMapTable* _objects;

}
-(id)objectWithDict:(id)arg1 ;
-(id)storedObjectWithPK:(id)arg1 ;
-(id)objectWithPK:(id)arg1 ;
-(id)objectForObject:(id)arg1 ;
-(id)storedObjectForKey:(id)arg1 ;
-(void)setStoredObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectFromDict:(id)arg1 ;
-(void)removeObjectWithPK:(id)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)allObjects;
-(void)clear;
-(Class)objectClass;
@end

