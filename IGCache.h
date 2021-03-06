

@protocol OS_dispatch_queue;
@class NSCache, IGDiskCache, NSObject;

@interface IGCache : NSObject {

	NSCache* _memCache;
	IGDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _ioQueue;
	unsigned _trimmingTask;
	double _lastTrimTime;
	unsigned _diskCapacity;
	unsigned _maxObjectCount;

}

@property (nonatomic,readonly) unsigned diskCapacity;                //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (nonatomic,readonly) unsigned maxObjectCount;              //@synthesize maxObjectCount=_maxObjectCount - In the implementation block
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxObjectCount:(unsigned)arg3 maxInMemoryCount:(unsigned)arg4 maxInMemoryCost:(unsigned)arg5 ;
-(void)removeAllObjectsWithDeletionBlock:(/*^block*/id)arg1 ;
-(void)objectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)io_queue_objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned)maxObjectCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)containsKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(unsigned)diskCapacity;
@end

