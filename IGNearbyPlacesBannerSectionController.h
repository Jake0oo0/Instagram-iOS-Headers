/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:21 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGSearchSectionController.h>

@class UIViewController, NSString;

@interface IGNearbyPlacesBannerSectionController : NSObject <IGSearchSectionController> {

	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3 ;
-(id)initWithTableView:(id)arg1 viewController:(id)arg2 ;
-(unsigned)numberOfRows;
-(UIViewController *)viewController;
@end

