/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGActionSheetDelegate.h>

@protocol IGTwitterProfilePictureDelegate;
@class NSString;

@interface IGTwitterProfilePicHandler : NSObject <IGActionSheetDelegate> {

	id<IGTwitterProfilePictureDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<IGTwitterProfilePictureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(id<IGTwitterProfilePictureDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

