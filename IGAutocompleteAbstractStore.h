/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSString, IGNonCurrentUserDefaults, IGBlendedSearchRecentItemsOrderStore;

@interface IGAutocompleteAbstractStore : NSObject {

	NSRegularExpression* _regex;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGBlendedSearchRecentItemsOrderStore* _blendedSearchRecentItemsOrderStore;

}

@property (nonatomic,retain) NSRegularExpression * regex;                                                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                                               //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;                                         //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) IGBlendedSearchRecentItemsOrderStore * blendedSearchRecentItemsOrderStore;              //@synthesize blendedSearchRecentItemsOrderStore=_blendedSearchRecentItemsOrderStore - In the implementation block
+(void)clearAutocompleteCacheDirectory;
+(id)createAutocompleteCacheDirectory;
+(id)autocompleteCacheDirectory;
-(id)regexPattern;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(IGBlendedSearchRecentItemsOrderStore *)blendedSearchRecentItemsOrderStore;
-(void)setBlendedSearchRecentItemsOrderStore:(IGBlendedSearchRecentItemsOrderStore *)arg1 ;
-(void)archive;
-(void)dealloc;
-(NSRegularExpression *)regex;
-(void)setRegex:(NSRegularExpression *)arg1 ;
@end

