/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTimelineItem.h"

#import "WBDatabaseModel-Protocol.h"

@class WBStatus;

@interface WBComment : WBTimelineItem <WBDatabaseModel>
{
    WBStatus *status;
}

+ (void)saveComments:(id)arg1 intoDB:(id)arg2 type:(id)arg3 shouldRemoveHistory:(BOOL)arg4;
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2;
+ (id)arrayWithCommentList:(id)arg1 ofStatus:(id)arg2;
+ (id)commentWithDictionary:(id)arg1 inCommentListOfStatus:(id)arg2;
@property(retain, nonatomic) WBStatus *status; // @synthesize status;
- (void)insertIntoDB:(id)arg1 type:(id)arg2;
- (void)saveToDB:(id)arg1 type:(id)arg2;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (void)dealloc;
- (BOOL)isRepliedToStatus;
- (BOOL)deletable;
- (id)typeName;
- (BOOL)updateWithJSONDictionary:(id)arg1;
- (id)statusWithDictionary:(id)arg1;

@end
