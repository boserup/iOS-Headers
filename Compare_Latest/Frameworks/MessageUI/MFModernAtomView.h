/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIDefaultKeyboardInput.h"

@class MFModernAtomBackgroundView, MFModernAtomIconView, NSString, UIActivityIndicatorView, UIColor, UIFont, UILabel, UIView;

@interface MFModernAtomView : UIDefaultKeyboardInput
{
    MFModernAtomIconView *_badgeIconView;
    MFModernAtomIconView *_accessoryIconView;
    UIColor *_effectiveTintColor;
    unsigned long long _disabledPresentationOptions;
    UIView *_baselineView;
    MFModernAtomBackgroundView *_background;
    UIView *_compositingView;
    UIView *_titleLabelFillView;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _scalingFactor;
    _Bool _isPrimaryAddressAtom;
    _Bool _separatorHidden;
    _Bool _selected;
    UIFont *_titleFont;
    unsigned long long _presentationOptions;
}

+ (id)_badgeImagesForPresentationOptions:(unsigned long long)arg1 iconOrder:(const unsigned long long *)arg2 orderingLength:(unsigned long long)arg3 tintColor:(id)arg4 large:(_Bool)arg5 variant:(int)arg6;
+ (id)_defaultLabelAttributesWithFont:(id)arg1;
+ (id)_defaultLabelAttributes;
+ (id)_SMSTintColor;
+ (id)_failureTintColor;
+ (id)_defaultTintColor;
+ (id)primaryAtomFont;
+ (id)defaultFont;
+ (double)horizontalPadding;
+ (struct CGPoint)defaultBaselinePoint;
+ (double)defaultHeight;
@property(nonatomic) unsigned long long presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool isPrimaryAddressAtom; // @synthesize isPrimaryAddressAtom=_isPrimaryAddressAtom;
@property(readonly, nonatomic) MFModernAtomIconView *badgeIconView; // @synthesize badgeIconView=_badgeIconView;
@property(readonly, nonatomic) MFModernAtomIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_label;
- (struct CGSize)intrinsicContentSize;
- (id)viewForBaselineLayout;
@property(readonly, nonatomic) struct CGPoint baselinePoint;
- (void)setScalingFactor:(double)arg1;
- (double)scalingFactor;
- (double)_leftPadding;
- (double)_rightPadding;
- (double)_rightInset;
- (double)_leftInset;
- (struct UIEdgeInsets)edgeInsets;
- (void)layoutSubviews;
- (double)preferredWidthWithSizeConstraints:(struct CGSize)arg1;
- (double)preferredWidth;
- (void)_updateFontIfNecessary;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
@property(nonatomic) _Bool hidesVIPIndicator;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) int separatorStyle;
@property(nonatomic) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(readonly, nonatomic) unsigned long long effectivePresentationOptions;
- (void)_setPresentationOption:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)clearPresentationOption:(unsigned long long)arg1;
- (void)appendPresentationOption:(unsigned long long)arg1;
- (void)_invalidatePresentationOptions;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)tintColorDidChange;
- (void)_setEffectiveTintColor:(id)arg1;
@property(readonly, nonatomic) UIColor *effectiveTintColor;
@property(readonly, nonatomic) MFModernAtomBackgroundView *backgroundView;
- (int)_preferredIconVariant;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 presentationOptions:(unsigned long long)arg2 separatorStyle:(int)arg3;

@end
