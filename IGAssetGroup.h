/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:35 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ALAssetsGroup, PHAssetCollection, NSArray, NSString, UIImage;

@interface IGAssetGroup : NSObject {

	ALAssetsGroup* _group;
	PHAssetCollection* _collection;
	NSArray* _allAssets;
	NSArray* _photos;
	NSArray* _videos;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned groupType; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) NSString * name; 
-(id)assetsOfType:(int)arg1 ;
-(id)initWithAssetGroup:(id)arg1 ;
-(void)loadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(int)assetCountForType:(int)arg1 ;
-(unsigned)groupType;
-(NSString *)name;
-(UIImage *)posterImage;
-(id)initWithAssetCollection:(id)arg1 ;
-(NSString *)uniqueID;
@end

