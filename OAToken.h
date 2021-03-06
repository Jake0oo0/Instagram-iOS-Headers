
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSMutableDictionary, NSDate, NSDictionary;

@interface OAToken : NSObject <NSCoding> {

	NSString* key;
	NSString* secret;
	NSString* session;
	NSNumber* duration;
	NSMutableDictionary* attributes;
	NSDate* created;
	char renewable;
	char forRenewal;
	NSString* verifier;

}

@property (retain) NSString * key; 
@property (retain) NSString * secret; 
@property (retain) NSString * session; 
@property (retain) NSNumber * duration; 
@property (retain) NSString * verifier; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (getter=isForRenewal) char forRenewal; 
+(id)durationWithString:(id)arg1 ;
+(id)attributesWithString:(id)arg1 ;
+(id)loadSetting:(id)arg1 provider:(id)arg2 prefix:(id)arg3 ;
+(void)saveSetting:(id)arg1 object:(id)arg2 provider:(id)arg3 prefix:(id)arg4 ;
+(id)settingsKey:(id)arg1 provider:(id)arg2 prefix:(id)arg3 ;
+(void)removeFromUserDefaultsWithServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(id)initWithKey:(id)arg1 secret:(id)arg2 ;
-(id)initWithHTTPResponseBody:(id)arg1 ;
-(id)initWithKey:(id)arg1 secret:(id)arg2 session:(id)arg3 duration:(id)arg4 attributes:(id)arg5 created:(id)arg6 renewable:(char)arg7 ;
-(void)setVerifier:(NSString *)arg1 ;
-(NSString *)verifier;
-(char)isForRenewal;
-(id)attributeString;
-(char)isEqualToToken:(id)arg1 ;
-(void)setDurationWithString:(id)arg1 ;
-(id)attribute:(id)arg1 ;
-(void)setAttributesWithString:(id)arg1 ;
-(id)initWithUserDefaultsUsingServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(int)storeInUserDefaultsWithServiceProviderName:(id)arg1 prefix:(id)arg2 ;
-(char)isRenewable;
-(void)setForRenewal:(char)arg1 ;
-(char)hasAttributes;
-(NSString *)session;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSNumber *)duration;
-(NSString *)key;
-(void)setDuration:(NSNumber *)arg1 ;
-(char)isValid;
-(void)setAttribute:(id)arg1 value:(id)arg2 ;
-(id)parameters;
-(void)setKey:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)hasExpired;
-(void)setSession:(NSString *)arg1 ;
-(NSString *)secret;
-(void)setSecret:(NSString *)arg1 ;
@end

