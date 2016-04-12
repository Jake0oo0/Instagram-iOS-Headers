/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSNumber, NSString;

@interface IGIOSLink : NSObject <NSCoding> {

	NSURL* _deeplinkUri;
	NSURL* _webUri;
	NSNumber* _contentId;
	NSString* _callToActionTitle;
	int _linkType;

}

@property (nonatomic,readonly) NSURL * deeplinkUri;                       //@synthesize deeplinkUri=_deeplinkUri - In the implementation block
@property (nonatomic,readonly) NSURL * webUri;                            //@synthesize webUri=_webUri - In the implementation block
@property (nonatomic,readonly) NSNumber * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) NSString * callToActionTitle;              //@synthesize callToActionTitle=_callToActionTitle - In the implementation block
@property (nonatomic,readonly) int linkType;                              //@synthesize linkType=_linkType - In the implementation block
-(NSURL *)deeplinkUri;
-(NSURL *)webUri;
-(char)isEqualToIOSLink:(id)arg1 ;
-(NSString *)callToActionTitle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)contentId;
-(int)linkType;
@end

