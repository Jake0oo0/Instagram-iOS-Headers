/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteAbstractStore.h>
#import <Instagram/IGAutocompleteAbstractStoreProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IGAutocompleteHashtagsStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol> {

	NSMutableDictionary* _hashtagExpirations;
	NSMutableArray* _allHashtags;
	NSMutableArray* _recentHashtags;

}

@property (nonatomic,retain) NSMutableArray * allHashtags;                 //@synthesize allHashtags=_allHashtags - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentHashtags;              //@synthesize recentHashtags=_recentHashtags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)regexPattern;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(id)hashtagsInString:(id)arg1 ;
-(void)addHashtag:(id)arg1 addToRecent:(char)arg2 ;
-(int)indexOfHashtag:(id)arg1 inArray:(id)arg2 ;
-(void)setExpiresForHashtag:(id)arg1 ;
-(void)removeExpiredHashtags;
-(void)addHashtagsFromText:(id)arg1 addToRecent:(char)arg2 ;
-(NSMutableArray *)allHashtags;
-(void)setAllHashtags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recentHashtags;
-(void)setRecentHashtags:(NSMutableArray *)arg1 ;
-(void)archive;
-(void)clearHistory;
@end

