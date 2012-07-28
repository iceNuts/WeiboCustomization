/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ASIHTTPRequestDelegate-Protocol.h"

@class ASIHTTPRequest, DXAdAbstractControl, DXAdHLoader;

@interface DXAdHLoadAdTask : NSObject <ASIHTTPRequestDelegate>
{
    DXAdHLoader *adLoader;
    DXAdAbstractControl *adControl;
    ASIHTTPRequest *http;
}

@property DXAdAbstractControl *adControl; // @synthesize adControl;
@property DXAdHLoader *adLoader; // @synthesize adLoader;
- (void)setAdLoaderFromDefaultCenter:(id)arg1;
- (void)setAdControlFromDefaultCenter:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)loadAd:(id)arg1;
- (void)addClickTrackingUrl:(id)arg1;
- (void)addTrackInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end
