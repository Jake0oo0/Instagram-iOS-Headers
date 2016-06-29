

@class NSString;

@interface IGDiskCache : NSObject {

	NSString* _cachePath;
	unsigned _trimmingTask;
	double _lastTrimTime;
	NSString* _name;
	unsigned _diskCapacity;
	unsigned _maxFileCount;

}

@property (nonatomic,copy,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned diskCapacity;              //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (nonatomic,readonly) unsigned maxFileCount;              //@synthesize maxFileCount=_maxFileCount - In the implementation block
-(void)_startBackgroundCacheTrimmingTask;
-(unsigned)removeExcessFiles;
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxFileCount:(unsigned)arg3 ;
-(char)containsDataForKey:(id)arg1 ;
-(void)removeAllDataWithDeletionBlock:(/*^block*/id)arg1 ;
-(unsigned)maxFileCount;
-(void)dealloc;
-(NSString *)name;
-(id)dataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
-(unsigned)diskCapacity;
@end

