

@class NSString;

@interface IGKVOHandle : NSObject {

	char _stoppedObserving;
	/*^block*/id _block;
	id _object;
	NSString* _keyPath;

}

@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 object:(id)arg2 keyPath:(id)arg3 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)dealloc;
-(id)object;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving;
@end

