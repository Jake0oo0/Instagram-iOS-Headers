/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class PHImageManager, PHImageRequestOptions, UIImageView, UIView, IGGradientView, UILabel, NSNumber;

@interface IGGridViewCell : UICollectionViewCell {

	char _showSelectedOverlay;
	char _inICloud;
	char _isAssetPhoto;
	id _asset;
	PHImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	UIImageView* _imageView;
	UIView* _selectedOverlay;
	int _requestID;
	UIImageView* _inICloudView;
	UIImageView* _slomoView;
	IGGradientView* _gradientView;
	UILabel* _durationLabel;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) id asset;                                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHImageManager * imageManager;                            //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;              //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                     //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic) char showSelectedOverlay;                                 //@synthesize showSelectedOverlay=_showSelectedOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectedOverlay;                                 //@synthesize selectedOverlay=_selectedOverlay - In the implementation block
@property (assign,nonatomic) int requestID;                                            //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) char inICloud;                                            //@synthesize inICloud=_inICloud - In the implementation block
@property (assign,nonatomic) char isAssetPhoto;                                        //@synthesize isAssetPhoto=_isAssetPhoto - In the implementation block
@property (nonatomic,retain) UIImageView * inICloudView;                               //@synthesize inICloudView=_inICloudView - In the implementation block
@property (nonatomic,retain) UIImageView * slomoView;                                  //@synthesize slomoView=_slomoView - In the implementation block
@property (nonatomic,retain) IGGradientView * gradientView;                            //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UILabel * durationLabel;                                  //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,readonly) NSNumber * duration; 
@property (getter=isHighFrameRate,nonatomic,readonly) char highFrameRate; 
-(void)cancelImageRequest;
-(void)setSelectedOverlay:(UIView *)arg1 ;
-(UIView *)selectedOverlay;
-(void)setInICloudView:(UIImageView *)arg1 ;
-(UIImageView *)inICloudView;
-(void)setSlomoView:(UIImageView *)arg1 ;
-(UIImageView *)slomoView;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(UILabel *)durationLabel;
-(void)setShowSelectedOverlay:(char)arg1 ;
-(void)setInICloud:(char)arg1 ;
-(char)usePhotosFramework;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)updateLabelVisibility;
-(char)inICloud;
-(char)isAssetPhoto;
-(char)isHighFrameRate;
-(char)showSelectedOverlay;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(void)setIsAssetPhoto:(char)arg1 ;
-(id)dateFormatter;
-(int)requestID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSNumber *)duration;
-(id)accessibilityLabel;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)imageView;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(CGSize)thumbnailSize;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(PHImageManager *)imageManager;
-(void)setGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)gradientView;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)creationDate;
-(void)setRequestID:(int)arg1 ;
@end

