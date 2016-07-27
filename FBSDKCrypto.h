

@class NSData;

@interface FBSDKCrypto : NSObject {

	NSData* _encryptionKeyData;
	NSData* _macKeyData;

}
+(id)randomString:(unsigned)arg1 ;
+(id)makeMasterKey;
+(id)randomBytes:(unsigned)arg1 ;
-(id)initWithMasterKey:(id)arg1 ;
-(id)decrypt:(id)arg1 additionalSignedData:(id)arg2 ;
-(id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3 ;
-(id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2 ;
-(id)encrypt:(id)arg1 additionalDataToSign:(id)arg2 ;
-(void)dealloc;
@end

