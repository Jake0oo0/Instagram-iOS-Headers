/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:21 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGFilterControlViewDelegate <NSObject>
@required
-(void)filterControlViewDidPressDone:(id)arg1;
-(void)filterControlViewDidPressCancel:(id)arg1;
-(void)filterControlViewDidStartDragging:(id)arg1;
-(void)filterControlViewDidEndDragging:(id)arg1;
-(void)filterControlView:(id)arg1 didChangeValue:(float)arg2;
-(void)filterControlView:(id)arg1 didChangeBorderSelection:(char)arg2;
-(void)filterControlViewDidTapRotate:(id)arg1;
-(void)filterControlViewDidToggleGrid:(char)arg1;
-(void)filterControlViewNeedUpdateValue;
-(void)filterControlView:(id)arg1 didChangeTintColor:(unsigned)arg2 withTintType:(unsigned)arg3;
-(void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned)arg3;

@end

