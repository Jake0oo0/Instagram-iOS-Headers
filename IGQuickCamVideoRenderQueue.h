/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:13 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoRendererDelegate.h>

@class NSMutableArray, NSString;

@interface IGQuickCamVideoRenderQueue : NSObject <IGVideoRendererDelegate> {

	NSMutableArray* _renderQueue;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,retain) NSMutableArray * renderQueue;                   //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRenderQueue;
-(void)setRenderQueue:(NSMutableArray *)arg1 ;
-(void)renderVideo:(id)arg1 useFallbackSize:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(CGSize)arg3 metadata:(id)arg4 canceled:(char)arg5 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)renderVideo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)completionBlocks;
-(NSMutableArray *)renderQueue;
@end

