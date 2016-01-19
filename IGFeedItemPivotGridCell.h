/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGThumbnailsGridViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGFeedItemPivotGridCellDelegate;
@class IGExploreSectionTextHeader, IGThumbnailsGridView, UIViewController, IGCoreTextView, UIView, IGFeedItemPivotGridCellDataSource, IGFeedItem, NSString;

@interface IGFeedItemPivotGridCell : UICollectionViewCell <IGThumbnailsGridViewDelegate, UICollectionViewDelegate> {

	IGExploreSectionTextHeader* _headerView;
	IGThumbnailsGridView* _thumbnailGridView;
	UIViewController* _baseController;
	IGCoreTextView* _showMoreActionView;
	UIView* _upperSeparator;
	UIView* _lowerSeparator;
	IGFeedItemPivotGridCellDataSource* _datasource;
	IGFeedItem* _post;
	id<IGFeedItemPivotGridCellDelegate> _delegate;

}

@property (nonatomic,retain) IGFeedItem * post;                                                //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPivotGridCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styledStringForShowMore;
+(float)heightForWidth:(float)arg1 feedItem:(id)arg2 ;
-(IGFeedItem *)post;
-(void)setPost:(IGFeedItem *)arg1 ;
-(void)setupCellWithItem:(id)arg1 underController:(id)arg2 ;
-(void)didTapThumbnailAtIndex:(unsigned)arg1 ;
-(void)onTapSeeMore;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPivotGridCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPivotGridCellDelegate>)delegate;
-(void)prepareForReuse;
@end

