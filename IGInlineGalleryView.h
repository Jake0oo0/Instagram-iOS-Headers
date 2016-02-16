/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInlineGalleryTitleBarDelegate.h>

@protocol IGInlineGalleryTitleBar, IGInlineGalleryViewDelegate;
@class UIView, UICollectionView;

@interface IGInlineGalleryView : UIView <IGInlineGalleryTitleBarDelegate> {

	float _photoCellSize;
	UIView*<IGInlineGalleryTitleBar> _titleBar;
	UICollectionView* _collectionView;
	int _state;
	int _style;
	id<IGInlineGalleryViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int style;                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapTitleBar;
-(void)didTapDismiss;
-(void)didTapSeeAll;
-(id)createNewTitleBarForStyle:(int)arg1 ;
-(id)initWithWidth:(float)arg1 delegate:(id)arg2 photoStripHeight:(float)arg3 style:(int)arg4 ;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UICollectionView *)collectionView;
@end

