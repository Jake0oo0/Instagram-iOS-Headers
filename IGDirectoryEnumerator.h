/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSURL, NSArray, NSDictionary;

@interface IGDirectoryEnumerator : NSEnumerator {

	SCD_Struct_IG0* _tree;
	unsigned _traversal;
	NSURL* _baseURL;
	NSArray* _properties;
	NSDictionary* _fileAttributes;
	unsigned _level;

}

@property (assign,nonatomic) unsigned traversal;                       //@synthesize traversal=_traversal - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSArray * properties;                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSDictionary * fileAttributes;              //@synthesize fileAttributes=_fileAttributes - In the implementation block
@property (assign,nonatomic) unsigned level;                           //@synthesize level=_level - In the implementation block
-(void)setTraversal:(unsigned)arg1 ;
-(unsigned)traversal;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 traversal:(unsigned)arg3 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_IG1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
-(NSURL *)baseURL;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)fileAttributes;
@end

