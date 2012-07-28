/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SinaAdDB : NSObject
{
    NSString *CreateTable_Adcache;
    NSString *CreateTable_AdClick;
    NSString *CreteaTable_AdClose;
    NSString *CreateTable_AdPV;
    NSString *CreateTable_AdTimes;
}

+ (id)sinaAdDBInstance;
- (void)recordForward:(id)arg1 adid:(id)arg2 showforward:(int)arg3;
- (void)recordAttention:(id)arg1 adid:(id)arg2 showattention:(int)arg3;
- (void)resetAdTempVisible:(id)arg1;
- (id)getAdTimes:(id)arg1 adid:(id)arg2;
- (BOOL)isLastVisibleAd:(id)arg1;
- (void)setAdTempVisible:(id)arg1 adInfo:(id)arg2 adTime:(id)arg3;
- (void)setAdTempInvisible:(id)arg1 adInfo:(id)arg2 isVisiable:(int)arg3;
- (void)setAdVisible:(id)arg1 adInfo:(id)arg2;
- (void)recordPvAd:(id)arg1 adinfo:(id)arg2;
- (void)recordTimeoutAd:(id)arg1 adInfo:(id)arg2;
- (void)recordCloseAd:(id)arg1 adInfo:(id)arg2;
- (int)getClickCountByAdId:(id)arg1;
- (void)recordClickAd:(id)arg1 adInfo:(id)arg2;
- (void)uploadDataOK:(id)arg1;
- (void)recordPingSuccess:(id)arg1 adid:(id)arg2;
- (int)getPvcountByAdId:(id)arg1;
- (id)getAdIdByPosId:(id)arg1;
- (int)getPvCountOfTodayByAdId:(id)arg1;
- (id)getClosedOfToday:(id)arg1;
- (id)getClickedOfToday:(id)arg1;
- (id)getInvisibleAdIds:(id)arg1;
- (void)saveDb:(id)arg1 ads:(id)arg2;
- (void)deleteAdFile:(id)arg1 adwordid:(id)arg2;
- (void)deleteInvalidAdwordCache:(id)arg1 adwordid:(id)arg2;
- (id)getAdListFromDBWithFilter:(id)arg1;
- (id)getAdListFromDBWithPosId:(id)arg1;
- (id)getAdInfoByAdwordId:(id)arg1;
- (id)getAdInfoByAdidWithAll:(id)arg1;
- (id)getAdInfoByAdid:(id)arg1;
- (int)getAdTimeoutCountFromDB:(id)arg1;
- (int)getAdCloseCountFromDB:(id)arg1;
- (id)getAdListFromDB:(id)arg1;
- (id)getAllAdidsString;
- (id)getAllAdListFromDB;
- (void)clearOldRecord;
- (void)clearCache:(id)arg1;
- (void)dropTable;
- (void)createTable;
- (id)init;
- (void)dealloc;

@end
