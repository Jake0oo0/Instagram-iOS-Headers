
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AFURLRequestSerialization, AFURLResponseSerialization;
@class NSURL, AFHTTPRequestSerializer, AFHTTPResponseSerializer, NSOperationQueue, NSURLCredential, AFSecurityPolicy, AFNetworkReachabilityManager;

@interface AFHTTPRequestOperationManager : NSObject <NSCoding, NSCopying> {

	char _shouldUseCredentialStorage;
	NSURL* _baseURL;
	AFHTTPRequestSerializer*<AFURLRequestSerialization> _requestSerializer;
	AFHTTPResponseSerializer*<AFURLResponseSerialization> _responseSerializer;
	NSOperationQueue* _operationQueue;
	NSURLCredential* _credential;
	AFSecurityPolicy* _securityPolicy;
	AFNetworkReachabilityManager* _reachabilityManager;

}

@property (nonatomic,retain) NSURL * baseURL;                                                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) AFNetworkReachabilityManager * reachabilityManager;                                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) AFHTTPRequestSerializer*<AFURLRequestSerialization> requestSerializer;                 //@synthesize requestSerializer=_requestSerializer - In the implementation block
@property (nonatomic,retain) AFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char shouldUseCredentialStorage;                                                       //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                                                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) AFSecurityPolicy * securityPolicy;                                                     //@synthesize securityPolicy=_securityPolicy - In the implementation block
+(id)manager;
-(void)setRequestSerializer:(AFHTTPRequestSerializer*<AFURLRequestSerialization>)arg1 ;
-(char)shouldUseCredentialStorage;
-(void)setShouldUseCredentialStorage:(char)arg1 ;
-(AFHTTPRequestSerializer*<AFURLRequestSerialization>)requestSerializer;
-(id)HTTPRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)GET:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)HEAD:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)PUT:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)PATCH:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)DELETE:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(AFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(void)setResponseSerializer:(AFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(AFSecurityPolicy *)securityPolicy;
-(void)setSecurityPolicy:(AFSecurityPolicy *)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSURL *)baseURL;
-(NSOperationQueue *)operationQueue;
-(NSURLCredential *)credential;
-(void)setBaseURL:(NSURL *)arg1 ;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(AFNetworkReachabilityManager *)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
@end

