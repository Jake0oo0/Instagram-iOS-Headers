
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTInvalidating.h>

@protocol RCTBridgeDelegate;
@class NSURL, NSDictionary, RCTRedBox, RCTAccessibilityManager, RCTDevMenu, RCTUIManager, RCTImageLoader, RCTImageStoreManager, RCTNetworking, NSArray, RCTEventDispatcher, NSString;

@interface RCTBridge : NSObject <RCTInvalidating> {

	NSURL* _delegateBundleURL;
	NSURL* _bundleURL;
	Class _executorClass;
	id<RCTBridgeDelegate> _delegate;
	NSDictionary* _launchOptions;
	CFDictionaryRef _flowIDMap;
	RCTBridge* _batchedBridge;
	/*^block*/id _moduleProvider;
	long long _flowID;

}

@property (nonatomic,readonly) RCTRedBox * redBox; 
@property (nonatomic,readonly) RCTAccessibilityManager * accessibilityManager; 
@property (nonatomic,readonly) RCTDevMenu * devMenu; 
@property (nonatomic,readonly) RCTUIManager * uiManager; 
@property (nonatomic,readonly) RCTImageLoader * imageLoader; 
@property (nonatomic,readonly) RCTImageStoreManager * imageStoreManager; 
@property (nonatomic,readonly) RCTNetworking * networking; 
@property (nonatomic,copy,readonly) NSArray * moduleClasses; 
@property (nonatomic,retain) NSURL * bundleURL;                                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) Class executorClass;                                           //@synthesize executorClass=_executorClass - In the implementation block
@property (nonatomic,__weak,readonly) id<RCTBridgeDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RCTEventDispatcher * eventDispatcher; 
@property (nonatomic,copy,readonly) NSDictionary * launchOptions;                           //@synthesize launchOptions=_launchOptions - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (assign,nonatomic) long long flowID;                                              //@synthesize flowID=_flowID - In the implementation block
@property (assign,nonatomic) CFDictionaryRef flowIDMap;                                     //@synthesize flowIDMap=_flowIDMap - In the implementation block
@property (retain) RCTBridge * batchedBridge;                                               //@synthesize batchedBridge=_batchedBridge - In the implementation block
@property (nonatomic,copy,readonly) id moduleProvider;                                      //@synthesize moduleProvider=_moduleProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCurrentBridge:(id)arg1 ;
+(id)currentBridge;
+(void)initialize;
-(RCTUIManager *)uiManager;
-(RCTEventDispatcher *)eventDispatcher;
-(id)moduleProvider;
-(id)initWithBundleURL:(id)arg1 moduleProvider:(/*^block*/id)arg2 launchOptions:(id)arg3 ;
-(Class)executorClass;
-(void)setExecutorClass:(Class)arg1 ;
-(NSArray *)moduleClasses;
-(id)moduleForName:(id)arg1 ;
-(char)moduleIsInitialized:(Class)arg1 ;
-(void)bindKeys;
-(char)isBatchActive;
-(long long)flowID;
-(void)setFlowID:(long long)arg1 ;
-(CFDictionaryRef)flowIDMap;
-(void)setFlowIDMap:(CFDictionaryRef)arg1 ;
-(void)createBatchedBridge;
-(void)setBatchedBridge:(RCTBridge *)arg1 ;
-(id)initWithDelegate:(id)arg1 launchOptions:(id)arg2 ;
-(id)modulesConformingToProtocol:(id)arg1 ;
-(void)enqueueJSCall:(id)arg1 args:(id)arg2 ;
-(void)enqueueCallback:(id)arg1 args:(id)arg2 ;
-(RCTBridge *)batchedBridge;
-(id)moduleForClass:(Class)arg1 ;
-(RCTAccessibilityManager *)accessibilityManager;
-(RCTDevMenu *)devMenu;
-(RCTRedBox *)redBox;
-(RCTImageLoader *)imageLoader;
-(RCTImageStoreManager *)imageStoreManager;
-(RCTNetworking *)networking;
-(NSDictionary *)launchOptions;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id<RCTBridgeDelegate>)delegate;
-(void)invalidate;
-(char)isValid;
-(NSURL *)bundleURL;
-(char)isLoading;
-(void)setUp;
-(void)setBundleURL:(NSURL *)arg1 ;
@end

