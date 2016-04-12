/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate;
@class IGGenericMegaphoneView, NSString;

@interface IGFavoritesMegaphonePresenter : NSObject <IGGenericMegaphoneViewDelegate, IGMegaphonePresenterProtocol> {

	char _megaphoneSeen;
	IGGenericMegaphoneView* _megaphoneView;
	unsigned _displaySource;
	id<IGMegaphonePresenterDelegate> _delegate;

}

@property (nonatomic,readonly) IGGenericMegaphoneView * megaphoneView;                        //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) unsigned displaySource;                                        //@synthesize displaySource=_displaySource - In the implementation block
@property (nonatomic,__weak,readonly) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                              //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newFavoritesMegaphone;
+(char)shouldShowFavoritesMegaphone;
-(IGGenericMegaphoneView *)megaphoneView;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(unsigned)displaySource;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(void)logWasSeen;
-(id)initWithMegaphone:(id)arg1 displaySource:(unsigned)arg2 delegate:(id)arg3 ;
-(void)logDismissed;
-(id<IGMegaphonePresenterDelegate>)delegate;
-(void)logEvent:(id)arg1 ;
@end

