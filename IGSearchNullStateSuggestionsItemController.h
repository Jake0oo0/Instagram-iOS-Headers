/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class NSArray, NSString;

@interface IGSearchNullStateSuggestionsItemController : IGListItemController <IGListItemType> {

	NSArray* _users;

}

@property (nonatomic,readonly) NSArray * users;                     //@synthesize users=_users - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(id)initWithUsers:(id)arg1 ;
-(void)didSelectItemAtIndexPath:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(unsigned)numberOfItems;
-(NSArray *)users;
@end

