/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue, AFHTTPRequestOperationManager, AFNetworkReachabilityManager, NSString, NSURL;

@interface IGService : NSObject {

	NSOperationQueue* _jsonParsingQueue;
	AFHTTPRequestOperationManager* _client;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSString* _APIRequestUserAgent;
	NSString* _webViewUserAgent;
	NSString* _appName;
	NSURL* _baseURL;
	NSString* _capabilitiesString;

}

@property (nonatomic,readonly) AFHTTPRequestOperationManager * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) AFNetworkReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,readonly) NSString * APIRequestUserAgent;                                  //@synthesize APIRequestUserAgent=_APIRequestUserAgent - In the implementation block
@property (nonatomic,readonly) NSString * webViewUserAgent;                                     //@synthesize webViewUserAgent=_webViewUserAgent - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSString * capabilitiesString;                                   //@synthesize capabilitiesString=_capabilitiesString - In the implementation block
+(id)signedGETParameterStringFromDictionary:(id)arg1 ;
+(char)errorIsNetworkError:(id)arg1 ;
+(void)configureWithAppName:(id)arg1 baseURL:(id)arg2 capabilitiesString:(id)arg3 ;
+(id)signedPOSTParametersFromDictionary:(id)arg1 includeIDs:(char)arg2 ;
+(id)sharedService;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(void)startAPIRequest:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)startRawRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)startJSONRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)postRequestErrorNotification:(id)arg1 ;
-(id)reachabilityString;
-(void)handleHeaders:(id)arg1 ;
-(void)handleSystemMessages:(id)arg1 ;
-(void)handleAPIRequestFailure:(id)arg1 withReponseDictionary:(id)arg2 error:(id)arg3 ;
-(void)handleAPIRequestSuccess:(id)arg1 withReponseDictionary:(id)arg2 ;
-(id)errorStringFromResponse:(id)arg1 ;
-(id)errorStringsFromObject:(id)arg1 ;
-(void)handleSystemMessage:(id)arg1 ;
-(void)startSynchronousAPIRequest:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(NSString *)webViewUserAgent;
-(NSString *)APIRequestUserAgent;
-(id)instagramUserAgentForAppName:(id)arg1 ;
-(id)systemWebViewUserAgent;
-(id)initWithAppName:(id)arg1 baseURL:(id)arg2 capabilitiesString:(id)arg3 ;
-(void)enableHighRequestConcurrency;
-(char)tuneDownHighRequestConcurrency;
-(void)setNormalRequestConcurrency;
-(void)setLowRequestConcurrency;
-(NSString *)capabilitiesString;
-(NSString *)appName;
-(NSURL *)baseURL;
-(char)isNetworkReachable;
-(AFHTTPRequestOperationManager *)client;
@end

