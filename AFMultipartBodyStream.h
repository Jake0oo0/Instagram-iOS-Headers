
#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSError, NSInputStream, NSMutableArray, NSEnumerator, AFHTTPBodyPart, NSOutputStream, NSMutableData, NSString;

@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate> {

	unsigned _streamStatus;
	NSError* _streamError;
	unsigned _numberOfBytesInPacket;
	NSInputStream* _inputStream;
	unsigned _stringEncoding;
	NSMutableArray* _HTTPBodyParts;
	NSEnumerator* _HTTPBodyPartEnumerator;
	AFHTTPBodyPart* _currentHTTPBodyPart;
	NSOutputStream* _outputStream;
	NSMutableData* _buffer;
	double _delay;

}

@property (assign,nonatomic) unsigned streamStatus;                              //@synthesize streamStatus=_streamStatus - In the implementation block
@property (nonatomic,retain) NSError * streamError;                              //@synthesize streamError=_streamError - In the implementation block
@property (assign,nonatomic) unsigned stringEncoding;                            //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSMutableArray * HTTPBodyParts;                     //@synthesize HTTPBodyParts=_HTTPBodyParts - In the implementation block
@property (nonatomic,retain) NSEnumerator * HTTPBodyPartEnumerator;              //@synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator - In the implementation block
@property (nonatomic,retain) AFHTTPBodyPart * currentHTTPBodyPart;               //@synthesize currentHTTPBodyPart=_currentHTTPBodyPart - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                      //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSMutableData * buffer;                             //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned numberOfBytesInPacket;                     //@synthesize numberOfBytesInPacket=_numberOfBytesInPacket - In the implementation block
@property (assign,nonatomic) double delay;                                       //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                        //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStringEncoding:(unsigned)arg1 ;
-(id)initWithStringEncoding:(unsigned)arg1 ;
-(void)appendHTTPBodyPart:(id)arg1 ;
-(void)setNumberOfBytesInPacket:(unsigned)arg1 ;
-(void)setInitialAndFinalBoundaries;
-(void)setHTTPBodyParts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)HTTPBodyParts;
-(unsigned)numberOfBytesInPacket;
-(AFHTTPBodyPart *)currentHTTPBodyPart;
-(NSEnumerator *)HTTPBodyPartEnumerator;
-(void)setCurrentHTTPBodyPart:(AFHTTPBodyPart *)arg1 ;
-(void)setStreamStatus:(unsigned)arg1 ;
-(void)setHTTPBodyPartEnumerator:(NSEnumerator *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_IG23*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(void)close;
-(void)setStreamError:(NSError *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)contentLength;
-(void)open;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(NSError *)streamError;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(NSMutableData *)buffer;
-(unsigned)stringEncoding;
@end

