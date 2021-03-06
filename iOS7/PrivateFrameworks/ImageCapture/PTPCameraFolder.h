/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraFolder.h>

@class NSString;

@interface PTPCameraFolder : ICCameraFolder
{
    void *_ptpCameraFolderProperties;
    NSString *_path;
}

@property(retain) NSString *path; // @synthesize path=_path;
- (id)description;
- (void)enumerateContent;
- (_Bool)hasDCIMParent;
- (id)folderForObjectHandleCreatingIfNeeded:(unsigned int)arg1 addUsedObjectIDs:(id)arg2 numFoldersCreated:(int *)arg3;
- (id)folderForObjectHandle:(unsigned int)arg1;
- (id)itemForObjectHandle:(unsigned int)arg1;
- (void)refreshInfo;
- (_Bool)deleteItemFromCamera:(id)arg1;
@property(copy) id info;
@property(readonly) unsigned int objHandle;
@property(readonly) unsigned int storageID;
@property(readonly) unsigned long long type;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned int)arg5 objectHandle:(unsigned int)arg6;

@end

