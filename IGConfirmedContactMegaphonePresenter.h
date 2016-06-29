
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate, IGGenericMegaphoneLogger;
@class IGGenericMegaphoneViewV2, NSString;

@interface IGConfirmedContactMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGConfirmPhoneNumberViewControllerDelegate, IGMegaphonePresenterProtocol> {

	id<IGMegaphonePresenterDelegate> _delegate;
	IGGenericMegaphoneViewV2* _megaphoneView;
	id<IGGenericMegaphoneLogger> _logger;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) IGGenericMegaphoneViewV2 * megaphoneView;                    //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                          //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)buttonActionFromString:(id)arg1 ;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(IGGenericMegaphoneViewV2 *)megaphoneView;
-(id)initWithMegaphone:(id)arg1 logger:(id)arg2 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2 ;
-(id<IGGenericMegaphoneLogger>)logger;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(id<IGMegaphonePresenterDelegate>)delegate;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

