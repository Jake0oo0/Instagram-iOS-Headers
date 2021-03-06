
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate, IGGenericMegaphoneLogger;
@class IGGenericMegaphone, IGGenericMegaphoneView, IGGenericMegaphoneViewV2, NSString;

@interface IGGenericMegaphonePresenter : NSObject <IGGenericMegaphoneViewDelegate, IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	id<IGMegaphonePresenterDelegate> _delegate;
	IGGenericMegaphone* _megaphone;
	IGGenericMegaphoneView* _megaphoneView;
	IGGenericMegaphoneViewV2* _megaphoneView2;
	id<IGGenericMegaphoneLogger> _logger;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                              //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphoneView * megaphoneView;                      //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphoneViewV2 * megaphoneView2;                   //@synthesize megaphoneView2=_megaphoneView2 - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGGenericMegaphone *)megaphone;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(IGGenericMegaphoneViewV2 *)megaphoneView2;
-(id)initWithMegaphone:(id)arg1 logger:(id)arg2 ;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(id<IGGenericMegaphoneLogger>)logger;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

