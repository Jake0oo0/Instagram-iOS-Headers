/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary, FBURLConnection, UIImageView;

@interface FBProfilePictureView : UIView {

	NSString* _profileID;
	int _pictureCropping;
	NSDictionary* _currentImageQueryParams;
	FBURLConnection* _connection;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * profileID;                                //@synthesize profileID=_profileID - In the implementation block
@property (assign,nonatomic) int pictureCropping;                               //@synthesize pictureCropping=_pictureCropping - In the implementation block
@property (nonatomic,copy) NSDictionary * currentImageQueryParams;              //@synthesize currentImageQueryParams=_currentImageQueryParams - In the implementation block
@property (nonatomic,retain) FBURLConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
-(void)setPictureCropping:(int)arg1 ;
-(int)pictureCropping;
-(id)_generateQueryParams;
-(NSDictionary *)currentImageQueryParams;
-(void)ensureImageViewContentMode;
-(void)setCurrentImageQueryParams:(NSDictionary *)arg1 ;
-(void)refreshImage:(char)arg1 ;
-(id)initWithProfileID:(id)arg1 pictureCropping:(int)arg2 ;
-(void)setProfileID:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)initialize;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(FBURLConnection *)connection;
-(void)setConnection:(FBURLConnection *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)_placeholderImage;
-(NSString *)profileID;
@end

