/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBContactEngineDelegate <NSObject>

@optional
- (void)contactEngine:(id)arg1 didFailToSearchUsersByKeyword:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didFinishSearchOfUsers:(id)arg2 keyword:(id)arg3 hasMore:(BOOL)arg4;
- (void)contactEngine:(id)arg1 didFailQuickSearchByKeyword:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didFinishQuickSearchOfUsers:(id)arg2 keyword:(id)arg3;
- (void)contactEngine:(id)arg1 didFailToSearchFollowersByKeyword:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didFinishSearchOfFollowers:(id)arg2 keyword:(id)arg3 hasMore:(BOOL)arg4;
- (void)contactEngine:(id)arg1 didFailToRemoveFollower:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didRemoveFollower:(id)arg2;
- (void)contactEngine:(id)arg1 didFailToDownloadFollowersWithError:(id)arg2;
- (void)contactEngine:(id)arg1 didDownloadFollowers:(id)arg2 hasMore:(BOOL)arg3;
@end
