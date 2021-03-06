/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBMessageCenterProtocol <NSObject>
- (void)forceReloadData;
- (void)onBringToFront;
- (void)loadDataFromCache;
- (void)loadMoreData;
- (void)reloadData;
- (BOOL)hasNewOrNoData;
- (BOOL)hasNoData;
- (BOOL)hasNewData;

@optional
- (void)updateUIForNewMessageCountChange;
@end

