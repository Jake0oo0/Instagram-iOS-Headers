/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface IGDirectInboxAction : NSObject {

	NSString* _title;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	/*^block*/id _tapBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) id tapBlock;                       //@synthesize tapBlock=_tapBlock - In the implementation block
-(id)tapBlock;
-(id)initWithTitle:(id)arg1 andBackgroundColor:(id)arg2 andTextColor:(id)arg3 andTapBlock:(/*^block*/id)arg4 ;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
@end

