/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)cachesDirectoryURL;
-(id)initWithFileManager:(id)arg1 ;
-(id)URLforUserDomainDirectory:(unsigned)arg1 ;
-(id)temporaryDirectoryURL;
-(id)trashDirectoryURL;
-(id)init;
-(NSFileManager *)fileManager;
-(id)documentsDirectoryURL;
@end

