//
// Created by Jeff Roberts on 1/23/15.
// Copyright (c) 2015 nimbleNoggin.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Typhoon/TyphoonAssembly.h>
#import <FMDB/FMDB.h>

@class NIOLoLApiRequestOperationManager;
@class NIOGetRealmTask;
@class NIODataDragonSyncService;
@protocol NIOContentProvider;
@class NIOCoreComponents;
@class NIODataDragonContentProvider;
@class NIODataDragonSqliteOpenHelper;
@class NIOQueryRealmsTask;
@class NIODeleteRealmsTask;
@class NIOClearLocalDataDragonDataTask;
@class NIOInsertRealmTask;
@class NIOInsertDataDragonRealmTask;
@class NIOGetChampionStaticDataTask;

@interface NIODataDragonComponents : TyphoonAssembly
@property (nonatomic, strong, readonly) NIOCoreComponents *coreComponents;

-(NIOClearLocalDataDragonDataTask *)clearLocalDataDragonDataTask;
-(NIODataDragonContentProvider *)dataDragonContentProvider;
-(FMDatabase *)dataDragonSqliteDatabase;
-(NIODataDragonSqliteOpenHelper *)dataDragonSqliteOpenHelper;
-(NIODataDragonSyncService *)dataDragonSyncService;
-(NIODeleteRealmsTask *)deleteRealmsTask;
-(NIOGetChampionStaticDataTask *)getChampionStaticDataTask;
-(NIOGetRealmTask *)getRealmTask;
-(NIOInsertDataDragonRealmTask *)insertDataDragonRealmTask;
-(NIOInsertRealmTask *)insertRealmTask;
-(NIOLoLApiRequestOperationManager *)lolStaticDataApiRequestOperationManager;
-(NIOQueryRealmsTask *)queryRealmsTask;
@end