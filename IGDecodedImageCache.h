/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IGLRUCache, NSMapTable, NSObject;

@interface IGDecodedImageCache : NSObject {

	IGLRUCache* _cache;
	NSMapTable* _weakTrackingMapTable;
	NSObject*<OS_dispatch_queue> _mapTableAccessQueue;

}

@property (nonatomic,readonly) IGLRUCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMapTable * weakTrackingMapTable;                           //@synthesize weakTrackingMapTable=_weakTrackingMapTable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapTableAccessQueue;              //@synthesize mapTableAccessQueue=_mapTableAccessQueue - In the implementation block
+(id)sharedDecodedImageCache;
+(int)defaultCostLimit;
-(void)saveImage:(id)arg1 dataLength:(id)arg2 forURL:(id)arg3 ;
-(void)removeImageForURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapTableAccessQueue;
-(NSMapTable *)weakTrackingMapTable;
-(void)setMapTableAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dataLengthForURL:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
-(id)init;
-(void)removeAllImages;
-(IGLRUCache *)cache;
-(void)setTotalCostLimit:(int)arg1 ;
@end

