/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)use;
-(NSDictionary *)attributes;
-(void)validate;
@end

