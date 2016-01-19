/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGFeedItem, NSMutableSet, NSSet;

@interface IGUsertagGroup : NSObject <NSCoding, NSCopying> {

	IGFeedItem* _feedItem;
	NSMutableSet* _inTagsSet;

}

@property (nonatomic,readonly) NSSet * inTags; 
@property (assign,nonatomic,__weak) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * inTagsSet;                  //@synthesize inTagsSet=_inTagsSet - In the implementation block
-(IGFeedItem *)feedItem;
-(id)currentUserUsertag;
-(void)removeUsertag:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(NSSet *)inTags;
-(char)currentUserIsTagged;
-(void)setInTagsSet:(NSMutableSet *)arg1 ;
-(void)addUsertag:(id)arg1 ;
-(NSMutableSet *)inTagsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(char)updateWithDictionary:(id)arg1 ;
@end

