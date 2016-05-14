/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface DDLogFileInfo : NSObject {

	NSString* filePath;
	NSString* fileName;
	NSDictionary* fileAttributes;
	NSDate* creationDate;
	NSDate* modificationDate;
	unsigned long long fileSize;

}

@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDictionary * fileAttributes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) double age; 
@property (assign,nonatomic) char isArchived; 
+(id)logFileWithPath:(id)arg1 ;
-(int)reverseCompareByCreationDate:(id)arg1 ;
-(void)setIsArchived:(char)arg1 ;
-(char)hasExtendedAttributeWithName:(id)arg1 ;
-(void)addExtendedAttributeWithName:(id)arg1 ;
-(void)removeExtendedAttributeWithName:(id)arg1 ;
-(void)renameFile:(id)arg1 ;
-(int)reverseCompareByModificationDate:(id)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)reset;
-(NSDate *)modificationDate;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(char)isArchived;
-(NSString *)fileName;
-(unsigned long long)fileSize;
-(NSDictionary *)fileAttributes;
-(double)age;
@end

