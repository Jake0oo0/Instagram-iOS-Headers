/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface FBAccessTokenData : NSObject <NSCopying> {

	NSString* _accessToken;
	NSString* _appID;
	NSString* _userID;
	NSArray* _permissions;
	NSArray* _declinedPermissions;
	NSDate* _expirationDate;
	int _loginType;
	NSDate* _refreshDate;
	NSDate* _permissionsRefreshDate;

}

@property (nonatomic,copy,readonly) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * appID;                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * userID;                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSArray * permissions;                         //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray * declinedPermissions;                 //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) int loginType;                             //@synthesize loginType=_loginType - In the implementation block
@property (nonatomic,copy) NSDate * refreshDate;                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,copy) NSDate * permissionsRefreshDate;               //@synthesize permissionsRefreshDate=_permissionsRefreshDate - In the implementation block
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(int)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9 ;
+(id)createTokenFromFacebookURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6 appID:(id)arg7 ;
+(id)createTokenFromDictionary:(id)arg1 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(int)arg4 refreshDate:(id)arg5 ;
-(void)setUserID:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(int)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9 ;
-(char)isEqualToAccessTokenData:(id)arg1 ;
-(void)setDeclinedPermissions:(NSArray *)arg1 ;
-(void)setRefreshDate:(NSDate *)arg1 ;
-(void)setPermissionsRefreshDate:(NSDate *)arg1 ;
-(NSArray *)declinedPermissions;
-(NSDate *)refreshDate;
-(NSDate *)permissionsRefreshDate;
-(int)loginType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)userID;
-(NSDate *)expirationDate;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
-(NSString *)accessToken;
-(NSString *)appID;
@end

