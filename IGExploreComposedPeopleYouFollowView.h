/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGExploreComposedPeopleYouFollowViewDelegate;
@class UILabel, NSArray;

@interface IGExploreComposedPeopleYouFollowView : UIView {

	id<IGExploreComposedPeopleYouFollowViewDelegate> _delegate;
	UILabel* _titleLabel;
	NSArray* _peopleViews;
	NSArray* _separatorViews;

}

@property (assign,nonatomic,__weak) id<IGExploreComposedPeopleYouFollowViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSArray * peopleViews;                                                       //@synthesize peopleViews=_peopleViews - In the implementation block
@property (nonatomic,readonly) NSArray * separatorViews;                                                    //@synthesize separatorViews=_separatorViews - In the implementation block
-(void)addAndConfigureAllSubviews;
-(void)didTapPeopleView:(id)arg1 ;
-(void)configureSubviewsLayout;
-(NSArray *)peopleViews;
-(id)initWithFrameWidth:(float)arg1 peopleViews:(id)arg2 ;
-(NSArray *)separatorViews;
-(void)setDelegate:(id<IGExploreComposedPeopleYouFollowViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGExploreComposedPeopleYouFollowViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

