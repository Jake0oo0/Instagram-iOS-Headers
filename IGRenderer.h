/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, IGContext, IGFilter;

@interface IGRenderer : NSObject {

	NSMutableArray* _outputs;
	IGContext* _context;
	IGFilter* _filter;

}

@property (nonatomic,readonly) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IGFilter * filter;                  //@synthesize filter=_filter - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)renderTo:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(IGFilter *)filter;
-(void)render:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(IGContext *)context;
-(void)setFilter:(IGFilter *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)render;
@end

