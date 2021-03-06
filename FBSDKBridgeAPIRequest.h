
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>

@protocol FBSDKBridgeAPIProtocol;
@class NSString, NSDictionary;

@interface FBSDKBridgeAPIRequest : NSObject <FBSDKCopying> {

	NSString* _actionID;
	NSString* _methodName;
	NSString* _methodVersion;
	NSDictionary* _parameters;
	unsigned _protocolType;
	NSString* _scheme;
	NSDictionary* _userInfo;
	id<FBSDKBridgeAPIProtocol> _protocol;

}

@property (nonatomic,readonly) id<FBSDKBridgeAPIProtocol> protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionID;                         //@synthesize actionID=_actionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * methodName;                       //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy,readonly) NSString * methodVersion;                    //@synthesize methodVersion=_methodVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                   //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned protocolType;                            //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,copy,readonly) NSString * scheme;                           //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bridgeAPIRequestWithProtocolType:(unsigned)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 userInfo:(id)arg6 ;
+(id)_protocolForType:(unsigned)arg1 scheme:(id)arg2 ;
+(id)protocolMap;
-(id)requestURL:(id*)arg1 ;
-(NSString *)methodName;
-(id)initWithProtocol:(id)arg1 protocolType:(unsigned)arg2 scheme:(id)arg3 methodName:(id)arg4 methodVersion:(id)arg5 parameters:(id)arg6 userInfo:(id)arg7 ;
-(NSString *)methodVersion;
-(unsigned)protocolType;
-(id)init;
-(NSString *)scheme;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSDictionary *)parameters;
-(id<FBSDKBridgeAPIProtocol>)protocol;
-(NSString *)actionID;
@end

