/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:51 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGMarqueeViewLayoutSpec : NSObject {

	char _allowsInfiniteScrolling;
	float _interItemSpacing;
	float _verticalContentInset;
	float _horizontalContentPeeking;
	unsigned _contentAlignment;
	float _contentAspectRatio;
	double _autoPagingInterval;

}

@property (nonatomic,readonly) double autoPagingInterval;                   //@synthesize autoPagingInterval=_autoPagingInterval - In the implementation block
@property (nonatomic,readonly) float interItemSpacing;                      //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) float verticalContentInset;                  //@synthesize verticalContentInset=_verticalContentInset - In the implementation block
@property (nonatomic,readonly) float horizontalContentPeeking;              //@synthesize horizontalContentPeeking=_horizontalContentPeeking - In the implementation block
@property (nonatomic,readonly) char allowsInfiniteScrolling;                //@synthesize allowsInfiniteScrolling=_allowsInfiniteScrolling - In the implementation block
@property (nonatomic,readonly) unsigned contentAlignment;                   //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (nonatomic,readonly) float contentAspectRatio;                    //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
-(id)initWithAutoPagingInterval:(double)arg1 interItemSpacing:(float)arg2 verticalContentInset:(float)arg3 horizontalContentPeeking:(float)arg4 allowsInfiniteScrolling:(char)arg5 contentAlignment:(unsigned)arg6 contentAspectRatio:(float)arg7 ;
-(double)autoPagingInterval;
-(float)horizontalContentPeeking;
-(float)verticalContentInset;
-(float)interItemSpacing;
-(char)allowsInfiniteScrolling;
-(id)init;
-(float)contentAspectRatio;
-(unsigned)contentAlignment;
@end

