

@protocol OS_dispatch_queue, IGVideoRequestDelegate;
#import <Instagram/Instagram-Structs.h>
@class IGRequest, NSMutableArray, NSError, NSObject, NSURL, IGPartialData;

@interface IGVideoRequest : NSObject {

	IGRequest* _request;
	NSMutableArray* _listeners;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _url;
	IGPartialData* _data;
	id<IGVideoRequestDelegate> _delegate;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) IGPartialData * data;                                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)videoResponseHeaderForRange:(NSRange)arg1 totalLength:(long long)arg2 ;
+(NSRange)readRangeForListener:(id)arg1 downloadedLength:(long long)arg2 ;
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5 ;
-(void)downloadAll;
-(void)removeRangedDataListener:(id)arg1 ;
-(void)addRangedDataListener:(id)arg1 ;
-(id)initWithURL:(id)arg1 partialData:(id)arg2 ;
-(void)dataBecomeAvailable;
-(void)endWithError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<IGVideoRequestDelegate>)arg1 ;
-(id<IGVideoRequestDelegate>)delegate;
-(NSURL *)url;
-(id)request;
-(IGPartialData *)data;
-(void)setData:(IGPartialData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadData;
@end

