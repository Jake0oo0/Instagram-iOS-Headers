/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/AFHTTPRequestOperation.h>

@class NSHashTable, NSMapTable, NSDictionary, NSMutableURLRequest;

@interface IGRequest : AFHTTPRequestOperation {

	char _hasFailed;
	char _needsRetry;
	char _isForVideo;
	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	/*^block*/id _headerHandler;
	NSHashTable* _dependants;
	NSMapTable* _dependantPriorities;
	double _uploadDurationInMiliseconds;
	double _downloadDurationInMiliseconds;
	double _serverLatencyInMiliseconds;
	double _totalBytesUp;
	double _totalBytesDown;
	double _requestStartTimestamp;
	double _requestEndTimestamp;
	double _requestProcessedTimestamp;
	double _requestFailedTimestamp;
	double _firstUploadTimestamp;
	double _lastUploadTimestamp;
	double _responseReceivedTimestamp;

}

@property (nonatomic,copy) id successHandler;                                          //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id failureHandler;                                          //@synthesize failureHandler=_failureHandler - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (nonatomic,copy) id headerHandler;                                           //@synthesize headerHandler=_headerHandler - In the implementation block
@property (nonatomic,readonly) double totalRequestTimeInMiliseconds; 
@property (nonatomic,readonly) double requestProcessingTimeInMiliseconds; 
@property (nonatomic,readonly) double uploadDurationInMiliseconds;                     //@synthesize uploadDurationInMiliseconds=_uploadDurationInMiliseconds - In the implementation block
@property (nonatomic,readonly) double downloadDurationInMiliseconds;                   //@synthesize downloadDurationInMiliseconds=_downloadDurationInMiliseconds - In the implementation block
@property (nonatomic,readonly) double serverLatencyInMiliseconds;                      //@synthesize serverLatencyInMiliseconds=_serverLatencyInMiliseconds - In the implementation block
@property (assign,nonatomic) double totalBytesUp;                                      //@synthesize totalBytesUp=_totalBytesUp - In the implementation block
@property (assign,nonatomic) double totalBytesDown;                                    //@synthesize totalBytesDown=_totalBytesDown - In the implementation block
@property (assign,nonatomic) char hasFailed;                                           //@synthesize hasFailed=_hasFailed - In the implementation block
@property (assign,nonatomic) char needsRetry;                                          //@synthesize needsRetry=_needsRetry - In the implementation block
@property (assign,nonatomic) char isForVideo;                                          //@synthesize isForVideo=_isForVideo - In the implementation block
@property (nonatomic,readonly) NSMutableURLRequest * mutableRequest; 
@property (assign,nonatomic) double requestStartTimestamp;                             //@synthesize requestStartTimestamp=_requestStartTimestamp - In the implementation block
@property (assign,nonatomic) double requestEndTimestamp;                               //@synthesize requestEndTimestamp=_requestEndTimestamp - In the implementation block
@property (assign,nonatomic) double requestProcessedTimestamp;                         //@synthesize requestProcessedTimestamp=_requestProcessedTimestamp - In the implementation block
@property (assign,nonatomic) double requestFailedTimestamp;                            //@synthesize requestFailedTimestamp=_requestFailedTimestamp - In the implementation block
@property (assign,nonatomic) double firstUploadTimestamp;                              //@synthesize firstUploadTimestamp=_firstUploadTimestamp - In the implementation block
@property (assign,nonatomic) double lastUploadTimestamp;                               //@synthesize lastUploadTimestamp=_lastUploadTimestamp - In the implementation block
@property (assign,nonatomic) double responseReceivedTimestamp;                         //@synthesize responseReceivedTimestamp=_responseReceivedTimestamp - In the implementation block
@property (nonatomic,retain) NSHashTable * dependants;                                 //@synthesize dependants=_dependants - In the implementation block
@property (nonatomic,retain) NSMapTable * dependantPriorities;                         //@synthesize dependantPriorities=_dependantPriorities - In the implementation block
+(void)sendDirectInboxClearCountRequestWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)requestWithURL:(id)arg1 parameters:(id)arg2 sendAdsHeader:(char)arg3 isFBAppInstalled:(char)arg4 ;
+(id)advertisingID;
+(id)requestFromURLRequest:(id)arg1 timeoutInterval:(double)arg2 ;
+(id)requestFromURLRequest:(id)arg1 ;
-(char)hasFailed;
-(double)totalRequestTimeInMiliseconds;
-(double)serverLatencyInMiliseconds;
-(double)uploadDurationInMiliseconds;
-(double)downloadDurationInMiliseconds;
-(double)totalBytesUp;
-(double)totalBytesDown;
-(double)requestProcessingTimeInMiliseconds;
-(NSMutableURLRequest *)mutableRequest;
-(void)addDependant:(id)arg1 withPriority:(int)arg2 ;
-(void)setHeaderHandler:(id)arg1 ;
-(void)removeDependant:(id)arg1 ;
-(void)setFailureHandler:(id)arg1 ;
-(id)failureHandler;
-(NSHashTable *)dependants;
-(void)reallySetDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setRequestStartTimestamp:(double)arg1 ;
-(double)firstUploadTimestamp;
-(void)setFirstUploadTimestamp:(double)arg1 ;
-(void)setLastUploadTimestamp:(double)arg1 ;
-(void)setTotalBytesUp:(double)arg1 ;
-(void)setRequestEndTimestamp:(double)arg1 ;
-(void)setRequestProcessedTimestamp:(double)arg1 ;
-(void)setRequestFailedTimestamp:(double)arg1 ;
-(double)responseReceivedTimestamp;
-(void)setResponseReceivedTimestamp:(double)arg1 ;
-(void)setTotalBytesDown:(double)arg1 ;
-(NSMapTable *)dependantPriorities;
-(void)setNeedsRetry:(char)arg1 ;
-(double)requestEndTimestamp;
-(double)requestFailedTimestamp;
-(double)requestStartTimestamp;
-(double)requestProcessedTimestamp;
-(double)lastUploadTimestamp;
-(double)serverLatency;
-(id)headerHandler;
-(void)setHasFailed:(char)arg1 ;
-(char)needsRetry;
-(char)isForVideo;
-(void)setIsForVideo:(char)arg1 ;
-(void)setDependants:(NSHashTable *)arg1 ;
-(void)setDependantPriorities:(NSMapTable *)arg1 ;
-(void)notifySuccessWithData:(id)arg1 forURL:(id)arg2 ;
-(void)notifyFailureWithError:(id)arg1 forURL:(id)arg2 ;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(id)successHandler;
-(void)setSuccessHandler:(id)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(double)downloadDuration;
-(double)uploadDuration;
@end

