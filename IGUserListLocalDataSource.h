/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteAbstractDataSource.h>
#import <Instagram/IGAutocompleteDataSource.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface IGUserListLocalDataSource : IGAutocompleteAbstractDataSource <IGAutocompleteDataSource> {

	char _excludesCurrentUser;
	char _shouldSortByShareFrequency;
	char _shouldSortByFriendScoreFromCoeff;
	NSMutableDictionary* _additionalUsers;
	NSDictionary* _additionalUserSearchStrings;

}

@property (assign,nonatomic) char excludesCurrentUser;                                //@synthesize excludesCurrentUser=_excludesCurrentUser - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalUsers;                   //@synthesize additionalUsers=_additionalUsers - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalUserSearchStrings;              //@synthesize additionalUserSearchStrings=_additionalUserSearchStrings - In the implementation block
@property (assign,nonatomic) char shouldSortByShareFrequency;                         //@synthesize shouldSortByShareFrequency=_shouldSortByShareFrequency - In the implementation block
@property (assign,nonatomic) char shouldSortByFriendScoreFromCoeff;                   //@synthesize shouldSortByFriendScoreFromCoeff=_shouldSortByFriendScoreFromCoeff - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilteredResults:(id)arg1 ;
-(void)addUsersForFeedItem:(id)arg1 ;
-(void)filterUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 ;
-(void)setExcludesCurrentUser:(char)arg1 ;
-(void)addUsers:(id)arg1 ;
-(char)shouldSortByFriendScoreFromCoeff;
-(char)shouldSortByShareFrequency;
-(/*^block*/id)usernameComparator;
-(id)searchStringsForCharacter:(id)arg1 ;
-(id)usersForPKs:(id)arg1 fromSet:(int)arg2 ;
-(/*^block*/id)fullComparator:(id)arg1 ;
-(char)excludesCurrentUser;
-(NSMutableDictionary *)additionalUsers;
-(void)setAdditionalUsers:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)additionalUserSearchStrings;
-(void)setAdditionalUserSearchStrings:(NSDictionary *)arg1 ;
-(void)setShouldSortByShareFrequency:(char)arg1 ;
-(void)setShouldSortByFriendScoreFromCoeff:(char)arg1 ;
-(id)init;
@end

