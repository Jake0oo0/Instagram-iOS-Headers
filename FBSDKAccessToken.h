/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(NSDate *)refreshDate;
-(char)isEqualToAccessToken:(id)arg1 ;
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

