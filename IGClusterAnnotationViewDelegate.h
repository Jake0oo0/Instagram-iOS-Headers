/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGClusterAnnotationViewDelegate <NSObject>
@required
-(void)clusterAnnotationView:(id)arg1 explosionDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 implosionDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 fullScreenOpened:(char)arg2 withTouchedTile:(id)arg3;
-(void)clusterAnnotationView:(id)arg1 fullScreenClosed:(char)arg2;
-(char)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)clusterAnnotationView:(id)arg1 closeCluster:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 onDoubleTapFor:(id)arg2;
-(void)clusterAnnotationView:(id)arg1 restoreDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 infoButtonTappedFor:(id)arg2;
-(void)clusterAnnotationView:(id)arg1 showAllPhotosInCluster:(id)arg2;
-(char)isInEditMode;

@end

