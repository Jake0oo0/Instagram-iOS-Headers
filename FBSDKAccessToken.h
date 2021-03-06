
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDate;

@interface FBSDKAccessToken : NSObject <FBSDKCopying, NSSecureCoding> {

	NSString* _appID;
	NSSet* _declinedPermissions;
	NSDate* _expirationDate;
	NSSet* _permissions;
	NSDate* _refreshDate;
	NSString* _tokenString;
	NSString* _userID;

}

@property (nonatomic,copy,readonly) NSString * appID;                         //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * declinedPermissions;              //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * permissions;                      //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy,readonly) NSDate * refreshDate;                     //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenString;                   //@synthesize tokenString=_tokenString - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                        //@synthesize userID=_userID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentAccessToken;
+(void)setCurrentAccessToken:(id)arg1 ;
+(void)refreshCurrentAccessToken:(/*^block*/id)arg1 ;
+(char)supportsSecureCoding;
-(char)hasGranted:(id)arg1 ;
-(NSSet *)declinedPermissions;
-(id)initWithTokenString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 appID:(id)arg4 userID:(id)arg5 expirationDate:(id)arg6 refreshDate:(id)arg7 ;
-(char)isEqualToAccessToken:(id)arg1 ;
-(NSDate *)refreshDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)userID;
-(NSSet *)permissions;
-(NSString *)tokenString;
-(NSString *)appID;
@end

