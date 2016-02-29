/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentUploadable.h>
#import <Instagram/IGDirectCommentable.h>

@class IGDirectContentUploadInfo, NSString, IGUser, NSArray;

@interface IGDirectShareProfile : IGDirectContent <IGDirectContentUploadable, IGDirectCommentable> {

	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	IGUser* _sharedUser;
	NSArray* _previewMedia;

}

@property (nonatomic,retain) IGUser * sharedUser;                                 //@synthesize sharedUser=_sharedUser - In the implementation block
@property (nonatomic,retain) NSArray * previewMedia;                              //@synthesize previewMedia=_previewMedia - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(NSArray *)previewMedia;
-(void)setPreviewMedia:(NSArray *)arg1 ;
-(IGUser *)sharedUser;
-(void)setSharedUser:(IGUser *)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 sharedUser:(id)arg2 recipient:(id)arg3 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)digestDescription;
@end

