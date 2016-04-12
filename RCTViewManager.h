
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTViewManager : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)propConfig_accessibilityLabel;
+(id)propConfig_accessibilityTraits;
+(id)propConfig_backgroundColor;
+(id)propConfig_accessible;
+(id)propConfig_testID;
+(id)propConfig_backfaceVisibility;
+(id)propConfig_opacity;
+(id)propConfig_shadowColor;
+(id)propConfig_shadowOffset;
+(id)propConfig_shadowOpacity;
+(id)propConfig_shadowRadius;
+(id)propConfig_overflow;
+(id)propConfig_shouldRasterizeIOS;
+(id)propConfig_transformMatrix;
+(id)propConfig_pointerEvents;
+(id)propConfig_removeClippedSubviews;
+(id)propConfig_borderRadius;
+(id)propConfig_borderColor;
+(id)propConfig_borderWidth;
+(id)propConfig_borderStyle;
+(id)propConfig_hitSlop;
+(id)propConfig_onAccessibilityTap;
+(id)propConfig_onMagicTap;
+(id)propConfig_borderTopWidth;
+(id)propConfig_borderTopColor;
+(id)propConfig_borderRightWidth;
+(id)propConfig_borderRightColor;
+(id)propConfig_borderBottomWidth;
+(id)propConfig_borderBottomColor;
+(id)propConfig_borderLeftWidth;
+(id)propConfig_borderLeftColor;
+(id)propConfig_borderTopLeftRadius;
+(id)propConfig_borderTopRightRadius;
+(id)propConfig_borderBottomLeftRadius;
+(id)propConfig_borderBottomRightRadius;
+(id)propConfigShadow_backgroundColor;
+(id)propConfigShadow_top;
+(id)propConfigShadow_right;
+(id)propConfigShadow_bottom;
+(id)propConfigShadow_left;
+(id)propConfigShadow_width;
+(id)propConfigShadow_height;
+(id)propConfigShadow_borderTopWidth;
+(id)propConfigShadow_borderRightWidth;
+(id)propConfigShadow_borderBottomWidth;
+(id)propConfigShadow_borderLeftWidth;
+(id)propConfigShadow_borderWidth;
+(id)propConfigShadow_marginTop;
+(id)propConfigShadow_marginRight;
+(id)propConfigShadow_marginBottom;
+(id)propConfigShadow_marginLeft;
+(id)propConfigShadow_marginVertical;
+(id)propConfigShadow_marginHorizontal;
+(id)propConfigShadow_margin;
+(id)propConfigShadow_paddingTop;
+(id)propConfigShadow_paddingRight;
+(id)propConfigShadow_paddingBottom;
+(id)propConfigShadow_paddingLeft;
+(id)propConfigShadow_paddingVertical;
+(id)propConfigShadow_paddingHorizontal;
+(id)propConfigShadow_padding;
+(id)propConfigShadow_flex;
+(id)propConfigShadow_flexDirection;
+(id)propConfigShadow_flexWrap;
+(id)propConfigShadow_justifyContent;
+(id)propConfigShadow_alignItems;
+(id)propConfigShadow_alignSelf;
+(id)propConfigShadow_position;
+(id)propConfigShadow_onLayout;
+(void)load;
-(id)constantsToExport;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(/*^block*/id)uiBlockToAmendWithShadowView:(id)arg1 ;
-(/*^block*/id)uiBlockToAmendWithShadowViewRegistry:(id)arg1 ;
-(id)customDirectEventTypes;
-(id)customBubblingEventTypes;
-(void)set_shouldRasterizeIOS:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_transformMatrix:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_pointerEvents:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_removeClippedSubviews:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderRadius:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderWidth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_hitSlop:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderTopWidth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderTopColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderRightWidth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderRightColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderBottomWidth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderBottomColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderLeftWidth:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderLeftColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderTopLeftRadius:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderTopRightRadius:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderBottomLeftRadius:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_borderBottomRightRadius:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
-(id)shadowView;
-(RCTBridge *)bridge;
@end

