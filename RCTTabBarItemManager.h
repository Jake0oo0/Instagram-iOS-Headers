
#import <Instagram/RCTViewManager.h>

@interface RCTTabBarItemManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_onPress;
+(id)propConfig_title;
+(id)propConfig_badge;
+(id)propConfig_renderAsOriginal;
+(id)propConfig_selected;
+(id)propConfig_icon;
+(id)propConfig_selectedIcon;
+(id)propConfig_systemIcon;
+(void)load;
-(void)set_title:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
@end

