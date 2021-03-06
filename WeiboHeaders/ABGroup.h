/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface ABGroup : NSObject
{
    void *record;
}

+ (id)group;
+ (id)groupWithRecordID:(int)arg1;
+ (id)groupWithRecord:(void *)arg1;
@property(readonly, nonatomic) void *record; // @synthesize record;
@property(nonatomic) NSString *name;
- (id)getRecordString:(int)arg1;
- (BOOL)removeMember:(id)arg1 withError:(id *)arg2;
- (BOOL)addMember:(id)arg1 withError:(id *)arg2;
- (id)membersWithSorting:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *members;
@property(readonly, nonatomic) BOOL isPerson;
@property(readonly, nonatomic) unsigned int recordType;
@property(readonly, nonatomic) int recordID;
- (BOOL)removeSelfFromAddressBook:(id *)arg1;
- (void)dealloc;
- (id)initWithRecord:(void *)arg1;

@end

