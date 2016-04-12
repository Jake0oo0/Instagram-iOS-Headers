/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGDirectSaveMediaDelegate;
@class NSString;

@interface IGDirectSaveMediaObserver : NSObject <IGMediaRequestDelegate> {

	id<IGDirectSaveMediaDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDirectSaveMediaDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeVideoToCameraRoll:(id)arg1 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)setDelegate:(id<IGDirectSaveMediaDelegate>)arg1 ;
-(id<IGDirectSaveMediaDelegate>)delegate;
@end

