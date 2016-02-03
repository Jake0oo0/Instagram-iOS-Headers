/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class IGDate, IGUser;

@interface IGDirectContentReaction : NSObject <NSCoding> {

	unsigned _reactionType;
	IGDate* _timestamp;
	IGUser* _sender;

}

@property (assign,nonatomic) unsigned reactionType;              //@synthesize reactionType=_reactionType - In the implementation block
@property (nonatomic,retain) IGDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) IGUser * sender;                    //@synthesize sender=_sender - In the implementation block
+(id)likeForUserAtCurrentTime:(id)arg1 ;
+(unsigned)likeCountFromDictionary:(id)arg1 ;
+(id)reactionsFromDictionary:(id)arg1 ;
-(unsigned)reactionType;
-(id)initWithReactionType:(unsigned)arg1 timeStamp:(id)arg2 sender:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 andType:(unsigned)arg2 ;
-(unsigned)reactionTypeForString:(id)arg1 ;
-(void)setReactionType:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(IGDate *)timestamp;
-(void)setTimestamp:(IGDate *)arg1 ;
-(IGUser *)sender;
-(void)setSender:(IGUser *)arg1 ;
@end

