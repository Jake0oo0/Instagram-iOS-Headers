

@interface IGHiddenSearchItemNetworkDataSource : NSObject
+(void)updateRecentHideItems;
+(void)hideUserID:(id)arg1 section:(id)arg2 ;
+(void)hideHashtag:(id)arg1 section:(id)arg2 ;
+(void)hidePlaceID:(id)arg1 section:(id)arg2 ;
+(void)addHiddenItemsWithParameters:(id)arg1 ;
+(void)hideItemID:(id)arg1 section:(id)arg2 item:(id)arg3 ;
@end

