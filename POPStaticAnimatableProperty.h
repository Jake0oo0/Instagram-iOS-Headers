
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPAnimatableProperty.h>

@interface POPStaticAnimatableProperty : POPAnimatableProperty {

	SCD_Struct_PO120* _state;

}
-(/*^block*/id)readBlock;
-(/*^block*/id)writeBlock;
-(id)name;
-(float)threshold;
@end

