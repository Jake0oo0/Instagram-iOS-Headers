/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPreviewActionItem.h>

@class NSString;

@interface IGPreviewAction : NSObject <IGPreviewActionItem> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy,readonly) id handler;                     //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
-(id)initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(id)handler;
@end

