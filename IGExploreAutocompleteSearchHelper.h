/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:17 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGBlendedSearchDataSource, IGUserListAutocompleteDataSource, IGHashtagAutocompleteDataSource, IGPlacesAutocompleteDataSource, NSString;

@interface IGExploreAutocompleteSearchHelper : NSObject {

	char _responseWasFoundInCache;
	IGBlendedSearchDataSource* _blendedDataSource;
	IGUserListAutocompleteDataSource* _userDataSource;
	IGHashtagAutocompleteDataSource* _hashtagDataSource;
	IGPlacesAutocompleteDataSource* _placesDataSource;
	NSString* _responseQueryText;
	NSString* _responseRankToken;

}

@property (nonatomic,readonly) IGBlendedSearchDataSource * blendedDataSource;                    //@synthesize blendedDataSource=_blendedDataSource - In the implementation block
@property (nonatomic,readonly) IGUserListAutocompleteDataSource * userDataSource;                //@synthesize userDataSource=_userDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagAutocompleteDataSource * hashtagDataSource;              //@synthesize hashtagDataSource=_hashtagDataSource - In the implementation block
@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * placesDataSource;                //@synthesize placesDataSource=_placesDataSource - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                         //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                         //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (assign,nonatomic) char responseWasFoundInCache;                                       //@synthesize responseWasFoundInCache=_responseWasFoundInCache - In the implementation block
+(void)clearHistory;
-(IGUserListAutocompleteDataSource *)userDataSource;
-(IGHashtagAutocompleteDataSource *)hashtagDataSource;
-(IGPlacesAutocompleteDataSource *)placesDataSource;
-(IGBlendedSearchDataSource *)blendedDataSource;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(char)responseWasFoundInCache;
-(void)setResponseWasFoundInCache:(char)arg1 ;
-(void)invalidateResults;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

