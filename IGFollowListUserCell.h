/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUserCell.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>

@protocol IGFollowListUserCellDelegate;
@class IGSimilarAccountsView, IGSimilarAccountsControl, UIView, NSString;

@interface IGFollowListUserCell : IGUserCell <IGSimilarAccountsControlDelegate, IGSimilarAccountsViewDelegate> {

	IGSimilarAccountsView* _similarAccountsView;
	IGSimilarAccountsControl* _similarAccountsControl;
	id<IGFollowListUserCellDelegate> _followListUserCelldelegate;
	/*^block*/id _dismissActionBlock;
	UIView* _bottomLine;

}

@property (nonatomic,retain) IGSimilarAccountsView * similarAccountsView;                                     //@synthesize similarAccountsView=_similarAccountsView - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsControl * similarAccountsControl;                               //@synthesize similarAccountsControl=_similarAccountsControl - In the implementation block
@property (assign,nonatomic,__weak) id<IGFollowListUserCellDelegate> followListUserCelldelegate;              //@synthesize followListUserCelldelegate=_followListUserCelldelegate - In the implementation block
@property (nonatomic,copy) id dismissActionBlock;                                                             //@synthesize dismissActionBlock=_dismissActionBlock - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                             //@synthesize bottomLine=_bottomLine - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)similarAccountsControl:(id)arg1 didReplenishUserAtIndexPath:(id)arg2 ;
-(void)similarAccountsViewDidTapOnClose:(id)arg1 ;
-(void)similarAccountsViewDidTapOnSeeAllAccounts:(id)arg1 ;
-(IGSimilarAccountsControl *)similarAccountsControl;
-(IGSimilarAccountsView *)similarAccountsView;
-(void)setDismissActionBlock:(id)arg1 ;
-(id)dismissActionBlock;
-(id<IGFollowListUserCellDelegate>)followListUserCelldelegate;
-(void)configureCellWithUser:(id)arg1 showSimilarAccountsView:(char)arg2 showSocialContext:(char)arg3 followActionBlock:(/*^block*/id)arg4 dismissActionBlock:(/*^block*/id)arg5 ;
-(void)setSimilarAccountsView:(IGSimilarAccountsView *)arg1 ;
-(void)setSimilarAccountsControl:(IGSimilarAccountsControl *)arg1 ;
-(void)setFollowListUserCelldelegate:(id<IGFollowListUserCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

