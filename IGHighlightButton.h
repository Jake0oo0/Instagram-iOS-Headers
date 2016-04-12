/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol IGHighlightButtonDelegate;
@interface IGHighlightButton : UIButton {

	id<IGHighlightButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGHighlightButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<IGHighlightButtonDelegate>)arg1 ;
-(id<IGHighlightButtonDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
@end

