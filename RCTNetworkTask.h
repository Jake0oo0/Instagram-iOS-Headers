
#import <Instagram/RCTURLRequestDelegate.h>

@protocol RCTURLRequestHandler;
@class NSMutableData, NSURLRequest, NSNumber, NSURLResponse, NSString;

@interface RCTNetworkTask : NSObject <RCTURLRequestDelegate> {

	NSMutableData* _data;
	id<RCTURLRequestHandler> _handler;
	RCTNetworkTask* _selfReference;
	NSURLRequest* _request;
	NSNumber* _requestID;
	id _requestToken;
	NSURLResponse* _response;
	/*^block*/id _completionBlock;
	/*^block*/id _downloadProgressBlock;
	/*^block*/id _incrementalDataBlock;
	/*^block*/id _responseBlock;
	/*^block*/id _uploadProgressBlock;
	int _status;

}

@property (nonatomic,readonly) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSNumber * requestID;                  //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,__weak,readonly) id requestToken;                //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,readonly) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) id completionBlock;                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id downloadProgressBlock;                  //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
@property (nonatomic,copy) id incrementalDataBlock;                   //@synthesize incrementalDataBlock=_incrementalDataBlock - In the implementation block
@property (nonatomic,copy) id responseBlock;                          //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,copy) id uploadProgressBlock;                    //@synthesize uploadProgressBlock=_uploadProgressBlock - In the implementation block
@property (nonatomic,readonly) int status;                            //@synthesize status=_status - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestToken;
-(void)URLRequest:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)URLRequest:(id)arg1 didReceiveData:(id)arg2 ;
-(char)validateRequestToken:(id)arg1 ;
-(void)URLRequest:(id)arg1 didSendDataWithProgress:(long long)arg2 ;
-(id)initWithRequest:(id)arg1 handler:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)incrementalDataBlock;
-(void)setIncrementalDataBlock:(id)arg1 ;
-(id)responseBlock;
-(NSNumber *)requestID;
-(void)cancel;
-(id)init;
-(id)completionBlock;
-(void)invalidate;
-(NSURLRequest *)request;
-(void)start;
-(NSURLResponse *)response;
-(int)status;
-(id)downloadProgressBlock;
-(void)setDownloadProgressBlock:(id)arg1 ;
-(id)uploadProgressBlock;
-(void)setUploadProgressBlock:(id)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
@end

