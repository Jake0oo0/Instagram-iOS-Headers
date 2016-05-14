/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaMetadataProtocol.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IGUsertagGroup, NSString;

@interface IGUsertagsMetadata : NSObject <IGMediaMetadataProtocol, NSCoding> {

	IGUsertagGroup* _usertags;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;              //@synthesize usertags=_usertags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(void)clearFacesInfo;
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

