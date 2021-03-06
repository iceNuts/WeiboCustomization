/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSData, NSDictionary, NSMutableArray;

@interface WBGIFDecodeOperation : NSOperation
{
    NSData *gifData;
    NSMutableArray *gifFrames;
    NSDictionary *gifDic;
    float gifDuration;
}

@property(retain, nonatomic) NSDictionary *gifDic; // @synthesize gifDic;
@property(retain, nonatomic) NSData *gifData; // @synthesize gifData;
- (void)dealloc;
- (void)finishedDecodingWithDecoder:(id)arg1;
- (void)finishedDecoding;
- (void)calc;
- (void)main;

@end

