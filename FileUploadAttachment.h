/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface FileUploadAttachment : NSObject {

	NSString* _filename;
	NSString* _name;
	NSString* _contentType;
	NSString* _filePath;
	NSData* _contents;

}
-(id)initWithFilename:(id)arg1 name:(id)arg2 contentType:(id)arg3 filePath:(id)arg4 contents:(id)arg5 ;
-(id)initWithFilename:(id)arg1 name:(id)arg2 contents:(id)arg3 shouldCompress:(char)arg4 ;
-(id)name;
-(id)contents;
-(id)contentType;
-(id)filePath;
-(id)filename;
@end

