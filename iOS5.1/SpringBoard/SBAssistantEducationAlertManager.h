/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString, NSTimer, SBAssistantEducationAlertItem;

@interface SBAssistantEducationAlertManager : NSObject
{
    int _syncFinishedToken;
    id _unlockHandler;
    NSTimer *_unlockTimer;
    BOOL _userHasBeenEducated;
    BOOL _waitingOnUserDataSync;
    BOOL _assistantSupported;
    BOOL _dictationSupported;
    BOOL _assistantHasBeenActivated;
    NSString *_syncDidFinishLanguage;
    NSMutableSet *_newlyAvailableLanguages;
    int _type;
    NSString *_language;
    SBAssistantEducationAlertItem *_item;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_setEducated;
- (void)_showEducationAlert;
- (void)_startUnlockTimer;
- (void)_clearUnlockTimer;
- (void)_unlockTimerFired:(id)arg1;
- (void)_afSyncDidFinish;
- (void)_languageActivated:(id)arg1;
- (id)_currentAssistantLanguage;
- (BOOL)_availableForLanguage:(id)arg1;
- (BOOL)_availableForCurrentLanguage;
- (BOOL)_shouldAcceptNewLanguage:(id)arg1;
- (void)_assistantActivationChanged:(id)arg1;
- (BOOL)_shouldShowReadyForLanguageCode:(id)arg1;
- (void)_calculateTypeAndLanguage;
- (void)_waitForUnlockToDisplayAlert;
- (void)educationAlertWasDeactivated:(id)arg1;

@end

