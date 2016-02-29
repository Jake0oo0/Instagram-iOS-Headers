/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, NSArray;

@interface IGDirectResponseInfo : NSObject <NSCoding> {

	char _forceOverlay;
	char _hideNUXText;
	NSURL* _actionURL;
	NSString* _actionText;
	NSString* _actionHintText;
	int _actionHandler;
	NSString* _actionName;
	NSArray* _appUrls;
	NSArray* _iosLinks;
	NSString* _overlayText;
	NSString* _overlayTitle;
	NSString* _overlaySubtitle;

}

@property (nonatomic,readonly) NSURL * actionURL;                            //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;                   //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionHintText;               //@synthesize actionHintText=_actionHintText - In the implementation block
@property (nonatomic,readonly) int actionHandler;                            //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionName;                   //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appUrls;                       //@synthesize appUrls=_appUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iosLinks;                      //@synthesize iosLinks=_iosLinks - In the implementation block
@property (nonatomic,readonly) char forceOverlay;                            //@synthesize forceOverlay=_forceOverlay - In the implementation block
@property (nonatomic,readonly) char hideNUXText;                             //@synthesize hideNUXText=_hideNUXText - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlayText;                  //@synthesize overlayText=_overlayText - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlayTitle;                 //@synthesize overlayTitle=_overlayTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlaySubtitle;              //@synthesize overlaySubtitle=_overlaySubtitle - In the implementation block
+(char)hasDirectResponseInfo:(id)arg1 ;
-(NSString *)overlayTitle;
-(NSString *)actionText;
-(char)hideNUXText;
-(NSString *)actionHintText;
-(NSString *)overlayText;
-(NSString *)overlaySubtitle;
-(char)forceOverlay;
-(NSURL *)actionURL;
-(NSArray *)iosLinks;
-(NSArray *)appUrls;
-(char)isEqualToDirectResponseInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)actionName;
-(int)actionHandler;
@end

