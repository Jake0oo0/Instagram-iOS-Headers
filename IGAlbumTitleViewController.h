/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumTitleViewControllerDelegate;
@class NSString, UITextField, UIView;

@interface IGAlbumTitleViewController : UIViewController <UITextFieldDelegate, UIViewControllerTransitioningDelegate> {

	id<IGAlbumTitleViewControllerDelegate> _delegate;
	NSString* _albumTitle;
	UITextField* _titleTextField;
	UIView* _showLocationsOverlay;

}

@property (assign,nonatomic,__weak) id<IGAlbumTitleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                                               //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) UITextField * titleTextField;                                        //@synthesize titleTextField=_titleTextField - In the implementation block
@property (nonatomic,retain) UIView * showLocationsOverlay;                                       //@synthesize showLocationsOverlay=_showLocationsOverlay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlbumTitle:(id)arg1 delegate:(id)arg2 ;
-(void)tappedView:(id)arg1 ;
-(void)finishedEditing;
-(UITextField *)titleTextField;
-(void)setTitleTextField:(UITextField *)arg1 ;
-(UIView *)showLocationsOverlay;
-(void)setShowLocationsOverlay:(UIView *)arg1 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(NSString *)albumTitle;
-(void)setDelegate:(id<IGAlbumTitleViewControllerDelegate>)arg1 ;
-(id<IGAlbumTitleViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

