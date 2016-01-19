/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIScrollView, UIViewController;


@protocol IGShareManager <NSObject>
@property (nonatomic,readonly) int shareType; 
@property (nonatomic,copy) NSString * shareString; 
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController * delegate; 
@required
-(id)initWithMediaMetadata:(id)arg1;
-(int)shareType;
-(void)setShareString:(id)arg1;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)setDelegate:(id)arg1;
-(UIViewController *)delegate;
-(UIScrollView *)scrollView;
-(void)setHeaderView:(id)arg1;

@end

