/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:33 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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

