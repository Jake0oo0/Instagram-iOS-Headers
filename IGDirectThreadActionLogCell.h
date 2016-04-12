/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class IGCoreTextView;

@interface IGDirectThreadActionLogCell : IGDirectContentCell {

	IGCoreTextView* _titleTextLabel;

}

@property (nonatomic,retain) IGCoreTextView * titleTextLabel;              //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
+(id)styledTitleStringForActionLog:(id)arg1 ;
+(float)heightForCellWithActionLog:(id)arg1 withWidth:(float)arg2 ;
-(void)setShowUsername:(char)arg1 ;
-(void)setHideProfilePicture:(char)arg1 ;
-(void)setTitleTextLabel:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(IGCoreTextView *)titleTextLabel;
@end

