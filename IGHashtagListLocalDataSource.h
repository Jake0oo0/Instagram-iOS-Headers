/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteAbstractDataSource.h>
#import <Instagram/IGAutocompleteDataSource.h>

@class NSString;

@interface IGHashtagListLocalDataSource : IGAutocompleteAbstractDataSource <IGAutocompleteDataSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hashtagModelArrayFromMixedHashtagArray:(id)arg1 ;
-(id)resultForRow:(int)arg1 ;
-(void)setFilteredResults:(id)arg1 ;
-(void)filterHashtags:(id)arg1 ;
@end

