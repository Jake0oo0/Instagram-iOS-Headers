/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

