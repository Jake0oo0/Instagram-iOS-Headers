/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView;


@protocol UIViewControllerPreviewing <NSObject>
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@required
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;

@end

