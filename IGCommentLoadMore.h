/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:33 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGCommentLoadMore : NSObject <IGDKDiffable> {

	char _loading;

}

@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
-(id)initWithLoading:(char)arg1 ;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

