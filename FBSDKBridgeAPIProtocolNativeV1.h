/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBSDKBridgeAPIProtocol.h>

@class NSString, UIPasteboard;

@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject <FBSDKBridgeAPIProtocol> {

	char _includeAppIcon;
	NSString* _appScheme;
	unsigned _dataLengthThreshold;
	UIPasteboard* _pasteboard;

}

@property (nonatomic,copy,readonly) NSString * appScheme;                 //@synthesize appScheme=_appScheme - In the implementation block
@property (nonatomic,readonly) unsigned dataLengthThreshold;              //@synthesize dataLengthThreshold=_dataLengthThreshold - In the implementation block
@property (nonatomic,readonly) char includeAppIcon;                       //@synthesize includeAppIcon=_includeAppIcon - In the implementation block
@property (nonatomic,readonly) UIPasteboard * pasteboard;                 //@synthesize pasteboard=_pasteboard - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearData:(id)arg1 fromPasteboardOnApplicationDidBecomeActive:(id)arg2 ;
-(id)initWithAppScheme:(id)arg1 pasteboard:(id)arg2 dataLengthThreshold:(unsigned)arg3 includeAppIcon:(char)arg4 ;
-(id)initWithAppScheme:(id)arg1 ;
-(id)_JSONStringForObject:(id)arg1 enablePasteboard:(char)arg2 error:(id*)arg3 ;
-(id)_bridgeParametersWithActionID:(id)arg1 error:(id*)arg2 ;
-(NSString *)appScheme;
-(id)_errorWithDictionary:(id)arg1 ;
-(id)_appIcon;
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(char*)arg3 error:(id*)arg4 ;
-(unsigned)dataLengthThreshold;
-(char)includeAppIcon;
-(id)init;
-(UIPasteboard *)pasteboard;
@end

