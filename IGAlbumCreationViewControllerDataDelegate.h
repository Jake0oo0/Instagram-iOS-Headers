

@protocol IGAlbumCreationViewControllerDataDelegate <NSObject>
@required
-(void)creationViewController:(id)arg1 didPickAsset:(id)arg2;
-(void)creationViewController:(id)arg1 didUpdateAlbumItemText:(id)arg2 position:(float)arg3;
-(void)creationViewController:(id)arg1 didUpdateTitle:(id)arg2;

@end
