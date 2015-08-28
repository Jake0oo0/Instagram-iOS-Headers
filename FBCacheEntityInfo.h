/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBCacheEntityInfo : NSObject {

	NSString* _uuid;
	NSString* _key;
	double _accessTime;
	unsigned _fileSize;
	char _dirty;

}

@property (copy,readonly) NSString * key;               //@synthesize key=_key - In the implementation block
@property (copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (readonly) double accessTime;                 //@synthesize accessTime=_accessTime - In the implementation block
@property (readonly) unsigned fileSize;                 //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDirty) char dirty;                  //@synthesize dirty=_dirty - In the implementation block
-(void)registerAccess;
-(id)initWithKey:(id)arg1 uuid:(id)arg2 accessTime:(double)arg3 fileSize:(unsigned)arg4 ;
-(double)accessTime;
-(void)setDirty:(char)arg1 ;
-(void)dealloc;
-(NSString *)key;
-(NSString *)uuid;
-(unsigned)fileSize;
-(char)isDirty;
@end

