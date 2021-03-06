
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol FBSDKURLConnectionDelegate;
@class NSURLConnection, NSMutableData, NSURLResponse, NSString;

@interface FBSDKURLConnection : NSObject <NSURLConnectionDataDelegate> {

	id<FBSDKURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	/*^block*/id _handler;
	NSURLResponse* _response;
	unsigned long _requestStartTime;
	unsigned _loggerSerialNumber;

}

@property (nonatomic,retain) NSURLConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                    //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long requestStartTime;                              //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) unsigned loggerSerialNumber;                               //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKURLConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)loggerSerialNumber;
-(void)invokeHandler:(/*^block*/id)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 response:(id)arg2 responseData:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<FBSDKURLConnectionDelegate>)arg1 ;
-(id)init;
-(id<FBSDKURLConnectionDelegate>)delegate;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)start;
-(NSURLResponse *)response;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(unsigned long)requestStartTime;
-(void)setRequestStartTime:(unsigned long)arg1 ;
@end

