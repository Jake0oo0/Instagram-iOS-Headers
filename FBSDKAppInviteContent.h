
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
-(void)setAppInvitePreviewImageURL:(NSURL *)arg1 ;
-(char)isEqualToAppInviteContent:(id)arg1 ;
-(void)setAppLinkURL:(NSURL *)arg1 ;
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

