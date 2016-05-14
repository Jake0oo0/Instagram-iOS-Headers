/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGFeedItemBusinessCellDelegate;
@class IGFeedItem, UIButton, UIView, CAShapeLayer, NSString;

@interface IGFeedItemBusinessCell : UICollectionViewCell <UIWebViewDelegate> {

	IGFeedItem* _feedItem;
	id<IGFeedItemBusinessCellDelegate> _delegate;
	UIButton* _promoteButton;
	UIButton* _insightsButton;
	UIView* _lineView;
	CAShapeLayer* _circleLayer;

}

@property (nonatomic,retain) UIButton * promoteButton;                                        //@synthesize promoteButton=_promoteButton - In the implementation block
@property (nonatomic,retain) UIButton * insightsButton;                                       //@synthesize insightsButton=_insightsButton - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                               //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * circleLayer;                                      //@synthesize circleLayer=_circleLayer - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemBusinessCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(UIButton *)promoteButton;
-(UIButton *)insightsButton;
-(CAShapeLayer *)circleLayer;
-(void)initializePromoteButton;
-(void)initializeInsightsButton;
-(void)initializeCircleLayer;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setPromoteButton:(UIButton *)arg1 ;
-(void)promoteButtonClick:(id)arg1 ;
-(void)setUpPromoteButtonForFeedItem:(id)arg1 ;
-(void)setUpPromotedButtonForBlueStateWithTitle:(id)arg1 ;
-(void)setUpPromotedButtonForRedStateWithTitle:(id)arg1 ;
-(void)initializeInsightsInterfaceForAdGuideline;
-(void)initializeInsightsInterfaceForInsights;
-(void)setInsightsButton:(UIButton *)arg1 ;
-(void)organicInsightsButtonClick:(id)arg1 ;
-(void)viewAdGuidelineButtonClick:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemBusinessCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemBusinessCellDelegate>)delegate;
-(UIView *)lineView;
@end

