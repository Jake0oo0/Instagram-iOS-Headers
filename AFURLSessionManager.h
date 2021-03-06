
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AFURLResponseSerialization, OS_dispatch_queue, OS_dispatch_group;
@class NSURLSession, NSOperationQueue, AFSecurityPolicy, AFNetworkReachabilityManager, NSObject, NSURLSessionConfiguration, NSMutableDictionary, NSArray, NSString;

@interface AFURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSCoding, NSCopying> {

	NSURLSession* _session;
	NSOperationQueue* _operationQueue;
	id<AFURLResponseSerialization> _responseSerializer;
	AFSecurityPolicy* _securityPolicy;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSURLSessionConfiguration* _sessionConfiguration;
	NSMutableDictionary* _mutableTaskDelegatesKeyedByTaskIdentifier;
	/*^block*/id _sessionDidBecomeInvalid;
	/*^block*/id _sessionDidReceiveAuthenticationChallenge;
	/*^block*/id _taskWillPerformHTTPRedirection;
	/*^block*/id _taskDidReceiveAuthenticationChallenge;
	/*^block*/id _taskNeedNewBodyStream;
	/*^block*/id _taskDidSendBodyData;
	/*^block*/id _taskDidComplete;
	/*^block*/id _dataTaskDidReceiveResponse;
	/*^block*/id _dataTaskDidBecomeDownloadTask;
	/*^block*/id _dataTaskDidReceiveData;
	/*^block*/id _dataTaskWillCacheResponse;
	/*^block*/id _didFinishEventsForBackgroundURLSession;
	/*^block*/id _downloadTaskDidFinishDownloading;
	/*^block*/id _downloadTaskDidWriteData;
	/*^block*/id _downloadTaskDidResume;

}

@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;                             //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableTaskDelegatesKeyedByTaskIdentifier;              //@synthesize mutableTaskDelegatesKeyedByTaskIdentifier=_mutableTaskDelegatesKeyedByTaskIdentifier - In the implementation block
@property (nonatomic,retain) AFNetworkReachabilityManager * reachabilityManager;                           //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,copy) id sessionDidBecomeInvalid;                                                     //@synthesize sessionDidBecomeInvalid=_sessionDidBecomeInvalid - In the implementation block
@property (nonatomic,copy) id sessionDidReceiveAuthenticationChallenge;                                    //@synthesize sessionDidReceiveAuthenticationChallenge=_sessionDidReceiveAuthenticationChallenge - In the implementation block
@property (nonatomic,copy) id taskWillPerformHTTPRedirection;                                              //@synthesize taskWillPerformHTTPRedirection=_taskWillPerformHTTPRedirection - In the implementation block
@property (nonatomic,copy) id taskDidReceiveAuthenticationChallenge;                                       //@synthesize taskDidReceiveAuthenticationChallenge=_taskDidReceiveAuthenticationChallenge - In the implementation block
@property (nonatomic,copy) id taskNeedNewBodyStream;                                                       //@synthesize taskNeedNewBodyStream=_taskNeedNewBodyStream - In the implementation block
@property (nonatomic,copy) id taskDidSendBodyData;                                                         //@synthesize taskDidSendBodyData=_taskDidSendBodyData - In the implementation block
@property (nonatomic,copy) id taskDidComplete;                                                             //@synthesize taskDidComplete=_taskDidComplete - In the implementation block
@property (nonatomic,copy) id dataTaskDidReceiveResponse;                                                  //@synthesize dataTaskDidReceiveResponse=_dataTaskDidReceiveResponse - In the implementation block
@property (nonatomic,copy) id dataTaskDidBecomeDownloadTask;                                               //@synthesize dataTaskDidBecomeDownloadTask=_dataTaskDidBecomeDownloadTask - In the implementation block
@property (nonatomic,copy) id dataTaskDidReceiveData;                                                      //@synthesize dataTaskDidReceiveData=_dataTaskDidReceiveData - In the implementation block
@property (nonatomic,copy) id dataTaskWillCacheResponse;                                                   //@synthesize dataTaskWillCacheResponse=_dataTaskWillCacheResponse - In the implementation block
@property (nonatomic,copy) id didFinishEventsForBackgroundURLSession;                                      //@synthesize didFinishEventsForBackgroundURLSession=_didFinishEventsForBackgroundURLSession - In the implementation block
@property (nonatomic,copy) id downloadTaskDidFinishDownloading;                                            //@synthesize downloadTaskDidFinishDownloading=_downloadTaskDidFinishDownloading - In the implementation block
@property (nonatomic,copy) id downloadTaskDidWriteData;                                                    //@synthesize downloadTaskDidWriteData=_downloadTaskDidWriteData - In the implementation block
@property (nonatomic,copy) id downloadTaskDidResume;                                                       //@synthesize downloadTaskDidResume=_downloadTaskDidResume - In the implementation block
@property (nonatomic,retain) id<AFURLResponseSerialization> responseSerializer;                            //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) AFSecurityPolicy * securityPolicy;                                            //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,readonly) NSArray * tasks; 
@property (nonatomic,readonly) NSArray * dataTasks; 
@property (nonatomic,readonly) NSArray * uploadTasks; 
@property (nonatomic,readonly) NSArray * downloadTasks; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                                 //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;                                 //@synthesize completionGroup=_completionGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AFURLResponseSerialization>)responseSerializer;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(id)downloadTaskDidFinishDownloading;
-(void)setDownloadTaskDidFinishDownloading:(id)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)setResponseSerializer:(id<AFURLResponseSerialization>)arg1 ;
-(void)setMutableTaskDelegatesKeyedByTaskIdentifier:(NSMutableDictionary *)arg1 ;
-(NSArray *)dataTasks;
-(NSArray *)uploadTasks;
-(NSArray *)downloadTasks;
-(id)tasksForKeyPath:(id)arg1 ;
-(NSMutableDictionary *)mutableTaskDelegatesKeyedByTaskIdentifier;
-(id)uploadTaskWithTask:(id)arg1 progress:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)downloadTaskWithTask:(id)arg1 progress:(id*)arg2 destination:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSessionDidBecomeInvalid:(id)arg1 ;
-(void)setSessionDidReceiveAuthenticationChallenge:(id)arg1 ;
-(void)setTaskWillPerformHTTPRedirection:(id)arg1 ;
-(void)setTaskDidReceiveAuthenticationChallenge:(id)arg1 ;
-(void)setTaskDidSendBodyData:(id)arg1 ;
-(void)setTaskDidComplete:(id)arg1 ;
-(void)setDataTaskDidReceiveResponse:(id)arg1 ;
-(void)setDataTaskDidBecomeDownloadTask:(id)arg1 ;
-(void)setDataTaskDidReceiveData:(id)arg1 ;
-(void)setDataTaskWillCacheResponse:(id)arg1 ;
-(void)setDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)setDownloadTaskDidWriteData:(id)arg1 ;
-(void)setDownloadTaskDidResume:(id)arg1 ;
-(id)sessionDidBecomeInvalid;
-(id)sessionDidReceiveAuthenticationChallenge;
-(AFSecurityPolicy *)securityPolicy;
-(id)taskWillPerformHTTPRedirection;
-(id)taskDidReceiveAuthenticationChallenge;
-(id)taskNeedNewBodyStream;
-(id)taskDidSendBodyData;
-(id)taskDidComplete;
-(id)dataTaskDidReceiveResponse;
-(id)dataTaskDidBecomeDownloadTask;
-(id)dataTaskDidReceiveData;
-(id)dataTaskWillCacheResponse;
-(id)didFinishEventsForBackgroundURLSession;
-(id)downloadTaskDidWriteData;
-(id)downloadTaskDidResume;
-(void)invalidateSessionCancelingTasks:(char)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 progress:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 progress:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 progress:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)downloadTaskWithRequest:(id)arg1 progress:(id*)arg2 destination:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)downloadTaskWithResumeData:(id)arg1 progress:(id*)arg2 destination:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSessionDidBecomeInvalidBlock:(/*^block*/id)arg1 ;
-(void)setSessionDidReceiveAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setTaskWillPerformHTTPRedirectionBlock:(/*^block*/id)arg1 ;
-(void)setTaskDidReceiveAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setTaskDidSendBodyDataBlock:(/*^block*/id)arg1 ;
-(void)setTaskDidCompleteBlock:(/*^block*/id)arg1 ;
-(void)setDataTaskDidReceiveResponseBlock:(/*^block*/id)arg1 ;
-(void)setDataTaskDidBecomeDownloadTaskBlock:(/*^block*/id)arg1 ;
-(void)setDataTaskDidReceiveDataBlock:(/*^block*/id)arg1 ;
-(void)setDataTaskWillCacheResponseBlock:(/*^block*/id)arg1 ;
-(void)setDidFinishEventsForBackgroundURLSessionBlock:(/*^block*/id)arg1 ;
-(void)setDownloadTaskDidFinishDownloadingBlock:(/*^block*/id)arg1 ;
-(void)setDownloadTaskDidWriteDataBlock:(/*^block*/id)arg1 ;
-(void)setDownloadTaskDidResumeBlock:(/*^block*/id)arg1 ;
-(void)setSecurityPolicy:(AFSecurityPolicy *)arg1 ;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setTaskNeedNewBodyStream:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(NSURLSession *)session;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(AFNetworkReachabilityManager *)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(NSArray *)tasks;
@end

