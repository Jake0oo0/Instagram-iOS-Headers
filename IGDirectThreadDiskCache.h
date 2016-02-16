/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IGDirectThreadDiskCache : NSObject {

	NSString* _userSessionPK;
	NSString* _cacheBasePath;

}

@property (nonatomic,retain) NSString * userSessionPK;              //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) NSString * cacheBasePath;              //@synthesize cacheBasePath=_cacheBasePath - In the implementation block
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(NSString *)cacheBasePath;
-(id)cachePathForThreadId:(id)arg1 ;
-(id)cachedThreadWithId:(id)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 ;
-(void)cacheThread:(id)arg1 withContentCount:(unsigned)arg2 ;
-(void)uncacheThreadWithID:(id)arg1 ;
-(id)mergeCachedThreadWithThread:(id)arg1 ;
-(id)allCachedThreads;
-(void)setCacheBasePath:(NSString *)arg1 ;
@end

