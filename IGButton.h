/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:43 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSimpleButton.h>

@interface IGButton : IGSimpleButton {

	Class _style;
	float _minimumWidth;
	float _maximumWidth;

}

@property (assign,nonatomic) Class style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float minimumWidth;              //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) float maximumWidth;              //@synthesize maximumWidth=_maximumWidth - In the implementation block
+(id)buttonWithStyle:(Class)arg1 text:(id)arg2 ;
+(id)buttonWithStyle:(Class)arg1 text:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(id)initWithStyle:(Class)arg1 text:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(void)setSelectedTitleLabelText:(id)arg1 ;
-(float)maximumWidthForTitle;
-(id)init;
-(Class)style;
-(void)sizeToFit;
-(void)setStyle:(Class)arg1 ;
-(void)setMinimumWidth:(float)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)minimumWidth;
-(float)maximumWidth;
@end

