
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface IGReactI18N : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)constantsToExport;
@end
