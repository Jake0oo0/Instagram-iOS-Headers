
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropMedia, NSNumber, IGRaindropPositionIn2D, NSString;

@interface IGRaindropPhotoClickEvent : TBaseStruct {

	IGRaindropMedia* __thrift_media;
	NSNumber* __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	NSString* __thrift_targetId;
	NSString* __thrift_searchSessionToken;

}
-(id)toDict;
-(id)initWithMedia:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 sectionType:(int)arg6 targetId:(id)arg7 searchSessionToken:(id)arg8 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

