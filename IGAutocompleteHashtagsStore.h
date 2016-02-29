/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
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
-(id)regexPattern;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(id)hashtagsInString:(id)arg1 ;
-(void)addHashtag:(id)arg1 addToRecent:(char)arg2 ;
-(int)indexOfHashtag:(id)arg1 inArray:(id)arg2 ;
-(void)setExpiresForHashtag:(id)arg1 ;
-(void)removeExpiredHashtags;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)addHashtagsFromText:(id)arg1 addToRecent:(char)arg2 ;
-(NSMutableArray *)allHashtags;
-(void)setAllHashtags:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recentHashtags;
-(void)setRecentHashtags:(NSMutableArray *)arg1 ;
-(void)archive;
-(void)clearHistory;
@end

