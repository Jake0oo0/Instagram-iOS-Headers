/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectPendingRequestButtonDelegate;
@class NSString;

@interface IGDirectPendingRequestButtons : UIView {

	id<IGDirectPendingRequestButtonDelegate> _delegate;
	NSString* _pendingRequestString;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingRequestButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pendingRequestString;                                         //@synthesize pendingRequestString=_pendingRequestString - In the implementation block
+(id)explanationFont;
+(float)heightForString:(id)arg1 andWidth:(float)arg2 ;
-(void)didTapAcceptButton;
-(void)didTapDenyButton;
-(id)initWithFrame:(CGRect)arg1 andString:(id)arg2 ;
-(NSString *)pendingRequestString;
-(void)setPendingRequestString:(NSString *)arg1 ;
-(void)setDelegate:(id<IGDirectPendingRequestButtonDelegate>)arg1 ;
-(id<IGDirectPendingRequestButtonDelegate>)delegate;
@end

