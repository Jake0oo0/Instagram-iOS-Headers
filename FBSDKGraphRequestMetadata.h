/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject {

	FBSDKGraphRequest* _request;
	/*^block*/id _completionHandler;
	NSDictionary* _batchParameters;

}

@property (nonatomic,retain) FBSDKGraphRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * batchParameters;              //@synthesize batchParameters=_batchParameters - In the implementation block
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(NSDictionary *)batchParameters;
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(void)setBatchParameters:(NSDictionary *)arg1 ;
-(id)init;
-(id)description;
-(FBSDKGraphRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRequest:(FBSDKGraphRequest *)arg1 ;
@end

