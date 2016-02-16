/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSMutableURLRequest.h>

@protocol OASignatureProviding;
@class OAConsumer, OAToken, NSString;

@interface OAMutableURLRequest : NSMutableURLRequest {

	OAConsumer* consumer;
	OAToken* token;
	NSString* realm;
	NSString* signature;
	id<OASignatureProviding> signatureProvider;
	NSString* nonce;
	NSString* timestamp;

}

@property (readonly) NSString * signature; 
@property (readonly) NSString * nonce; 
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 ;
-(void)_generateTimestamp;
-(void)_generateNonce;
-(id)_signatureBaseString;
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 nonce:(id)arg6 timestamp:(id)arg7 ;
-(NSString *)nonce;
-(void)prepare;
-(void)dealloc;
-(NSString *)signature;
@end

