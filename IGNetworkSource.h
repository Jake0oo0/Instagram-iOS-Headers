

@protocol IGNetworkSourceDelegate, IGNetworkParser, OS_dispatch_queue;
@class NSObject, NSString, NSDictionary, IGRequest;

@interface IGNetworkSource : NSObject {

	char _secure;
	char _cancelsPreviousRequest;
	char _loading;
	id<IGNetworkSourceDelegate> _delegate;
	id<IGNetworkParser> _parser;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _fetchPath;
	unsigned _fetchType;
	NSDictionary* _constantParameters;
	NSObject* _stateMutext;
	IGRequest* _previousRequest;
	NSString* _nextMaxID;

}

@property (nonatomic,__weak,readonly) id<IGNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGNetworkParser> parser;                               //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * fetchPath;                                //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,readonly) unsigned fetchType;                                       //@synthesize fetchType=_fetchType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constantParameters;                        //@synthesize constantParameters=_constantParameters - In the implementation block
@property (getter=isSecure,nonatomic,readonly) char secure;                              //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) char cancelsPreviousRequest;                              //@synthesize cancelsPreviousRequest=_cancelsPreviousRequest - In the implementation block
@property (nonatomic,retain) NSObject * stateMutext;                                     //@synthesize stateMutext=_stateMutext - In the implementation block
@property (nonatomic,retain) IGRequest * previousRequest;                                //@synthesize previousRequest=_previousRequest - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * nextMaxID;                                         //@synthesize nextMaxID=_nextMaxID - In the implementation block
+(void)appendTopAggregatorOverride:(id)arg1 ;
-(void)setNextMaxID:(NSString *)arg1 ;
-(NSString *)nextMaxID;
-(NSString *)fetchPath;
-(id)initWithDelegate:(id)arg1 parser:(id)arg2 delegateQueue:(id)arg3 fetchPath:(id)arg4 fetchType:(unsigned)arg5 constantParameters:(id)arg6 secure:(char)arg7 cancelsPreviousRequest:(char)arg8 ;
-(void)fetchWithParameters:(id)arg1 ;
-(void)fetchMoreWithParameters:(id)arg1 ;
-(void)fetchMore;
-(char)isMoreAvailable;
-(void)fetchWithParameters:(id)arg1 isLoadMore:(char)arg2 ;
-(id)appendParameters:(id)arg1 withMaxID:(id)arg2 ;
-(char)cancelsPreviousRequest;
-(IGRequest *)previousRequest;
-(id)requestWithParameters:(id)arg1 ;
-(NSObject *)stateMutext;
-(void)setPreviousRequest:(IGRequest *)arg1 ;
-(void)updateWithResponse:(id)arg1 ;
-(void)handleSuccessObject:(id)arg1 isLoadMore:(char)arg2 ;
-(void)handleFailure:(id)arg1 ;
-(NSDictionary *)constantParameters;
-(id)fetchURL;
-(id)parametersWithParameters:(id)arg1 ;
-(void)setStateMutext:(NSObject *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<IGNetworkParser>)parser;
-(unsigned)fetchType;
-(void)cancel;
-(id)init;
-(id<IGNetworkSourceDelegate>)delegate;
-(char)isSecure;
-(char)isLoading;
-(void)fetch;
-(void)setLoading:(char)arg1 ;
@end

