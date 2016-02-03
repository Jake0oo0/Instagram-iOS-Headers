/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:20 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewCell.h>

@class UITapGestureRecognizer, IGDiscoverMorePeopleServiceConfiguration;

@interface IGDiscoverMorePeopleConnectionView : IGPlainTableViewCell {

	/*^block*/id _tapAction;
	UITapGestureRecognizer* _tapGestureRecognizer;
	IGDiscoverMorePeopleServiceConfiguration* _serviceConfiguration;

}

@property (nonatomic,copy) id tapAction;                                                                     //@synthesize tapAction=_tapAction - In the implementation block
@property (nonatomic,__weak,readonly) UITapGestureRecognizer * tapGestureRecognizer;                         //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) IGDiscoverMorePeopleServiceConfiguration * serviceConfiguration;              //@synthesize serviceConfiguration=_serviceConfiguration - In the implementation block
+(id)imageNameForViewType:(int)arg1 ;
+(float)defaultHeight;
-(void)configureWithConnectionViewType:(int)arg1 ;
-(void)setTapAction:(id)arg1 ;
-(void)updateConnectionView;
-(void)onCellTapped;
-(id)tapAction;
-(IGDiscoverMorePeopleServiceConfiguration *)serviceConfiguration;
-(void)setServiceConnected:(char)arg1 withConnectionCount:(unsigned)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

