/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSSQLitePropertyPredicate.h>

#import "NSCopying-Protocol.h"

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying>
{
    BOOL _matchesNull;
}

+ (id)isNullPredicateWithProperty:(id)arg1;
+ (id)isNotNullPredicateWithProperty:(id)arg1;
@property(readonly, nonatomic) BOOL matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

