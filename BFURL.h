/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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
+(id)URLForRenderBackToReferrerBarURL:(id)arg1 ;
+(id)queryParametersForURL:(id)arg1 ;
+(id)decodeURLString:(id)arg1 ;
+(id)URLWithURL:(id)arg1 ;
+(id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BFAppLink *)appLinkReferer;
-(id)initWithURL:(id)arg1 forOpenInboundURL:(char)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(char)arg4 ;
-(NSDictionary *)targetQueryParameters;
-(NSDictionary *)appLinkData;
-(NSDictionary *)appLinkExtras;
-(NSDictionary *)inputQueryParameters;
-(NSURL *)inputURL;
-(NSURL *)targetURL;
@end

