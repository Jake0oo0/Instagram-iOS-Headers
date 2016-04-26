/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSMutableDictionary, IGStringStyle, NSMutableAttributedString;

@interface IGStyledString : NSObject {

	NSMutableDictionary* _sizeCache;
	IGStringStyle* _style;
	NSMutableAttributedString* _attributedString;

}

@property (nonatomic,retain) IGStringStyle * style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)createWithCacheKey:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(CGSize)sizeForFlexibleHeightWithWidth:(int)arg1 ;
-(id)initWithBaseStyle:(id)arg1 ;
-(void)prependAttributedString:(id)arg1 ;
-(void)appendStyledString:(id)arg1 ;
-(void)appendAttachment:(id)arg1 ;
-(void)appendAnnotatedString:(id)arg1 ;
-(void)appendLinkedString:(id)arg1 withExternalURLs:(char)arg2 ;
-(void)appendLinkedString:(id)arg1 ;
-(void)appendLinkedTitleString:(id)arg1 ;
-(int)heightForWidth:(int)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)appendString:(id)arg1 ;
-(IGStringStyle *)style;
-(void)setStyle:(IGStringStyle *)arg1 ;
-(void)setAttributedString:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)attributedString;
-(void)appendAttributedString:(id)arg1 ;
@end

