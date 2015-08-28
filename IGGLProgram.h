/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EAGLContext, NSMutableSet, NSDictionary, NSMutableArray;

@interface IGGLProgram : NSObject {

	EAGLContext* _context;
	NSMutableSet* _dirtyUniforms;
	unsigned _program;
	NSDictionary* _attributes;
	NSDictionary* _uniforms;
	NSMutableArray* _deallocBlocks;

}

@property (nonatomic,readonly) unsigned program;                            //@synthesize program=_program - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,retain) NSMutableArray * deallocBlocks;                //@synthesize deallocBlocks=_deallocBlocks - In the implementation block
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(id)parseUniforms;
-(id)parseAttributes;
-(void)setValue:(id)arg1 forUniformName:(id)arg2 ;
-(void)setTexture:(id)arg1 forUniformName:(id)arg2 ;
-(NSMutableArray *)deallocBlocks;
-(void)addGLDeallocBlock:(/*^block*/id)arg1 ;
-(int)uniformLocationForName:(id)arg1 ;
-(void)flushUniforms;
-(void)setDeallocBlocks:(NSMutableArray *)arg1 ;
-(unsigned)program;
-(NSDictionary *)uniforms;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)validate;
-(void)use;
-(NSDictionary *)attributes;
@end

