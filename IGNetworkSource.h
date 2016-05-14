/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGNetworkSourceDelegate, IGNetworkParser, OS_dispatch_queue;
@class NSObject, NSString, NSDictionary, IGRequest;

@interface IGNetworkSource : NSObject {

	char _cancelsPreviousRequest;
	char _loading;
	id<IGNetworkSourceDelegate> _delegate;
	id<IGNetworkParser> _parser;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _fetchPath;
	unsigned _fetchType;
	NSDictionary* _constantParameters;
	IGRequest* _previousRequest;
	NSString* _maxId;

}

@property (nonatomic,retain) IGRequest * previousRequest;                                //@synthesize previousRequest=_previousRequest - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * maxId;                                             //@synthesize maxId=_maxId - In the implementation block
@property (nonatomic,__weak,readonly) id<IGNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGNetworkParser> parser;                               //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * fetchPath;                                //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,readonly) unsigned fetchType;                                       //@synthesize fetchType=_fetchType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constantParameters;                        //@synthesize constantParameters=_constantParameters - In the implementation block
@property (nonatomic,readonly) char cancelsPreviousRequest;                              //@synthesize cancelsPreviousRequest=_cancelsPreviousRequest - In the implementation block
+(void)appendTopAggregatorOverride:(id)arg1 ;
-(NSString *)maxId;
-(id)initWithDelegate:(id)arg1 parser:(id)arg2 fetchPath:(id)arg3 fetchType:(unsigned)arg4 constantParameters:(id)arg5 cancelsPreviousRequest:(char)arg6 ;
-(void)fetchWithParameters:(id)arg1 ;
-(void)fetchMoreWithParameters:(id)arg1 ;
-(char)isMoreAvailable;
-(NSString *)fetchPath;
-(void)fetchMore;
-(void)fetchWithParameters:(id)arg1 isLoadMore:(char)arg2 ;
-(id)appendParameters:(id)arg1 withMaxID:(id)arg2 ;
-(char)cancelsPreviousRequest;
-(IGRequest *)previousRequest;
-(id)requestWithParameters:(id)arg1 ;
-(void)setPreviousRequest:(IGRequest *)arg1 ;
-(void)handleSuccessResponse:(id)arg1 isLoadMore:(char)arg2 ;
-(void)handleFailure:(id)arg1 ;
-(NSDictionary *)constantParameters;
-(id)fetchURL;
-(id)parametersWithParameters:(id)arg1 ;
-(void)setMaxId:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<IGNetworkParser>)parser;
-(unsigned)fetchType;
-(void)cancel;
-(id<IGNetworkSourceDelegate>)delegate;
-(char)isLoading;
-(void)fetch;
-(void)setLoading:(char)arg1 ;
@end

