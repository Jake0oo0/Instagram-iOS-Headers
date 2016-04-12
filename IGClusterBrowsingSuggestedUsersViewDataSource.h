/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFindUsersViewDataSource.h>

@class NSArray;

@interface IGClusterBrowsingSuggestedUsersViewDataSource : IGFindUsersViewDataSource {

	NSArray* _parameters;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
-(void)fetchList;
-(void)fetchMore;
-(id)requestWithMaxId:(id)arg1 parameters:(id)arg2 ;
-(id)initWithThumbnailSize:(CGSize)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
@end

