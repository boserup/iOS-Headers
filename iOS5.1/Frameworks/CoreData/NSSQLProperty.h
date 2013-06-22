/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSStoreMapping.h>

@class NSPropertyDescription, NSSQLEntity, NSString;

@interface NSSQLProperty : NSStoreMapping
{
    NSString *_name;
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    unsigned int _propertyType;
}

- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)dealloc;
- (void)setPropertyDescription:(id)arg1;
- (id)columnName;
- (id)externalName;
- (id)name;
- (void)_setName:(id)arg1;
- (unsigned int)propertyType;
- (BOOL)isColumn;
- (BOOL)isAttribute;
- (BOOL)isPrimaryKey;
- (BOOL)isForeignKey;
- (BOOL)isForeignEntityKey;
- (BOOL)isForeignOrderKey;
- (BOOL)isEntityKey;
- (BOOL)isOptLockKey;
- (BOOL)isRelationship;
- (BOOL)isToOne;
- (BOOL)isToMany;
- (BOOL)isManyToMany;
- (BOOL)isEqual:(id)arg1;
- (id)propertyDescription;
- (id)entity;
- (id)description;
- (unsigned int)slot;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setEntityForReadOnlyFetch:(id)arg1;

@end
