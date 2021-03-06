/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class TSCH3DDataBuffer;

// Not exported
@interface TSCH3DResource : NSObject <NSCopying>
{
    int mCaching;
    TSCH3DDataBuffer *mCache;
    int mUpdate;
    _Bool mChanged;
    _Bool mCached;
    struct DataBufferInfo mDataBufferInfo;
    unsigned long long mUniqueIdentifier;
}

+ (id)resourceWithCaching:(int)arg1;
+ (id)resource;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1;
+ (unsigned long long)allocateResourceUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=mUniqueIdentifier;
@property(nonatomic) int caching; // @synthesize caching=mCaching;
@property(nonatomic) int update; // @synthesize update=mUpdate;
- (id).cxx_construct;
@property(readonly, nonatomic) TSCH3DDataBuffer *buffer;
- (void)flushMemory;
- (void)setCache:(id)arg1;
- (_Bool)cacheNeedsUpdate;
@property(readonly, nonatomic) struct DataBufferInfo bufferInfo;
- (void)updateBufferInfoFromBuffer:(id)arg1;
@property(nonatomic) _Bool changed;
@property(readonly, nonatomic) _Bool isTexturable;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCaching:(int)arg1;

@end

