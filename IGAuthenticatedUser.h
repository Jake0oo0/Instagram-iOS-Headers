/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGAuthenticatedUser : NSObject <NSCoding> {

	char _isPrivate;
	NSString* _pk;
	NSString* _username;
	NSString* _profilePicURL;
	NSString* _fullName;

}

@property (copy) NSString * pk;                         //@synthesize pk=_pk - In the implementation block
@property (copy) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (copy) NSString * profilePicURL;              //@synthesize profilePicURL=_profilePicURL - In the implementation block
@property (copy) NSString * fullName;                   //@synthesize fullName=_fullName - In the implementation block
@property (assign) char isPrivate;                      //@synthesize isPrivate=_isPrivate - In the implementation block
-(id)toDict;
-(void)setPk:(NSString *)arg1 ;
-(void)setProfilePicURL:(NSString *)arg1 ;
-(void)setIsPrivate:(char)arg1 ;
-(NSString *)pk;
-(NSString *)profilePicURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(char)isPrivate;
@end

