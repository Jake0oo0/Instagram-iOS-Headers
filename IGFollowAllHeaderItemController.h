/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:41 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGFollowAllUsersCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFollowAllHeaderItem, NSString;

@interface IGFollowAllHeaderItemController : IGListItemController <IGFollowAllUsersCellDelegate, IGListItemType> {

	char _followAllButtonEnabled;
	IGFollowAllHeaderItem* _followAllHeaderItem;

}

@property (nonatomic,readonly) IGFollowAllHeaderItem * followAllHeaderItem;              //@synthesize followAllHeaderItem=_followAllHeaderItem - In the implementation block
@property (assign,nonatomic) char followAllButtonEnabled;                                //@synthesize followAllButtonEnabled=_followAllButtonEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFollowAllHeaderItem *)followAllHeaderItem;
-(id)initWithFollowAllHeaderItem:(id)arg1 ;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)followAllUsersOnServer;
-(void)followAllUsersCellDidTapFollowAll:(id)arg1 ;
-(Class)cellClass;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

