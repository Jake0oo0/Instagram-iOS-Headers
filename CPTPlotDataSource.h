/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPTPlotDataSource <NSObject>
@optional
-(id)numbersForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3;
-(double*)doublesForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(double)doubleForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3;
-(id)dataForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(id)dataForPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)dataLabelsForPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)dataLabelForPlot:(id)arg1 recordIndex:(unsigned)arg2;

@required
-(unsigned)numberOfRecordsForPlot:(id)arg1;

@end

