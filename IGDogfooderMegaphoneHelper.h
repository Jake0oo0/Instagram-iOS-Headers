/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>

@protocol IGDogfooderMegaphoneHelperDelegate;
@class NSDate, NSString;

@interface IGDogfooderMegaphoneHelper : NSObject <IGGenericMegaphoneViewDelegate> {

	id<IGDogfooderMegaphoneHelperDelegate> _delegate;
	int _mode;
	NSDate* _buildTime;

}

@property (assign,nonatomic,__weak) id<IGDogfooderMegaphoneHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSDate * buildTime;                                                //@synthesize buildTime=_buildTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
-(void)megaphone:(id)arg1 didTapButton:(id)arg2 ;
-(id)createDogfooderSoftNagMegaphoneViewWithFrame:(CGRect)arg1 displaySource:(id)arg2 ;
-(char)shouldShowDogfooderSoftNagMegaphone;
-(NSDate *)buildTime;
-(double)buildAge;
-(id)megaphoneMessageForUpdate;
-(void)setDelegate:(id<IGDogfooderMegaphoneHelperDelegate>)arg1 ;
-(id)init;
-(id<IGDogfooderMegaphoneHelperDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

