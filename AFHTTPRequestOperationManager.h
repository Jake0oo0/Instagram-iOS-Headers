/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
@property (nonatomic,retain) AFHTTPRequestSerializer*<AFURLRequestSerialization> requestSerializer;                 //@synthesize requestSerializer=_requestSerializer - In the implementation block
@property (nonatomic,retain) AFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char shouldUseCredentialStorage;                                                       //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                                                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) AFSecurityPolicy * securityPolicy;                                                     //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,retain) AFNetworkReachabilityManager * reachabilityManager;                                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
+(id)manager;
-(void)setRequestSerializer:(AFHTTPRequestSerializer*<AFURLRequestSerialization>)arg1 ;
-(AFHTTPRequestSerializer*<AFURLRequestSerialization>)requestSerializer;
-(id)HTTPRequestOperationWithRequest:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)GET:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)HEAD:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(/*^block*/id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(id)PUT:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)PATCH:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)DELETE:(id)arg1 parameters:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)setShouldUseCredentialStorage:(char)arg1 ;
-(void)setSecurityPolicy:(AFSecurityPolicy *)arg1 ;
-(AFSecurityPolicy *)securityPolicy;
-(char)shouldUseCredentialStorage;
-(AFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(void)setResponseSerializer:(AFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
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

