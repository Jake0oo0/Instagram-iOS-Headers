/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:40 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTableView.h>
#import <Instagram/IGReusableCellTableView.h>

@class UIView, NSString;

@interface IGPlainTableView : IGTableView <IGReusableCellTableView> {

	char _pinsHeaderView;
	char _wantsStatusBarBackground;
	id _headerViewKVOHandler;
	id _footerViewKVOHandler;
	UIView* _statusBarBlurringView;

}

@property (assign,nonatomic) char pinsHeaderView;                         //@synthesize pinsHeaderView=_pinsHeaderView - In the implementation block
@property (assign,nonatomic) char wantsStatusBarBackground;               //@synthesize wantsStatusBarBackground=_wantsStatusBarBackground - In the implementation block
@property (nonatomic,retain) id headerViewKVOHandler;                     //@synthesize headerViewKVOHandler=_headerViewKVOHandler - In the implementation block
@property (nonatomic,retain) id footerViewKVOHandler;                     //@synthesize footerViewKVOHandler=_footerViewKVOHandler - In the implementation block
@property (nonatomic,retain) UIView * statusBarBlurringView;              //@synthesize statusBarBlurringView=_statusBarBlurringView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(Class)defaultCellClass;
-(id)headerViewKVOHandler;
-(id)footerViewKVOHandler;
-(void)setHeaderViewKVOHandler:(id)arg1 ;
-(void)setFooterViewKVOHandler:(id)arg1 ;
-(UIView *)statusBarBlurringView;
-(char)pinsHeaderView;
-(char)wantsStatusBarBackground;
-(void)setPinsHeaderView:(char)arg1 ;
-(void)setWantsStatusBarBackground:(char)arg1 ;
-(void)setStatusBarBlurringView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setTableHeaderView:(id)arg1 ;
@end

