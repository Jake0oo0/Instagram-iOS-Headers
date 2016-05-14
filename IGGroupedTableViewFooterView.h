/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, IGCoreTextView;

@interface IGGroupedTableViewFooterView : UIView {

	UILabel* _textLabel;
	NSString* _annotatedText;
	float _height;
	IGCoreTextView* _coreTextView;

}

@property (nonatomic,retain) IGCoreTextView * coreTextView;              //@synthesize coreTextView=_coreTextView - In the implementation block
@property (nonatomic,retain) NSString * annotatedText;                   //@synthesize annotatedText=_annotatedText - In the implementation block
@property (nonatomic,readonly) float height;                             //@synthesize height=_height - In the implementation block
+(float)heightWithText:(id)arg1 ;
-(IGCoreTextView *)coreTextView;
-(void)setCoreTextView:(IGCoreTextView *)arg1 ;
-(void)configureTextLabelWithText:(id)arg1 ;
-(void)doLayout;
-(void)setAnnotatedText:(NSString *)arg1 ;
-(float)heightWithAnnotatedText;
-(NSString *)annotatedText;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)height;
-(id)initWithText:(id)arg1 ;
@end

