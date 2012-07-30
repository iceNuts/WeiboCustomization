/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WBSSOContext;

@interface WBSSOManager : NSObject
{
    WBSSOContext *ssoContext;
}

+ (id)sharedManager;
@property(retain, nonatomic) WBSSOContext *ssoContext; // @synthesize ssoContext;
- (BOOL)handleOpenURL:(id)arg1;
- (BOOL)canHandleURL:(id)arg1;
- (BOOL)applicationDidBecomeActive;
- (void)ssoDidFailWithErrorInfo:(id)arg1;
- (void)ssoDidFinishWithAuthInfo:(id)arg1;
- (void)ssoDidCancel;
- (void)ssoCallbackWithResult:(id)arg1;
- (void)ssoCallbackWithResult:(id)arg1 ssoContext:(id)arg2;
- (void)animateStopSSOProcess;
- (void)stopSSOProcess;
- (void)startSSOProcess;
- (void)dealloc;
- (id)init;

@end
