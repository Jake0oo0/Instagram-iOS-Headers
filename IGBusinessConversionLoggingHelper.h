
#import <Instagram/IGNavigationControllerDelegate.h>

@class NSString;

@interface IGBusinessConversionLoggingHelper : NSObject <IGNavigationControllerDelegate> {

	NSString* _entrypoint;
	NSString* _waterfallID;

}

@property (nonatomic,copy) NSString * entrypoint;                   //@synthesize entrypoint=_entrypoint - In the implementation block
@property (nonatomic,copy) NSString * waterfallID;                  //@synthesize waterfallID=_waterfallID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)waterfallID;
-(void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(char)arg3 ;
-(id)logEvent:(id)arg1 atStep:(id)arg2 ;
-(NSString *)entrypoint;
-(id)logSubmitEvent:(id)arg1 atStep:(id)arg2 withStartPageInfo:(id)arg3 endPageInfo:(id)arg4 ;
-(void)logFlowCancelStep:(id)arg1 ;
-(void)logFlowStart;
-(void)logSubmitSuccessWithStartInfo:(id)arg1 endInfo:(id)arg2 ;
-(void)logSubmitErrorWithStartInfo:(id)arg1 endInfo:(id)arg2 withErrorMessage:(id)arg3 ;
-(void)setEntrypoint:(NSString *)arg1 ;
-(void)setWaterfallID:(NSString *)arg1 ;
-(void)logFlowFinishStep:(id)arg1 ;
-(void)logFlowStartStep:(id)arg1 ;
-(void)logFlowErrorAtStep:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithEntrypoint:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
@end

