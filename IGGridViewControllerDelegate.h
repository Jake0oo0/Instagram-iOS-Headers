/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGGridViewControllerDelegate <NSObject>
@optional
-(char)gridViewController:(id)arg1 isAssetLoadedInPlayer:(id)arg2;
-(void)gridViewController:(id)arg1 didDeselectAsset:(id)arg2 atIndexPath:(id)arg3;
-(void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2;

@required
-(void)gridViewControllerLibraryDidLoad:(id)arg1;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2;

@end

