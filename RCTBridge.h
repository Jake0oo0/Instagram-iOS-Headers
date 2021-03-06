
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTInvalidating.h>

@protocol RCTBridgeDelegate;
@class RCTPerformanceLogger, NSURL, NSDictionary, NSLock, RCTNetworking, RCTImageLoader, RCTImageStoreManager, RCTRedBox, RCTAccessibilityManager, RCTUIManager, RCTDevMenu, NSArray, NSString;

@interface RCTBridge : NSObject <RCTInvalidating> {

	RCTPerformanceLogger* _performanceLogger;
	NSURL* _delegateBundleURL;
	NSURL* _bundleURL;
	Class _executorClass;
	id<RCTBridgeDelegate> _delegate;
	NSDictionary* _launchOptions;
	CFDictionaryRef _flowIDMap;
	NSLock* _flowIDMapLock;
	RCTBridge* _batchedBridge;
	/*^block*/id _moduleProvider;
	long long _flowID;

}

@property (nonatomic,readonly) RCTNetworking * networking; 
@property (nonatomic,readonly) RCTImageLoader * imageLoader; 
@property (nonatomic,readonly) RCTImageStoreManager * imageStoreManager; 
@property (nonatomic,readonly) RCTRedBox * redBox; 
@property (nonatomic,readonly) RCTAccessibilityManager * accessibilityManager; 
@property (nonatomic,readonly) RCTUIManager * uiManager; 
@property (nonatomic,readonly) RCTDevMenu * devMenu; 
@property (assign,nonatomic) long long flowID;                                              //@synthesize flowID=_flowID - In the implementation block
@property (assign,nonatomic) CFDictionaryRef flowIDMap;                                     //@synthesize flowIDMap=_flowIDMap - In the implementation block
@property (nonatomic,retain) NSLock * flowIDMapLock;                                        //@synthesize flowIDMapLock=_flowIDMapLock - In the implementation block
@property (retain) RCTBridge * batchedBridge;                                               //@synthesize batchedBridge=_batchedBridge - In the implementation block
@property (nonatomic,copy,readonly) id moduleProvider;                                      //@synthesize moduleProvider=_moduleProvider - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                             //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moduleClasses; 
@property (nonatomic,retain) Class executorClass;                                           //@synthesize executorClass=_executorClass - In the implementation block
@property (nonatomic,__weak,readonly) id<RCTBridgeDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * launchOptions;                           //@synthesize launchOptions=_launchOptions - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) RCTPerformanceLogger * performanceLogger;                    //@synthesize performanceLogger=_performanceLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentBridge;
+(void)setCurrentBridge:(id)arg1 ;
+(void)initialize;
-(id)initWithDelegate:(id)arg1 launchOptions:(id)arg2 ;
-(RCTUIManager *)uiManager;
-(id)eventDispatcher;
-(RCTPerformanceLogger *)performanceLogger;
-(RCTImageStoreManager *)imageStoreManager;
-(RCTAccessibilityManager *)accessibilityManager;
-(id)modulesConformingToProtocol:(id)arg1 ;
-(id)moduleForClass:(Class)arg1 ;
-(RCTNetworking *)networking;
-(RCTImageLoader *)imageLoader;
-(id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(/*^block*/id)arg3 launchOptions:(id)arg4 ;
-(void)bindKeys;
-(id)moduleForName:(id)arg1 ;
-(char)moduleIsInitialized:(Class)arg1 ;
-(void)createBatchedBridge;
-(void)setBatchedBridge:(RCTBridge *)arg1 ;
-(void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(/*^block*/id)arg4 ;
-(Class)executorClass;
-(void)setExecutorClass:(Class)arg1 ;
-(long long)flowID;
-(void)setFlowID:(long long)arg1 ;
-(CFDictionaryRef)flowIDMap;
-(void)setFlowIDMap:(CFDictionaryRef)arg1 ;
-(NSLock *)flowIDMapLock;
-(void)setFlowIDMapLock:(NSLock *)arg1 ;
-(id)moduleProvider;
-(void)enqueueCallback:(id)arg1 args:(id)arg2 ;
-(RCTBridge *)batchedBridge;
-(id)initWithBundleURL:(id)arg1 moduleProvider:(/*^block*/id)arg2 launchOptions:(id)arg3 ;
-(RCTDevMenu *)devMenu;
-(RCTRedBox *)redBox;
-(void)enqueueJSCall:(id)arg1 args:(id)arg2 ;
-(NSArray *)moduleClasses;
-(char)isBatchActive;
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

