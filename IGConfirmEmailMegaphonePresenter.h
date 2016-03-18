
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate, IGGenericMegaphoneLogger;
@class IGGenericMegaphoneViewV2;

@interface IGConfirmEmailMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	char _megaphoneSeen;
	id<IGMegaphonePresenterDelegate> _delegate;
	IGGenericMegaphoneViewV2* _megaphoneView;
	id<IGGenericMegaphoneLogger> _logger;
	unsigned _displaySource;

}

@property (assign,nonatomic,__weak) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGGenericMegaphoneViewV2 * megaphoneView;                    //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) id<IGGenericMegaphoneLogger> logger;                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) unsigned displaySource;                                      //@synthesize displaySource=_displaySource - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                            //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
+(unsigned)buttonActionFromString:(id)arg1 ;
-(IGGenericMegaphoneViewV2 *)megaphoneView;
-(unsigned)displaySource;
-(id)initWithMegaphone:(id)arg1 displaySource:(unsigned)arg2 ;
-(id)viewForMegaphone;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)didConfirmEmail:(id)arg1 ;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(id<IGGenericMegaphoneLogger>)logger;
-(void)setDelegate:(id<IGMegaphonePresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

