/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PRLMHeaderView.h"

#import "WBAppLanguageObserver-Protocol.h"
#import "WBSkinning-Protocol.h"

@interface WBPullRefreshHeaderView : PRLMHeaderView <WBSkinning, WBAppLanguageObserver>
{
}

- (void)appLanguageDidChange:(id)arg1;
- (id)localizedLastUpdateTimeText:(id)arg1;
- (id)localizedPromptText;
- (void)reloadUIElements;
- (id)arrowImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

