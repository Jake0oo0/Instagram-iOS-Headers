/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:35 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
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

