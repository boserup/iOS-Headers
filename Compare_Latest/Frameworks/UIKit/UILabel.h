/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@class NSAttributedString, NSMutableAttributedString, NSMutableDictionary, NSString, UIColor, UIFont, _UILabelScaledMetrics;

@interface UILabel : UIView <NSCoding>
{
    struct CGSize _size;
    UIColor *_highlightedColor;
    long long _numberOfLines;
    long long _measuredNumberOfLines;
    double _lastLineBaseline;
    double _minimumScaleFactor;
    NSMutableAttributedString *_attributedText;
    NSAttributedString *_synthesizedAttributedText;
    NSMutableDictionary *_defaultAttributes;
    double _minimumFontSize;
    long long _lineSpacing;
    id _layout;
    _UILabelScaledMetrics *_scaledMetrics;
    struct {
        unsigned int unused1:3;
        unsigned int highlighted:1;
        unsigned int autosizeTextToFit:1;
        unsigned int autotrackTextToFit:1;
        unsigned int baselineAdjustment:2;
        unsigned int unused2:2;
        unsigned int enabled:1;
        unsigned int wordRoundingEnabled:1;
        unsigned int explicitAlignment:1;
        unsigned int marqueeEnabled:1;
        unsigned int marqueeRunable:1;
        unsigned int marqueeRequired:1;
        unsigned int drawsLetterpress:1;
        unsigned int unused3:1;
        unsigned int usesExplicitPreferredMaxLayoutWidth:1;
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
        unsigned int drawsDebugBaselines:1;
        unsigned int explicitBaselineOffset:1;
        unsigned int usesSimpleTextEffects:1;
    } _textLabelFlags;
    double _preferredMaxLayoutWidth;
}

+ (struct CGSize)_legacy_adjustSizeForWebKitConstraining:(struct CGSize)arg1 withFont:(id)arg2;
+ (id)_defaultAttributes;
+ (id)defaultFont;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (_Bool)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(_Bool)arg1;
- (_Bool)drawsUnderline;
- (void)setDrawsUnderline:(_Bool)arg1;
- (id)letterpressStyle;
- (void)setLetterpressStyle:(id)arg1;
- (_Bool)drawsLetterpress;
- (void)setDrawsLetterpress:(_Bool)arg1;
- (void)setMarqueeRunning:(_Bool)arg1;
- (_Bool)marqueeRunning;
- (void)_stopMarqueeWithRedisplay:(_Bool)arg1;
- (void)_startMarqueeIfNecessary;
- (void)_startMarquee;
- (void)_drawFullMarqueeTextInRect:(struct CGRect)arg1;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (double)_maximumMarqueeTextWidth;
- (id)_siblingMarqueeLabels;
- (void)setMarqueeEnabled:(_Bool)arg1;
- (_Bool)_shouldDrawUnderlinesLikeWebKit;
- (void)_setWordRoundingEnabled:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 baselineCalculationOnly:(_Bool)arg2;
- (_Bool)_updateScaledMetricsForRect:(struct CGRect)arg1;
- (_Bool)_drawsUnderline;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithEngine:(id)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (double)_baselineOffsetFromBottom;
@property(readonly, nonatomic) double _lastLineBaseline;
@property(nonatomic) long long baselineAdjustment;
- (_Bool)_drawsDebugBaselines;
- (void)_setDrawsDebugBaselines:(_Bool)arg1;
@property(nonatomic) _Bool adjustsLetterSpacingToFitWidth;
@property(nonatomic) long long lineSpacing;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long lineBreakMode;
- (void)_setLineBreakMode:(long long)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (double)shadowBlur;
- (void)setShadowBlur:(double)arg1;
@property(nonatomic) struct CGSize shadowOffset;
- (void)_setShadowUIOffset:(struct UIOffset)arg1;
@property(retain, nonatomic) UIColor *shadowColor;
- (id)_shadow;
- (void)_setShadow:(id)arg1;
@property(retain, nonatomic) UIFont *font;
- (void)_setFont:(id)arg1;
- (void)_baselineOffsetDidChange;
- (id)currentTextColor;
- (id)_disabledFontColor;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(nonatomic) long long textAlignment;
- (void)_setTextAlignment:(long long)arg1;
@property(nonatomic) double minimumFontSize;
- (double)_minimumFontSize;
- (void)_setMinimumFontSize:(double)arg1;
- (id)_associatedScalingLabel;
- (double)_actualScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
@property(retain, nonatomic) UIColor *textColor;
- (void)_setTextColor:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @dynamic userInteractionEnabled;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)_setText:(id)arg1;
- (void)_invalidateTextSize;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(_Bool)arg3;
- (id)_stringDrawingContext;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (struct CGSize)textSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_attributedStringHasAttributesNotCoveredByPrimitives;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_invalidateAsNeededForNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
@property(retain, nonatomic, getter=_synthesizedAttributedText, setter=_setSynthesizedAttributedText:) NSAttributedString *_synthesizedAttributedText;
- (void)_invalidateDefaultAttributes;
- (id)_compatibilityAttributedString;
- (void)_setDefaultAttributes:(id)arg1;
- (id)_defaultAttributes;
- (double)_preferredMaxLayoutWidth;

@end

