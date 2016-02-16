/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class IGFeedItem;

@interface IGFeedViewControllerPositionContext : NSObject {

	IGFeedItem* _feedItem;
	CGSize _offset;

}

@property (nonatomic,__weak,readonly) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) CGSize offset;                             //@synthesize offset=_offset - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 offset:(CGSize)arg2 ;
-(CGSize)offset;
@end

