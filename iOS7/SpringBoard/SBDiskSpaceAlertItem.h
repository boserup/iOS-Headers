/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBDiskSpaceAlertItem : SBAlertItem
{
    long long _usageButtonIndex;
}

- (_Bool)shouldShowInEmergencyCall;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showUsagePrefs;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (id)init;

@end

