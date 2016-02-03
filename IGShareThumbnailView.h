/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:14 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGShareThumbnailView : UIView {

	NSArray* _photoViews;
	float _thumbnailWidth;
	float _headerPadding;

}

@property (nonatomic,retain) NSArray * photoViews;              //@synthesize photoViews=_photoViews - In the implementation block
@property (assign,nonatomic) float thumbnailWidth;              //@synthesize thumbnailWidth=_thumbnailWidth - In the implementation block
@property (assign,nonatomic) float headerPadding;               //@synthesize headerPadding=_headerPadding - In the implementation block
-(NSArray *)photoViews;
-(CGRect)frameForViewAtColumn:(unsigned)arg1 atRow:(unsigned)arg2 ;
-(float)headerPadding;
-(void)setHeaderPadding:(float)arg1 ;
-(void)setPhotoViews:(NSArray *)arg1 ;
-(void)setThumbnailWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)thumbnailWidth;
@end

