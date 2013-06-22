/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface CKMultiDict : NSObject
{
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)allKeys;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (id)popObjectForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (void)dealloc;

@end
