/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNFrameBuildAnimator-Protocol.h"

@class KNAnimParameterGroup, NSArray, TSDGLBloomEffect, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader, TSDGLTextureInfo;

// Not exported
@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNAnimParameterGroup *_parameterGroup;
    struct CGRect _drawableFrame;
    struct CGRect _frameRect;
    struct CATransform3D _baseOrthoTransform;
    struct CATransform3D _baseTransform;
    int _oldViewportRect[4];
    NSArray *_fireworksSystems;
    TSDGLShader *_fireworksShader;
    TSDGLShader *_objectShader;
    TSDGLDataBuffer *_objectDataBuffer;
    TSDGLShader *_centerBurstShader;
    TSDGLDataBuffer *_centerBurstDataBuffer;
    TSDGLTextureInfo *_centerBurstTextureInfo;
    TSDGLTextureInfo *_particleTextureInfo;
    TSDGLFrameBuffer *_framebuffer;
    TSDGLShader *_fboShader;
    TSDGLDataBuffer *_fboDataBuffer;
    TSDGLBloomEffect *_bloomEffect;
    double _previousPercent;
    _Bool _shouldForceDrawingForPreWarming;
    _Bool _shouldApplyBloomEffect;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (void)p_drawParticleSystemsWithPercent:(double)arg1 sparkles:(_Bool)arg2 particleSystemOpacity:(double)arg3;
- (void)p_drawObject:(id)arg1 withContext:(id)arg2;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupFBOWithSize:(struct CGSize)arg1;
- (id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 context:(id)arg3;
- (void)p_setupParticleTexture;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

@end

