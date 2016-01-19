/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:44 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGToolPickerCell.h>

@class NSString, UILabel, UIView;

@interface IGFilterPickerCell : IGToolPickerCell {

	char _displayNewFilterNUX;
	NSString* _imageName;
	Class _filterClass;
	UILabel* _nuxNewLabel;
	UIView* _nuxOverlay;

}

@property (assign,nonatomic) char displayNewFilterNUX;              //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
@property (nonatomic,copy) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) Class filterClass;                     //@synthesize filterClass=_filterClass - In the implementation block
@property (nonatomic,retain) UILabel * nuxNewLabel;                 //@synthesize nuxNewLabel=_nuxNewLabel - In the implementation block
@property (nonatomic,retain) UIView * nuxOverlay;                   //@synthesize nuxOverlay=_nuxOverlay - In the implementation block
-(Class)filterClass;
-(void)setFilterClass:(Class)arg1 ;
-(void)setImageName:(id)arg1 filterClass:(Class)arg2 ;
-(void)setDisplayNewFilterNUX:(char)arg1 animated:(char)arg2 ;
-(void)setDisplayNewFilterNUX:(char)arg1 ;
-(UIView *)nuxOverlay;
-(UILabel *)nuxNewLabel;
-(char)displayNewFilterNUX;
-(void)setNuxNewLabel:(UILabel *)arg1 ;
-(void)setNuxOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

