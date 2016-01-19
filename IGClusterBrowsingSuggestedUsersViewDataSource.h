/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:53 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

