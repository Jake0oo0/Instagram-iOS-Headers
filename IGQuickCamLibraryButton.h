/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:13 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@protocol IGQuickCamInputLibraryAsset;
@class PHImageRequestOptions, UIImageView;

@interface IGQuickCamLibraryButton : IGTapButton {

	id<IGQuickCamInputLibraryAsset> _asset;
	PHImageRequestOptions* _imageRequestOptions;
	UIImageView* _thumbnailView;
	int _requestID;

}

@property (nonatomic,retain) id<IGQuickCamInputLibraryAsset> asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;              //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) int requestID;                                            //@synthesize requestID=_requestID - In the implementation block
-(void)cancelImageRequest;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(int)requestID;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(id<IGQuickCamInputLibraryAsset>)asset;
-(void)setAsset:(id<IGQuickCamInputLibraryAsset>)arg1 ;
-(void)setRequestID:(int)arg1 ;
@end

