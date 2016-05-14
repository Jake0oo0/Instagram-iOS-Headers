/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGNewsDataSourceSection.h>

@protocol IGNewsDataSourceSectionDelegate;
@class NSString;

@interface IGNewsDataSourceAdManagerSection : NSObject <IGNewsDataSourceSection> {

	id<IGNewsDataSourceSectionDelegate> _delegate;
	unsigned _pendingAdsCount;

}

@property (assign,nonatomic) unsigned pendingAdsCount;                                         //@synthesize pendingAdsCount=_pendingAdsCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGNewsDataSourceSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) unsigned* numberOfRows; 
-(unsigned)pendingAdsCount;
-(void)setUpTableView:(id)arg1 ;
-(void)setPendingAdsCount:(unsigned)arg1 ;
-(char)willShowAdsManagerSection;
-(void)setDelegate:(id<IGNewsDataSourceSectionDelegate>)arg1 ;
-(id<IGNewsDataSourceSectionDelegate>)delegate;
-(NSString *)title;
-(unsigned*)numberOfRows;
-(id)tableView:(id)arg1 cellForRowAtIndex:(unsigned)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(unsigned)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned)arg2 ;
@end

