/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGBulkCommentDeleteManagerDelegate <NSObject>
@required
-(void)commentDeleteManagerDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2;
-(void)commentDeleteManagerDidStartCommentDeletion:(id)arg1;
-(void)commentDeleteManagerDidFinishCommentDeletion:(id)arg1;
-(void)commentDeleteManagerDidFailToDeleteComments:(id)arg1;

@end

