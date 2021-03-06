

@class NSMutableDictionary, FBSDKAccessToken, NSSet, NSDictionary;

@interface FBSDKLoginManagerLoginResult : NSObject {

	NSMutableDictionary* _mutableLoggingExtras;
	char _isCancelled;
	char _isSkipped;
	FBSDKAccessToken* _token;
	NSSet* _grantedPermissions;
	NSSet* _declinedPermissions;

}

@property (nonatomic,readonly) NSDictionary * loggingExtras; 
@property (assign,nonatomic) char isSkipped;                              //@synthesize isSkipped=_isSkipped - In the implementation block
@property (nonatomic,copy) FBSDKAccessToken * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) char isCancelled;                          //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy) NSSet * grantedPermissions;                    //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSSet * declinedPermissions;                   //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
-(NSDictionary *)loggingExtras;
-(NSSet *)declinedPermissions;
-(id)initWithToken:(id)arg1 isCancelled:(char)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)addLoggingExtra:(id)arg1 forKey:(id)arg2 ;
-(void)setIsSkipped:(char)arg1 ;
-(void)setDeclinedPermissions:(NSSet *)arg1 ;
-(char)isSkipped;
-(id)init;
-(char)isCancelled;
-(FBSDKAccessToken *)token;
-(void)setToken:(FBSDKAccessToken *)arg1 ;
-(NSSet *)grantedPermissions;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
@end

