/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:41 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface IGAlertView : UIAlertView <UIAlertViewDelegate> {

	NSString* _cancelButtonTitle;
	NSString* _otherButtonTitle;
	/*^block*/id _cancelBlock;
	/*^block*/id _otherBlock;

}

@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * otherButtonTitle;               //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (nonatomic,copy) id cancelBlock;                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) id otherBlock;                             //@synthesize otherBlock=_otherBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(/*^block*/id)arg5 otherBlock:(/*^block*/id)arg6 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(/*^block*/id)arg5 otherBlock:(/*^block*/id)arg6 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)setOtherBlock:(id)arg1 ;
-(NSString *)otherButtonTitle;
-(id)otherBlock;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
@end

