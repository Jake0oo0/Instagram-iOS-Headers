/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSimpleTableViewCell.h>
#import <Instagram/IGImageViewDelegate.h>

@class NSMutableArray, NSString;

@interface IGPhotoGridCell : IGSimpleTableViewCell <IGImageViewDelegate> {

	char _showsCheckmarks;
	int _layout;
	int _topPadding;
	int _photosCount;
	NSMutableArray* _imageViews;
	NSMutableArray* _imageButtons;
	NSMutableArray* _checkmarks;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageButtons;              //@synthesize imageButtons=_imageButtons - In the implementation block
@property (nonatomic,readonly) NSMutableArray * checkmarks;                //@synthesize checkmarks=_checkmarks - In the implementation block
@property (assign,nonatomic) int photosCount;                              //@synthesize photosCount=_photosCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)photosPerRowForLayout:(int)arg1 ;
+(float)photoMarginForLayout:(int)arg1 ;
+(float)photoSizeForLayout:(int)arg1 ;
+(float)photoPaddingForLayout:(int)arg1 ;
+(float)photoInsetForLayout:(int)arg1 ;
+(CGSize)sizeForLayout:(int)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(char)arg3 topPadding:(int)arg4 photosCount:(int)arg5 ;
-(void)arrangeViewFor3UpExplore;
-(void)arrangeViews;
-(NSMutableArray *)imageButtons;
-(NSMutableArray *)checkmarks;
-(id)initWithReuseIdentifier:(id)arg1 layout:(int)arg2 checkmarks:(char)arg3 ;
-(void)setImageTarget:(id)arg1 action:(SEL)arg2 ;
-(void)hideImage:(char)arg1 atIndex:(int)arg2 ;
-(int)photosCount;
-(void)prepareForReuse;
-(void)setPhotosCount:(int)arg1 ;
-(NSMutableArray *)imageViews;
@end

