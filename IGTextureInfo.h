/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:57 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKTextureInfo.h>

@interface IGTextureInfo : GLKTextureInfo {

	char _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _width;
	unsigned _height;
	int _alphaState;
	int _textureOrigin;

}

@property (assign) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (assign) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (assign) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (assign) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (assign) int alphaState;                    //@synthesize alphaState=_alphaState - In the implementation block
@property (assign) int textureOrigin;                 //@synthesize textureOrigin=_textureOrigin - In the implementation block
@property (assign) char containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 ;
-(void)setAlphaState:(int)arg1 ;
-(void)setTextureOrigin:(int)arg1 ;
-(void)setContainsMipmaps:(char)arg1 ;
-(int)alphaState;
-(int)textureOrigin;
-(char)containsMipmaps;
-(void)setName:(unsigned)arg1 ;
-(unsigned)name;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
@end

