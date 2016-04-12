
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTViewManager.h>

@interface RCTScrollViewManager : RCTViewManager
+(id)moduleName;
+(id)__rct_export__981;
+(id)propConfig_alwaysBounceHorizontal;
+(id)propConfig_alwaysBounceVertical;
+(id)propConfig_bouncesZoom;
+(id)propConfig_canCancelContentTouches;
+(id)propConfig_centerContent;
+(id)propConfig_directionalLockEnabled;
+(id)propConfig_indicatorStyle;
+(id)propConfig_keyboardDismissMode;
+(id)propConfig_maximumZoomScale;
+(id)propConfig_minimumZoomScale;
+(id)propConfig_pagingEnabled;
+(id)propConfig_scrollsToTop;
+(id)propConfig_showsHorizontalScrollIndicator;
+(id)propConfig_showsVerticalScrollIndicator;
+(id)propConfig_stickyHeaderIndices;
+(id)propConfig_scrollEventThrottle;
+(id)propConfig_zoomScale;
+(id)propConfig_scrollIndicatorInsets;
+(id)propConfig_snapToInterval;
+(id)propConfig_snapToAlignment;
+(id)propConfig_contentOffset;
+(id)propConfig_onRefreshStart;
+(id)__rct_export__780;
+(id)__rct_export__1162;
+(id)__rct_export__1343;
+(id)__rct_export__1504;
+(id)propConfig_bounces;
+(id)propConfig_scrollEnabled;
+(id)propConfig_decelerationRate;
+(id)propConfig_contentInset;
+(id)propConfig_automaticallyAdjustContentInsets;
+(void)load;
-(id)customDirectEventTypes;
-(void)getContentSize:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)calculateChildFrames:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)endRefreshing:(id)arg1 ;
-(void)scrollTo:(id)arg1 offsetX:(float)arg2 offsetY:(float)arg3 animated:(char)arg4 ;
-(void)zoomToRect:(id)arg1 withRect:(CGRect)arg2 animated:(char)arg3 ;
-(id)view;
@end

