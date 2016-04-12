/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:42:02 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface FBSDKAppInviteContent : NSObject <FBSDKCopying, NSSecureCoding> {

	NSURL* _appInvitePreviewImageURL;
	NSURL* _appLinkURL;

}

@property (nonatomic,copy) NSURL * appInvitePreviewImageURL;              //@synthesize appInvitePreviewImageURL=_appInvitePreviewImageURL - In the implementation block
@property (nonatomic,copy) NSURL * appLinkURL;                            //@synthesize appLinkURL=_appLinkURL - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setAppLinkURL:(NSURL *)arg1 ;
-(void)setAppInvitePreviewImageURL:(NSURL *)arg1 ;
-(char)isEqualToAppInviteContent:(id)arg1 ;
-(NSURL *)appLinkURL;
-(NSURL *)appInvitePreviewImageURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(NSURL *)previewImageURL;
@end

