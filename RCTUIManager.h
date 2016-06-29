
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTInvalidating.h>

@class NSMutableSet, NSMutableArray, RCTLayoutAnimation, NSMutableDictionary, NSDictionary, RCTBridge, NSString;

@interface RCTUIManager : NSObject <RCTBridgeModule, RCTInvalidating> {

	NSMutableSet* _rootViewTags;
	NSMutableArray* _pendingUIBlocks;
	RCTLayoutAnimation* _layoutAnimation;
	NSMutableDictionary* _shadowViewRegistry;
	NSMutableDictionary* _viewRegistry;
	NSDictionary* _componentDataByName;
	NSMutableSet* _bridgeTransactionListeners;
	int _currentInterfaceOrientation;
	char _unsafeFlushUIChangesBeforeBatchEnds;
	RCTBridge* _bridge;

}

@property (assign) char unsafeFlushUIChangesBeforeBatchEnds;                          //@synthesize unsafeFlushUIChangesBeforeBatchEnds=_unsafeFlushUIChangesBeforeBatchEnds - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__7290;
+(id)__rct_export__8281;
+(id)__rct_export__8512;
+(id)__rct_export__8723;
+(id)__rct_export__9034;
+(id)__rct_export__9715;
+(id)__rct_export__10186;
+(id)__rct_export__10307;
+(id)__rct_export__10418;
+(id)__rct_export__10499;
+(id)__rct_export__107210;
+(id)__rct_export__117011;
+(id)__rct_export__120412;
+(id)__rct_export__126313;
+(id)__rct_export__127914;
+(id)__rct_export__129515;
+(id)__rct_export__134116;
+(id)__rct_export__141017;
+(id)__rct_export__142018;
+(id)__rct_export__150619;
+(id)JSResponder;
+(void)load;
-(id)viewForReactTag:(id)arg1 ;
-(id)constantsToExport;
-(void)batchDidComplete;
-(void)partialBatchDidFlush;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)allocateRootTag;
-(void)didReceiveNewContentSizeMultiplier;
-(void)interfaceOrientationWillChange:(id)arg1 ;
-(void)_amendPendingUIBlocksWithStylePropagationUpdateForShadowView:(id)arg1 ;
-(void)flushUIBlocks;
-(void)manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 ;
-(void)_purgeChildren:(id)arg1 fromRegistry:(id)arg2 ;
-(void)_manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 registry:(id)arg7 ;
-(id)_childrenToRemoveFromContainer:(id)arg1 atIndices:(id)arg2 ;
-(void)_removeChildren:(id)arg1 fromContainer:(id)arg2 permanent:(char)arg3 ;
-(char)unsafeFlushUIChangesBeforeBatchEnds;
-(void)_layoutAndMount;
-(/*^block*/id)uiBlockWithLayoutUpdateForRootView:(id)arg1 ;
-(id)shadowViewRegistry;
-(id)viewRegistry;
-(void)registerRootView:(id)arg1 withSizeFlexibility:(int)arg2 ;
-(void)setFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)setIntrinsicContentSize:(CGSize)arg1 forView:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 forView:(id)arg2 ;
-(void)removeSubviewsFromContainerWithID:(id)arg1 ;
-(void)removeRootView:(id)arg1 ;
-(void)replaceExistingNonRootView:(id)arg1 withView:(id)arg2 ;
-(void)setChildren:(id)arg1 reactTags:(id)arg2 ;
-(void)createView:(id)arg1 viewName:(id)arg2 rootTag:(id)arg3 props:(id)arg4 ;
-(void)updateView:(id)arg1 viewName:(id)arg2 props:(id)arg3 ;
-(void)blur:(id)arg1 ;
-(void)findSubviewIn:(id)arg1 atPoint:(CGPoint)arg2 callback:(/*^block*/id)arg3 ;
-(void)dispatchViewManagerCommand:(id)arg1 commandID:(int)arg2 commandArgs:(id)arg3 ;
-(void)measure:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)measureInWindow:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)measureLayout:(id)arg1 relativeTo:(id)arg2 errorCallback:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 ;
-(void)measureLayoutRelativeToParent:(id)arg1 errorCallback:(/*^block*/id)arg2 callback:(/*^block*/id)arg3 ;
-(void)measureViewsInRect:(CGRect)arg1 parentView:(id)arg2 errorCallback:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 ;
-(void)takeSnapshot:(id)arg1 withOptions:(id)arg2 resolve:(/*^block*/id)arg3 reject:(/*^block*/id)arg4 ;
-(void)setJSResponder:(id)arg1 blockNativeResponder:(char)arg2 ;
-(void)clearJSResponder;
-(void)configureNextLayoutAnimation:(id)arg1 withCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)setUnsafeFlushUIChangesBeforeBatchEnds:(char)arg1 ;
-(void)addUIBlock:(/*^block*/id)arg1 ;
-(void)setNeedsLayout;
-(void)invalidate;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)focus:(id)arg1 ;
@end

