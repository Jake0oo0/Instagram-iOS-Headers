

@class NSURL, NSDictionary, BFAppLink;

@interface BFURL : NSObject {

	NSURL* _targetURL;
	NSDictionary* _targetQueryParameters;
	NSDictionary* _appLinkData;
	NSDictionary* _appLinkExtras;
	BFAppLink* _appLinkReferer;
	NSURL* _inputURL;
	NSDictionary* _inputQueryParameters;

}

@property (nonatomic,readonly) NSURL * targetURL;                                 //@synthesize targetURL=_targetURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * targetQueryParameters;              //@synthesize targetQueryParameters=_targetQueryParameters - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkData;                        //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,readonly) NSDictionary * appLinkExtras;                      //@synthesize appLinkExtras=_appLinkExtras - In the implementation block
@property (nonatomic,readonly) BFAppLink * appLinkReferer;                        //@synthesize appLinkReferer=_appLinkReferer - In the implementation block
@property (nonatomic,readonly) NSURL * inputURL;                                  //@synthesize inputURL=_inputURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputQueryParameters;               //@synthesize inputQueryParameters=_inputQueryParameters - In the implementation block
+(id)URLWithURL:(id)arg1 ;
+(id)URLForRenderBackToReferrerBarURL:(id)arg1 ;
+(id)queryParametersForURL:(id)arg1 ;
+(id)decodeURLString:(id)arg1 ;
+(id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2 ;
-(NSDictionary *)appLinkExtras;
-(NSDictionary *)appLinkData;
-(BFAppLink *)appLinkReferer;
-(id)initWithURL:(id)arg1 forOpenInboundURL:(char)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(char)arg4 ;
-(NSDictionary *)targetQueryParameters;
-(NSDictionary *)inputQueryParameters;
-(NSURL *)inputURL;
-(NSURL *)targetURL;
@end

