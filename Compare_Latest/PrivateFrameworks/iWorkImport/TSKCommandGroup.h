/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommand.h>

#import "TSKInnerCommandsProvider-Protocol.h"

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString;

// Not exported
@interface TSKCommandGroup : TSKCommand <TSKInnerCommandsProvider>
{
    NSMutableArray *_commands;
    NSMutableIndexSet *_processResults;
    NSString *_actionString;
    NSMutableArray *_unflushableCommittedCommands;
}

@property(readonly) NSArray *commands; // @synthesize commands=_commands;
- (void)setCommandController:(id)arg1;
- (void)setActionString:(id)arg1;
- (id)actionString;
- (void)redo;
- (void)undo;
- (id)i_removeCommittedCommandAtIndex:(unsigned long long)arg1;
- (id)i_uncommittedCommands;
- (void)i_commitRemainingCommands;
- (void)commit;
- (_Bool)process;
- (_Bool)shouldRunSynchronously;
- (void)i_addCommittedCommand:(id)arg1;
- (void)addCommandsFromArray:(id)arg1;
- (void)addCommand:(id)arg1;
- (void)addCommandIfNotNil:(id)arg1;
- (void)saveToArchive:(struct CommandGroupArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandGroupArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (const struct CommandGroupArchive *)commandGroupArchiveFromUnarchiver:(id)arg1;
@property(readonly) _Bool isEmpty;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

