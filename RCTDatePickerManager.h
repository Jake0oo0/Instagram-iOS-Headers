
#import <Instagram/RCTViewManager.h>

@interface RCTDatePickerManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_onChange;
+(id)propConfig_date;
+(id)propConfig_minimumDate;
+(id)propConfig_maximumDate;
+(id)propConfig_minuteInterval;
+(id)propConfig_mode;
+(id)propConfig_timeZoneOffsetInMinutes;
+(void)load;
-(id)view;
@end

