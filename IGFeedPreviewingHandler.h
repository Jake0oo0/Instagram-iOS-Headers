
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewingDelegate;
@class IGFeedViewController_DEPRECATED, IGUserPreviewingHandler, IGHashtagPreviewingHandler, NSString;

@interface IGFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGFeedViewController_DEPRECATED* _controller;
	IGUserPreviewingHandler* _userDelegate;
	IGHashtagPreviewingHandler* _hashtagDelegate;
	id<UIViewControllerPreviewingDelegate> _usedDelegate;

}

@property (assign,nonatomic,__weak) IGFeedViewController_DEPRECATED * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userDelegate;                           //@synthesize userDelegate=_userDelegate - In the implementation block
@property (nonatomic,retain) IGHashtagPreviewingHandler * hashtagDelegate;                     //@synthesize hashtagDelegate=_hashtagDelegate - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewingDelegate> usedDelegate;              //@synthesize usedDelegate=_usedDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedViewController:(id)arg1 ;
-(IGUserPreviewingHandler *)userDelegate;
-(void)setUsedDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)usedDelegate;
-(void)setUserDelegate:(IGUserPreviewingHandler *)arg1 ;
-(IGHashtagPreviewingHandler *)hashtagDelegate;
-(void)setHashtagDelegate:(IGHashtagPreviewingHandler *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(IGFeedViewController_DEPRECATED *)controller;
-(void)setController:(IGFeedViewController_DEPRECATED *)arg1 ;
@end

