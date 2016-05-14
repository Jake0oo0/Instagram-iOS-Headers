/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewCell.h>

@class IGMediaThumbnailView, NSURL;

@interface IGAdsManagerPreviewAdCell : IGGroupedTableViewCell {

	IGMediaThumbnailView* _thumbnailView;

}

@property (nonatomic,readonly) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) NSURL * imageURL; 
-(CGRect)layoutForThumbnail;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(void)setUp;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

