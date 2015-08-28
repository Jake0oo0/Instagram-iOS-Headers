/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBDialogsParams.h>

@protocol FBOpenGraphAction;
@class NSString, FBAppBridgeScheme;

@interface FBOpenGraphActionParams : FBDialogsParams {

	id<FBOpenGraphAction> _action;
	NSString* _previewPropertyName;
	NSString* _actionType;
	FBAppBridgeScheme* _bridgeScheme;

}

@property (nonatomic,retain) id<FBOpenGraphAction> action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                  //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,copy) NSString * actionType;                           //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) FBAppBridgeScheme * bridgeScheme;              //@synthesize bridgeScheme=_bridgeScheme - In the implementation block
+(id)getPostedObjectTypeFromObject:(id)arg1 ;
+(id)getIdOrUrlFromObject:(id)arg1 ;
+(id)methodName;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(NSString *)previewPropertyName;
-(FBAppBridgeScheme *)bridgeScheme;
-(id)flattenObject:(id)arg1 ;
-(id)flattenGraphObjects:(id)arg1 ;
-(char)containsUIImages:(id)arg1 ;
-(id)initWithAction:(id)arg1 actionType:(id)arg2 previewPropertyName:(id)arg3 ;
-(id)dictionaryMethodArgs;
-(void)setBridgeScheme:(FBAppBridgeScheme *)arg1 ;
-(void)dealloc;
-(id<FBOpenGraphAction>)action;
-(id)validate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id<FBOpenGraphAction>)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
@end

