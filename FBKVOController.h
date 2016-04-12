/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:00 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface FBKVOController : NSObject {

	NSMapTable* _objectInfosMap;
	int _lock;
	id _observer;

}

@property (__weak,readonly) id observer;              //@synthesize observer=_observer - In the implementation block
+(id)controllerWithObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 retainObserved:(char)arg2 ;
-(void)unobserveAll;
-(void)_observe:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 ;
-(void)_unobserveAll;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 action:(SEL)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)unobserve:(id)arg1 keyPath:(id)arg2 ;
-(void)unobserve:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)observer;
-(id)initWithObserver:(id)arg1 ;
@end

