
#import <Instagram/FBSDKSharing.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class NSString;

@interface FBSDKShareAPI : NSObject <FBSDKSharing> {

	char _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;
	NSString* _message;
	NSString* _graphNode;

}

@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * graphNode;                                    //@synthesize graphNode=_graphNode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                    //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) char shouldFailOnDataError;                            //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)shareWithContent:(id)arg1 delegate:(id)arg2 ;
-(id<FBSDKSharingContent>)shareContent;
-(char)canShare;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(char)_hasPublishActions;
-(char)_stageOpenGraphObject:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)_shareLinkContent:(id)arg1 ;
-(char)_sharePhotoContent:(id)arg1 ;
-(char)_shareVideoContent:(id)arg1 ;
-(char)_shareOpenGraphContent:(id)arg1 ;
-(NSString *)graphNode;
-(void)_addCommonParameters:(id)arg1 content:(id)arg2 ;
-(id)_graphPathWithSuffix:(id)arg1 ;
-(id)_connection:(id)arg1 addRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)_stageOpenGraphValueContainer:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(char)_addEncodedParametersToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4 ;
-(char)_stageValue:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(char)_stagePhoto:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(char)_stageArray:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(char)createOpenGraphObject:(id)arg1 ;
-(void)setGraphNode:(NSString *)arg1 ;
-(char)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(char)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(id)init;
-(id<FBSDKSharingDelegate>)delegate;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(char)share;
@end

