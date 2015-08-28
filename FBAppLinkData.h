/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray, NSString, NSDictionary;

@interface FBAppLinkData : NSObject {

	NSURL* _targetURL;
	NSArray* _actionTypes;
	NSArray* _actionIDs;
	NSString* _ref;
	NSString* _userAgent;
	NSDictionary* _refererData;
	NSDictionary* _originalQueryParameters;
	NSURL* _originalURL;
	NSDictionary* _arguments;

}

@property (retain) NSURL * targetURL;                                 //@synthesize targetURL=_targetURL - In the implementation block
@property (copy) NSArray * actionTypes;                               //@synthesize actionTypes=_actionTypes - In the implementation block
@property (copy) NSArray * actionIDs;                                 //@synthesize actionIDs=_actionIDs - In the implementation block
@property (copy) NSString * ref;                                      //@synthesize ref=_ref - In the implementation block
@property (copy) NSString * userAgent;                                //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSDictionary * refererData;                          //@synthesize refererData=_refererData - In the implementation block
@property (copy) NSDictionary * originalQueryParameters;              //@synthesize originalQueryParameters=_originalQueryParameters - In the implementation block
@property (retain) NSURL * originalURL;                               //@synthesize originalURL=_originalURL - In the implementation block
@property (copy) NSDictionary * arguments;                            //@synthesize arguments=_arguments - In the implementation block
+(id)createFromURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 targetURL:(id)arg2 originalParams:(id)arg3 arguments:(id)arg4 ;
-(void)setActionIDs:(NSArray *)arg1 ;
-(void)setActionTypes:(NSArray *)arg1 ;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(void)setRefererData:(NSDictionary *)arg1 ;
-(void)setOriginalQueryParameters:(NSDictionary *)arg1 ;
-(NSArray *)actionTypes;
-(NSArray *)actionIDs;
-(id)initWithURL:(id)arg1 targetURL:(id)arg2 ref:(id)arg3 userAgent:(id)arg4 refererData:(id)arg5 originalParams:(id)arg6 ;
-(NSDictionary *)refererData;
-(NSDictionary *)originalQueryParameters;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)originalURL;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(NSDictionary *)arguments;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(NSURL *)targetURL;
@end

