
#import <Instagram/FBSDKURLConnectionDelegate.h>
#import <Instagram/FBSDKGraphErrorRecoveryProcessorDelegate.h>

@protocol FBSDKGraphRequestConnectionDelegate;
@class NSString, NSOperationQueue, FBSDKGraphRequestMetadata, FBSDKGraphErrorRecoveryProcessor, NSHTTPURLResponse, FBSDKURLConnection, NSMutableArray, FBSDKLogger;

@interface FBSDKGraphRequestConnection : NSObject <FBSDKURLConnectionDelegate, FBSDKGraphErrorRecoveryProcessorDelegate> {

	NSString* _overrideVersionPart;
	unsigned _expectingResults;
	NSOperationQueue* _delegateQueue;
	FBSDKGraphRequestMetadata* _recoveringRequestMetadata;
	FBSDKGraphErrorRecoveryProcessor* _errorRecoveryProcessor;
	id<FBSDKGraphRequestConnectionDelegate> _delegate;
	NSHTTPURLResponse* _URLResponse;
	FBSDKURLConnection* _connection;
	NSMutableArray* _requests;
	unsigned _state;
	FBSDKLogger* _logger;
	unsigned long _requestStartTime;
	double _timeout;

}

@property (nonatomic,retain) FBSDKURLConnection * connection;                                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                                            //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) unsigned state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) FBSDKLogger * logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) unsigned long requestStartTime;                                       //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKGraphRequestConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double timeout;                                                       //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain,readonly) NSHTTPURLResponse * URLResponse;                             //@synthesize URLResponse=_URLResponse - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultConnectionTimeout:(double)arg1 ;
+(id)userAgent;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchEntryName:(id)arg3 ;
-(void)overrideVersionPartWith:(id)arg1 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processorDidAttemptRecovery:(id)arg1 didRecover:(char)arg2 error:(id)arg3 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(id)requestWithBatch:(id)arg1 timeout:(double)arg2 ;
-(void)logRequest:(id)arg1 bodyLength:(unsigned)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4 ;
-(void)completeFBSDKURLConnectionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3 ;
-(void)registerTokenToOmitFromLog:(id)arg1 ;
-(id)urlStringForSingleRequest:(id)arg1 forBatch:(char)arg2 ;
-(id)accessTokenWithRequest:(id)arg1 ;
-(void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4 ;
-(char)_shouldWarnOnMissingFieldsParam:(id)arg1 ;
-(void)_validateFieldsParamForGetRequests:(id)arg1 ;
-(void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(char)arg3 logger:(id)arg4 ;
-(void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4 ;
-(id)parseJSONResponse:(id)arg1 error:(id*)arg2 statusCode:(int)arg3 ;
-(void)completeWithResults:(id)arg1 networkError:(id)arg2 ;
-(id)parseJSONOrOtherwise:(id)arg1 error:(id*)arg2 ;
-(id)errorWithCode:(int)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5 ;
-(id)errorFromResult:(id)arg1 request:(id)arg2 ;
-(void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3 canNotifyDelegate:(char)arg4 ;
-(void)processResultDebugDictionary:(id)arg1 ;
-(void)facebookURLConnection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(FBSDKLogger *)logger;
-(void)setLogger:(FBSDKLogger *)arg1 ;
-(double)timeout;
-(void)cancel;
-(void)setDelegate:(id<FBSDKGraphRequestConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<FBSDKGraphRequestConnectionDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)start;
-(FBSDKURLConnection *)connection;
-(void)setConnection:(FBSDKURLConnection *)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(unsigned long)requestStartTime;
-(void)setRequestStartTime:(unsigned long)arg1 ;
@end

