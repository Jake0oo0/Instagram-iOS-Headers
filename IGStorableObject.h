/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGStoredObject.h>

@class NSString;

@interface IGStorableObject : NSObject <NSCoding, IGStoredObject> {

	char _isStored;
	char _isUnmanaged;
	NSString* _pk;
	unsigned _version;

}

@property (nonatomic,copy) NSString * pk;                           //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char isStored;                         //@synthesize isStored=_isStored - In the implementation block
@property (nonatomic,readonly) char isUnmanaged;                    //@synthesize isUnmanaged=_isUnmanaged - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
+(id)pkFromDict:(id)arg1 ;
-(NSString *)pk;
-(void)setPk:(NSString *)arg1 ;
-(char)isUnmanaged;
-(id)initUnmanagedWithDictionary:(id)arg1 ;
-(id)initWithPk:(id)arg1 ;
-(void)setIsStored:(char)arg1 ;
-(id)initUnmanaged;
-(id)initUnmanagedWithPk:(id)arg1 ;
-(char)isStored;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(char)updateWithDictionary:(id)arg1 ;
@end

