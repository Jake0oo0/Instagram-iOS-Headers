

@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface BFTask : NSObject {

	id _result;
	NSError* _error;
	NSException* _exception;
	char _cancelled;
	char _faulted;
	char _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (getter=isCancelled) char cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isFaulted) char faulted;                            //@synthesize faulted=_faulted - In the implementation block
@property (getter=isCompleted) char completed;                        //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSObject * lock;                         //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                 //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSException * exception; 
+(id)taskWithResult:(id)arg1 ;
+(id)taskForCompletionOfAllTasks:(id)arg1 ;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithException:(id)arg1 ;
+(id)cancelledTask;
+(id)taskForCompletionOfAllTasksWithResults:(id)arg1 ;
+(id)taskWithDelay:(int)arg1 ;
+(id)taskFromExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 ;
-(id)continueWithExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)trySetResult:(id)arg1 ;
-(void)runContinuations;
-(char)trySetError:(id)arg1 ;
-(void)setFaulted:(char)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(id)continueWithExecutor:(id)arg1 withSuccessBlock:(/*^block*/id)arg2 ;
-(void)warnOperationOnMainThread;
-(char)isFaulted;
-(void)waitUntilFinished;
-(NSMutableArray *)callbacks;
-(NSError *)error;
-(void)setException:(NSException *)arg1 ;
-(void)cancel;
-(id)init;
-(id)description;
-(void)setCompleted:(char)arg1 ;
-(char)isCompleted;
-(NSObject *)lock;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
-(void)setCompleted;
-(NSException *)exception;
-(void)setResult:(id)arg1 ;
@end

