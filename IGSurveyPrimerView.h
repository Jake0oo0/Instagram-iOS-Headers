/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGSurveryPrimerViewDelegate;
@interface IGSurveyPrimerView : UIView {

	id<IGSurveryPrimerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGSurveryPrimerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)labelTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGSurveryPrimerViewDelegate>)arg1 ;
-(id<IGSurveryPrimerViewDelegate>)delegate;
@end

