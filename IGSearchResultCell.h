
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRaindropAnalyticsDelegate, IGSearchResultCellDelegate;
@class UIView, NSString, CALayer, UILongPressGestureRecognizer;

@interface IGSearchResultCell : IGPlainTableViewCell <UIGestureRecognizerDelegate> {

	UIView* _iconView;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	id<IGSearchResultCellDelegate> _delegate;
	NSString* _itemId;
	CALayer* _separatorLayer;
	UILongPressGestureRecognizer* _contentMenuLongPressRecognizer;

}

@property (nonatomic,retain) UIView * iconView;                                                          //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                   //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchResultCellDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * itemId;                                                          //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,readonly) CALayer * separatorLayer;                                                 //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * contentMenuLongPressRecognizer;              //@synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)iconViewFrame;
+(id)formatedPostCount:(unsigned)arg1 ;
+(id)backgroundColor;
+(float)height;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(CALayer *)separatorLayer;
-(void)onContentMenuPress:(id)arg1 ;
-(void)setContentMenuLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)contentMenuLongPressRecognizer;
-(void)setHashtag:(id)arg1 ;
-(float)labelMinXForIconFrame:(CGRect)arg1 ;
-(void)layoutLabels:(float)arg1 bounds:(CGRect)arg2 ;
-(NSString *)itemId;
-(void)setItemId:(NSString *)arg1 ;
-(void)setDelegate:(id<IGSearchResultCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGSearchResultCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setPlace:(id)arg1 ;
-(void)setSearchQuery:(id)arg1 ;
@end

