/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PRLMTableView.h"

#import "WBSkinning-Protocol.h"

@class NSMutableDictionary, UIColor;

@interface WBTableView : PRLMTableView <WBSkinning>
{
    BOOL isSearchResult;
    NSMutableDictionary *userInfo;
    unsigned int contextVersion;
    int originalSeparatorStyle;
    UIColor *originalSeparatorColor;
}

@property(nonatomic) BOOL isSearchResult; // @synthesize isSearchResult;
- (void)dealloc;
- (void)reloadData;
- (void)reloadUIElements;
- (void)renderCellContext:(id)arg1;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (struct CGRect)frameOfNoDataPromptLabel;
- (void)configNoDataPromptLabel;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end
