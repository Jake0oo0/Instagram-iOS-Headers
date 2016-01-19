/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSFileManager, NSObject, NSString;

@interface IGCache : NSObject {

	NSCache* _memCache;
	NSFileManager* _fileManager;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSString* _cachePath;
	unsigned _trimmingTask;
	double _lastTrimTime;
	unsigned _diskCapacity;
	unsigned _maxObjectCount;

}

@property (assign,nonatomic) unsigned diskCapacity;                //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned maxObjectCount;              //@synthesize maxObjectCount=_maxObjectCount - In the implementation block
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxObjectCount:(unsigned)arg3 maxInMemoryCount:(unsigned)arg4 ;
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxObjectCount:(unsigned)arg3 maxInMemoryCount:(unsigned)arg4 maxInMemoryCost:(unsigned)arg5 ;
-(void)startBackgroundCacheTrimmingTask;
-(id)pathFromKey:(id)arg1 ;
-(id)io_queue_objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(int)removeExcessFiles;
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxObjectCount:(unsigned)arg3 ;
-(void)objectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsWithDeletionBlock:(/*^block*/id)arg1 ;
-(unsigned)maxObjectCount;
-(void)setMaxObjectCount:(unsigned)arg1 ;
-(void)setDiskCapacity:(unsigned)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)containsKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(unsigned)diskCapacity;
@end

