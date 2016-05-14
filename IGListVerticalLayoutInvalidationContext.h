/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSSet;

@interface IGListVerticalLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	char _invalidateEstimatedAttributes;
	NSSet* _invalidatedIndexPaths;

}

@property (assign,nonatomic) char invalidateEstimatedAttributes;              //@synthesize invalidateEstimatedAttributes=_invalidateEstimatedAttributes - In the implementation block
@property (nonatomic,copy) NSSet * invalidatedIndexPaths;                     //@synthesize invalidatedIndexPaths=_invalidatedIndexPaths - In the implementation block
-(char)invalidateEstimatedAttributes;
-(void)setInvalidateEstimatedAttributes:(char)arg1 ;
-(void)setInvalidatedIndexPaths:(NSSet *)arg1 ;
-(id)init;
-(id)description;
-(NSSet *)invalidatedIndexPaths;
@end

