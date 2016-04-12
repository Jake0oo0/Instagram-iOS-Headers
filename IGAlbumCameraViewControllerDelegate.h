

@protocol IGAlbumCameraViewControllerDelegate <NSObject>
@required
-(void)albumCameraViewControllerDidDismiss:(id)arg1;
-(void)albumCameraViewControllerDidTapAddPeople:(id)arg1;
-(void)albumCameraViewControllerDidTapTitle:(id)arg1;
-(void)albumCameraViewControllerDidTapRetake:(id)arg1;
-(void)albumCameraViewControllerDidTapCurrentAlbumButton:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2;

@end

