/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:40 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGMediaRequestDelegate.h>

@class UITableView, NSArray, NSDictionary, UIImage, NSString;

@interface IGAnalyticsViewController : IGViewController <UITableViewDelegate, UITableViewDataSource, IGMediaRequestDelegate> {

	UITableView* _tableView;
	NSArray* _logLines;
	NSArray* _prefixKeysWithUN;
	NSDictionary* _displayedEvent;
	UIImage* _solidGreenImage;
	UIImage* _solidGreenImageRounded;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageWithImage:(id)arg1 scaledToSize:(CGSize)arg2 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(id)_imageWithColor:(id)arg1 ;
-(void)_onHideTap:(id)arg1 ;
-(void)_linkToUserCell:(id)arg1 withEventDict:(id)arg2 pk:(id)arg3 ;
-(void)_linkToMediaCell:(id)arg1 withEventDict:(id)arg2 ;
-(void)_updateCell:(id)arg1 withEventDict:(id)arg2 ;
-(id)initWithLogDicts:(id)arg1 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLoad;
@end

